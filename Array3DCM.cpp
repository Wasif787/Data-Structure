#include <iostream>
using namespace std;
                            //Column Measure 3D Array
int main() {
    const int X = 2; 
    const int Y = 3;
    const int Z = 2;
    int List[X][Y][Z] = {
                            {{1, 2},{3, 4},{5, 6}},
                            {{7, 8},{9, 10},{11, 12}}
                        };

    for(int k=0; k<2; k++){
        for(int j=0; j<3; j++){
            for (int i = 0; i <2 ; i++)
            {
                
            
            

            cout<< "List["<<i<<"]["<<j<<"]["<<k<<"]  = "<<List[i][j][k]<<endl;
            int BA = 2000;
            int sizeofDT = 4;
            int Address = BA + (k*X*Y+j*X+i)*sizeofDT;

            cout<<" Address = " <<Address<<endl<<endl;


            }

        }


    }
 
  }