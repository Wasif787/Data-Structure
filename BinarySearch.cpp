#include <iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int x){
    while (left<=right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            left = mid+1;

        }
        else{
            right=mid-1;
        }
        
    }
    return -1;

}



int main() {
  int num;
  int t;
  int output;


  cout << "Write array limit" <<endl;
  cin>>t;
  
  cout <<"Write elements of array in ascending order"<<endl;
  int myarr[t];
  for (int i = 0; i < t; i++)
  {
    cin>>myarr[i];
  }

  cout<<"Write a number which u want to search"<<endl;
  cin>>num;  

  output = binarysearch(myarr,0,t-1,num);
  if (output==-1)
  {
    cout<<"Element not found"<<endl;

  }
  else{
    cout<<"Element found at position: "<< output <<endl;
  }
  
    
}