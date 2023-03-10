#include <iostream>
using namespace std;

void Swap(int &a,int &b){
    int c;
    c = a;
    a = b;
    b = c;

    cout << "a=" << a << " b=" << b << endl;
}

int main() {
  int x =5;
  int y =6;
  Swap(x,y);
    cout << "x=" << x  << " y=" << y << endl;
}