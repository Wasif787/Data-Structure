#include <iostream>
using namespace std;

class Node{
    public:
    int key;
    int data;
    Node *next;

    Node(){
        key = 0;
        data = 0;
        next = NULL;

    }
    Node(int k, int d){
        key = k;
        data =d;

    }
    class Singlelinkedlist{
        public:
        Node *head;
        Singlelinkedlist(){
            head = NULL;
        }
        Singlelinkedlist(Node *n){
            head = n;
        }
       //1. Check if node exists using key value 
        Node *nodeExists(int k){
            Node *temp = NULL;
            Node *ptr = head;
            while (ptr!=NULL)
            {
                if(ptr->key==k){
                    temp = ptr;

                }
                ptr = ptr->next;
            }
            return temp;
            
        }
        //2. Append a node to the list
        void appendNode(Node *n){
            if(nodeExists(n->key)!=NULL){
                cout<<"Node Already exists with key value: "<<n->key<<". Append another node with different key value"<<endl;
            }
            else{
                if (head==NULL)
                {
                    head=n;
                    cout<<"Node Appended"<<endl;
                }
                else{
                    Node *ptr = head;
                    while (ptr->next!=NULL)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next=n;
                    cout<< "Node Appended"<< endl;
                    
                }
                
            }
        }
        //Prepend Node - Attach a node in the start
           void prependNode(Node *n){
             if(nodeExists(n->key)!=NULL){
                cout<<"Node Already exists with key value: "<<n->key<<". Append another node with different key value"<<endl;
            }

             else{
                n->next=head;
                head=n;
                cout<<"Node prepended"<<endl;
             }
           }
        //Insert a Node after a particular node in the list
            void insertNodeAfter(int k,Node *n){
                Node *ptr =nodeExists(k);
                if(ptr==NULL){
                    cout<<"No node exists with key value: "<<k<<endl;
                           
                }
                else{
                       if(nodeExists(n->key)!=NULL){
                cout<<"Node Already exists with key value: "<<n->key<<". Append another node with different key value"<<endl;
            }
                       else{
                        n->next=ptr->next;
                        ptr->next=n;
                        cout<<"Node Inserted"<<endl;

                        }
                }
            }
        //Delete Node by unique key
    
    
    
    };












};












int main() {
  
    
}