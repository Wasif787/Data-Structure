#include <iostream>
using namespace std;

int main() {
    const int i =10;
  int List[i]= {0,1,2,3,4,5,6,7,8,9};
  for(int i=0; i<10; i++){

    //cout<< "i = "<< i << " List["<<i<<"]=" << List[i] << " &List["<<i<<"]=" << &List[i] <<endl;

    printf("address of List[%u],value of List[%d]",&List[i],List[i]);

  }
  }
  