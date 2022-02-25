#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node* left,*right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
        
    }
}node;

void mirror(node* Node)
{
    if(Node==NULL)
    return;
    else{
        node* temp;

        mirror(Node->left);
        mirror(Node->right);

        temp=Node->left;
        Node->left=Node->right;
        Node->right=temp;


    }
}


void inorder(node* nodee)
{
    if(nodee==NULL)
    return;

    inorder(nodee->left);
    cout<<nodee->data<<" ";
    inorder(nodee->right);
}


int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);

    cout<<"Inorder Traversal:"<<endl;
    inorder(root);

    return 0;

}