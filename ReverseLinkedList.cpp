#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

struct LinkedList{
    Node *head;
    LinkedList(){
        head=NULL;
    }
    void reverse(){
        //to do
       Node *current = head;
       Node *prev= NULL;
       Node *next=NULL;
       while(current!=NULL){
           next= current->next;
           current->next=prev;
           prev=current;
           current=next;

       }
       head=prev;
    }
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
       
            temp=temp->next;
        }
        cout<<endl;
    }
    void push(int data){
        Node *temp = new Node (data);
        temp->next=head;
        head=temp;
    }
};

int main(){
    LinkedList l1;
    l1.push(20);
    l1.push(2);
    l1.push(4);
    l1.push(58);
    l1.push(34);
    l1.print();
    l1.reverse();
    l1.print();

    return 0;
}