#include<stdio.h>
#include<stdlib.h>

struct node{
	int key;
	struct node *left,*right;
};

struct node* newnode(int item)
{
	struct node* newnode= (struct node*)malloc(sizeof(struct node));
	newnode->key=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

struct node* minValuenode(struct node* node)
{
	struct node* current=node;
	while(current->left!=NULL)
	{
		current=current->left;
	}
	return current;
}

struct node* delete_node(struct node* root, int data)
{
	if(root==NULL)
	return root;
	
	if(data<root->key)
	root->left=delete_node(root->left,data);
	else if(data>root->key)
	root->right=delete_node(root->right,data);
	else
	{
		if(root->left==NULL)
		{
			struct node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node* temp=root->left;
			free(root);
			return temp;
		}
		struct node* temp=minValuenode(root->right);
		root->key=temp->key;
		root->right=delete_node(root->right,temp->key);
	}
	return root;
}

void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->key);
		inorder(root->right);
	}
}

struct node* insert(struct node* node, int key)
{
	if(node==NULL)
	return newnode(key);
	
	if(key<node->key)
	node->left=insert(node->left,key);
	else if(key>node->key)
	node->right=insert(node->right,key);
	
	return node;
}

int main()
{
	int n;
	struct node* root=NULL;
	printf("Enter the no. of nodes:");
	scanf("%d\n",&n);
	int i , data;
	printf("Input node of BST:\n");
	if(n>0)
	{
		scanf("%d",&data);
		root=insert(root,data);
	}
	for(i=1;i<n;i++)
	{
		scanf("%d",&data);
		insert(root,data);
	}
	
	inorder(root);
	printf("\n");
	int del;
	printf("Enter element to be deleted:\n");
	scanf("%d",&del);
	delete_node(root,del);
	printf("After deletion\n");
	inorder(root);
	
}
