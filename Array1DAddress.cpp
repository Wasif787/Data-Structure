#include <iostream>
using namespace std;

int main() {
    const int i =10;
  int List[i]= {0,1,2,3,4,5,6,7,8,9};
  for(int i=0; i<10; i++){
    int BA = 2000;
    int sizeofDT = 4;
    int Address = BA + i*sizeofDT;
    

    cout<< "i = "<< i << " Address = " <<Address<<endl;

  }
  }