#include <iostream>
using namespace std;

int linearsearch(int arr[],int n){
    int temp = -1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==n)
        {
            cout<<"Number found at index: "<<i<<endl;     
            temp=0;
        }
    }
        if(temp==-1){
            cout<<"Not found"<<endl;
        }
        
    
    

}



int main() {
  int myarr[10]={20,13,5,9,10,43,5,6,17,82};
  cout<<"Enter a Number which u want to search:"<<endl;
  int num;
  cin>>num;

  linearsearch(myarr,num);

    
}