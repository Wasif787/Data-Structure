#include <iostream>
using namespace std;

int linearsearch(int a[],int n){
    int temp = -1;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]==n)
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
    cout<<"Array limit"<<endl;
    int t;
    cin>>t;
    int arr[t];
    cout<<"Store the numbers in Array"<<endl;
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    



    cout<<"Enter a Number which u want to search:"<<endl;
    int num;
    cin>>num;

    linearsearch(arr,num);

    
}