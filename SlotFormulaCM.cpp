#include <iostream>
using namespace std;

int main() {
  int n=3;
  const int s=3;
  const int i=3;
 int S[s]={4};
 int I[i]={
    1,2,3
  };

  int Slot=0;
  for (int i = n-1; i <= 0; i--)
  {
    int Prod = 1;
    for (int s = n-1; s <=0; s--)
    {
       Prod = Prod*S[s];
    }
        Slot=Slot+I[i]*Prod;

  }
  