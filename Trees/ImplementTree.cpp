#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node * right;
};
// Helper fn to create a node 
Node * newNode(int data){
    Node * node = (Node *)malloc(sizeof(Node));
    node->data= data;
    node->left =node->right = NULL;
    return node;
}

Node* createTree(int data[],Node * root,int i ,int n){
    if (i<n){
        Node *temp = newNode(data[i]);
        root= temp;

        //now make the left and right nodes 
        root->left = createTree(data,root->left,2*i+1,n);

        root->right = createTree(data,root->right,2*i+2,n);


    }
    return root;
}
void inorder(Node *root){
    if(root!= NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(Node *root){
    if(root!= NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root){
    if(root!= NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int data[n];
    for (int i =0;i<n;i++)
        cin>>data[i];
    Node *root =createTree(data,root,0,n);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}