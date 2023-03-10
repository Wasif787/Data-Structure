#include <iostream>
using namespace std;

   int bubblesort(int arr[], int a){

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < (a-i-1); j++)
            {
                if (arr[j]>arr[j+1])    //For decending order < sign will be used.
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;

                }
                
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

       bubblesort(myarr,t);


    cout<<"Sorted Array: ";
    cout<<"{ ";   
    for (int i = 0; i < t; i++)
    {
        cout<< myarr[i] <<"  ";
    
    }
    cout<<"}"<<endl;    
    

    
}