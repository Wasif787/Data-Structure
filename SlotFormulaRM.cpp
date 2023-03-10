#include <iostream>
using namespace std;

int main() {
  int n=1;
  const int s=4;
  const int i=10;
 int S[s]={4};
 int I[i]={0,1,2,3,4,5,6,7,8,9};

  int Slot=0;
  for (int i = 0; i <= n-1; i++)
  {
    int Prod = 1;
    for (int s = 0; s <=n-1; s++)
    {
       Prod = Prod*S[s];
    }
        Slot=Slot+I[i]*Prod;
    
  }
  
  
      cout<<Slot<<endl;




}