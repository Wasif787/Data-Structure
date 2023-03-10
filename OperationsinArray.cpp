#include <iostream>
using namespace std;

void traversal(int list[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << list[i]<<" "; 
    }
    cout<<endl;
}
int insertion(int list[],int size,int listcapacity,int element,int index){


if (size>=listcapacity)
{
  cout<<"ERROR! Array capacity must be greater than its size."<< endl;
}

else{
   for (int i = size-1; i >=index; i--)
    {
         list[i+1] = list[i];
          
    }
        list[index] = element;
    }  
     traversal(list,size);
}

int main() {
  const int listcapacity = 50;
  int list[listcapacity] = {1,5,9,12,4};
  int size =5;
  traversal(list,size);

  size+=1 ;
  insertion(list,size,listcapacity,22,0);


  size+=1 ;
  insertion(list,size,listcapacity,29,4);
  

}