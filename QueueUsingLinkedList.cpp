#include<iostream>
#include<cstdlib>
 using namespace std;
 struct Node{
    int data;
    Node *next;
 }*front=NULL,*rear=NULL;
  void enqueue(int x){
    Node *temp=new Node;
    if(temp==NULL)
        cout<<"Queue is full\n";
    else{
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
            front=rear=temp;
        else{
            rear->next=temp;
            rear=temp;
        }
    }
  }
  int dequeue(){
    int x=-1;
    Node *temp;
    if(front==NULL)
        cout<<"Queue is empty";
    else{
        x=front->data;
        temp=front;
        front=front->next;
        free(temp);
    }
    return x;

  }
  void display(){
    Node *temp;
    temp=front;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
  }
 int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    return 0;
 }
