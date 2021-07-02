#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

};
struct Node* newNode(int data){
    struct Node* node = new Node;
    node->data= data;
    node->left= node->right=NULL;
    return node;
}

int maxNodes(Node*root){
    if (root == NULL)return -1;
    queue<Node *>q;
    q.push(root);
    int level=0;
    int max =INT_MIN;
    int level_no =0;

    while (1)
    {   
        cout<<Node->data;
        int NodeCount=q.size();
        if (NodeCount ==0 )break;
        if(max <= NodeCount){
            max = NodeCount;
            level_no = level;
        }
        /* code */
        while(NodeCount > 0){
            
          Node * node = q.front();
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if (node->right != NULL)
                q.push(node->right);
            NodeCount--;
        }
        level++;
    }
    return level_no;
}


int main(){
    struct Node *root = newNode(2);
    root->left=  newNode(1);
    root->right= newNode(3);
    root->left->left = newNode(5);
    root->left->left->left = newNode(0);
    root->left->left->right = newNode(4);
    // root->right->left = newNode(6);
    // root->right->right = newNode(6);
    /*
        2
       /  \
      1    3
     / \   / \
    2   5  6  6

    */
    printf("The max no of nodes are at %d level",maxNodes(root));
    return 0;
}