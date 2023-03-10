#include <iostream>
using namespace std;
                            //Row Measure 2D Array
int main() {
    const int X = 4; 
    const int Y = 4;
  int List[X][Y]= {{1,2,3,4},
                   {11,22,33,44},
                   {111,222,333,444},
                   {1111,2222,3333,4444}};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){

            cout<< "List["<<i<<"]["<<j<<"] = "<<List[i][j]<<endl;
            int BA = 2000;
            int sizeofDT = 4;
            int Address = BA + (i*Y+j)*sizeofDT;

            cout<<" Address = " <<Address<<endl<<endl;


        

        }


    }
 
  }