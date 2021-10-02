#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
//front of list
void push(struct Node** head, int node_data)
{
    struct Node* newNode=new Node;
    newNode->data=node_data;
    newNode->next=(*head);
    *head=newNode;
}

void insertAfter(struct Node* prev_node,int data)
{
    struct Node* newnode= new Node;
    newnode->data=data;
    newnode->next= prev_node->next;
    prev_node->next= newnode;

}

void append(struct Node** head, int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    struct Node* last=*head;
    while(last->next!=NULL)
    last=last->next;
    last->next=newnode;
    newnode->next=NULL;
    return;
}

void display(struct Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"-->";
        node=node->next;
    }
    if(node==NULL)
    cout<<"null"<<endl;
}

int main()
{
    struct Node* head=NULL;
    append(&head,10);
    push(&head,20);
    push(&head,30);
    append(&head,40);
    insertAfter(head->next,50);

    cout<<"Final List"<<endl;
    display(head);
    return 0;
}