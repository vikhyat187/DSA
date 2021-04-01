#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
}*head=NULL;
    int length(node *head){
        node *temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }return count;
    }


    void print(node *head){
        node *temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }
    void push(int data){
        node *temp = new node(data);
    }
    
    

    int main(){



    return 0;
}