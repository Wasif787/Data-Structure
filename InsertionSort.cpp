#include <iostream>
using namespace std;

   int insertionsort(int arr[],int a){
        int key;
        int j=0;
        for (int i = 1; i < a; i++)
        {
            key = arr[i];
            j=i-1;
            while (j>=0 && arr[j] > key)    //For Decending order Sign change <
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;

        }
        

    }



int main() {
     int t;
    cout<<"Write array limit"<<endl;
    cin>>t;

    cout<<"Write elements of array in random order"<<endl;
    int myarr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>myarr[i];
    }
    
    cout<<"Unsorted Array: ";
    cout<<"{ ";   
    for (int i = 0; i < t; i++)
    {
        cout<< myarr[i] <<"  ";
    
    }
    cout<<"}"<<endl;

       insertionsort(myarr,t);


    cout<<"Sorted Array: ";
    cout<<"{ ";   
    for (int i = 0; i < t; i++)
    {
        cout<< myarr[i] <<"  ";
    
    }
    cout<<"}"<<endl;    
    
}