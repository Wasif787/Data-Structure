#include <iostream>
using namespace std;

int selectionsort(int arr[],int a){
    for (int i = 0; i < a-1; i++)
    {
        int max = i;
        for (int j = i+1; j < a; j++)
        {   
            if(arr[j] > arr[max]){
            max = j;
            }
        }
        if (max!=i)
        {
            int temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
        }
        
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

    selectionsort(myarr,t);
    cout<<"Sorted Array: ";
    cout<<"{ ";   
    for (int i = 0; i < t; i++)
    {
        cout<< myarr[i] <<"  ";
    
    }
    cout<<"}"<<endl;    


    
}