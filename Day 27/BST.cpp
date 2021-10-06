#include<bits/stdc++.h>
using namespace std;

class bst{
    
        int data;
        bst* left;
        bst* right;
    
    public:
        bst();

        bst( int);

        bst* insert(bst*, int);

        void inorder(bst*);
};

bst:: bst()
    : data(0)
    ,left(NULL)
    ,right(NULL)
    {
    }

bst:: bst(int val)
{
    data=val;
    left=right=NULL;
}

bst* bst ::insert(bst* root, int val)
{
    if(!root)
    return new bst(val);

    if(val> root->data)
    root->right=insert(root->right,val);
    else
    {
        root->left=insert(root->left,val);
    }
    return root;
}

void bst:: inorder(bst* root)
{
    if(!root)
    return;

    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

int main()
{
    bst b,*root=NULL;
    root=b.insert(root,50);
    b.insert(root,30);
    b.insert(root,20);
    b.insert(root,40);
    b.insert(root,70);
    b.insert(root,60);
    b.insert(root,80);

    b.inorder(root);
    return 0;
}