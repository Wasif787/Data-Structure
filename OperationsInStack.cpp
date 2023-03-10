#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];
public:
    Stack(){
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
        

    }
    bool isEmpty(){
        if (top == -1)
        {
            return true;
    
        }
        else{
            return false;
        }
    }
     bool isFull(){
        if (top == 4)
        {
            return true;
    
        }
        else{
            return false;
        }
    }
    void push(int val){
        if (isFull())
        {
            cout << "Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]= val;
        }
        
    }
    int pop(){
        if (isEmpty()){
            cout<< "Stack Underflow"<<endl;
        }
        else{
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue; 
        }
        
    }
    int count(){
        return (top+1);
    }
    int peek(int pos){
          if (isEmpty()){
            cout<< "Stack Underflow"<<endl;
        }
        else{
            return arr[pos];
        }

    }
    void change(int pos,int val){
        arr[pos]=val;
        cout<<"Value changed at the location " << pos <<endl;
    }
    void display(){
        cout<< "The Values in the stack are: " << endl;

        for (int i = 4; i>=0; i--)
        {
            cout<< arr[i]<<endl;
        }
        
    }

};
int main() {

    Stack object1;
    int option, position, value;

    do
    { cout<<"What operation do u want to perform? Selection option number or enter 0 to exit operation."<<endl;
      cout<<"1. push()"<<endl;
      cout<<"2. pop()"<<endl;
      cout<<"3. isEmpty()"<<endl;
      cout<<"4. isFull()"<<endl;
      cout<<"5. peek()"<<endl;
      cout<<"6. count()"<<endl;
      cout<<"7. change()"<<endl;
      cout<<"8. diplay()"<<endl;
      cout<<"9. clear screen"<<endl<<endl;  

      cin>>option;
    switch (option){ 
    case 0:
      break;

    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      object1.push(value);
      break;

    case 2:
      cout << "Pop Function Called - Poped Value: " << object1.pop() << endl;
      break;

    case 3:
      if (object1.isEmpty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;

    case 4:
      if (object1.isFull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;

    case 5:
      cout << "Enter position of item you want to peek: " << endl;
      cin >> position;
      cout << "Peek Function Called - Value at position " << position << " is " << object1.peek(position) << endl;
      break;

    case 6:
      cout << "Count Function Called - Number of Items in the Stack are: " << object1.count() << endl;
      break;

    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> position;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      object1.change(position, value);
      break;

    case 8:
      cout << "Display Function Called - " << endl;
      object1.display();
      break;

    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    
  
    } 
        
    } while (option!=0);
    return 0;

    

}