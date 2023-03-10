#include <iostream>
using namespace std;

int selectionsort(int arr[],int a){
    for (int i = 0; i < a-1; i++)
    {
        int min = i;
        for (int j = i+1; j < a; j++)
        {   
            if(arr[j] < arr[min]){
            min = j;
            }
        }
        if (min!=i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
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