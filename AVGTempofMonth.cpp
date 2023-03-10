#include <iostream>
using namespace std;

            //Average Temperature Calculation of the Month

int main() {
  int i,j,k,min,max,total=0;
  int Temp[3][7][4];
  float avg;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 7; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout<< "Enter Temperature: "<<endl;
            cin >> Temp[i][j][k];

        }

    }
    
  }
   max=min=Temp[0][0][0];
     for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 7; j++)
    {
        for (int k = 0; k < 4; k++)
        {
           total = total + Temp[i][j][k];
           if (Temp[i][j][k]> max)
           {
            max = Temp[i][j][k];
           }
           if (Temp[i][j][k]< min)
           {
            min = Temp[i][j][k];
           }

        }

    }
    
  }

   avg = total / 84.0;
   cout << "Max Temp of the Month :" << max << endl;
   cout << "Min Temp of the Month :" << min << endl;
   cout << "Total Temp of the Month :" << total << endl;
}