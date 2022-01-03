#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void displayDLL(Node *);
Node *insertBegin(Node *, int);
Node *insertEnd(Node *, int);
Node *deleteBegin(Node *);
Node *deleteEnd(Node *);

int main()
{
    Node *head = new Node(15);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    head = insertBegin(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 60);
    displayDLL(head);
    head = deleteBegin(head);
    displayDLL(head);
    head = deleteEnd(head);
    displayDLL(head);

    return 0;
}


Node *insertBegin(Node *head, int x)
{
    Node *temp =  new Node(x);
    temp->next = head;
    if(head!=NULL)
        head->prev = temp;
    return temp;    
}


void displayDLL(Node *head)
{
    Node* last;
    while (head != NULL) {
        cout<< head->data<<"-->";
        last = head;
        head = head->next;
    }
    cout<<endl;
}


Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)return temp;
    Node *curr = head;
    while(curr->next!=NULL)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}


Node *deleteBegin(Node *head)
{
    if(head==NULL)return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}


Node *deleteEnd(Node *head)
{
    if(head==NULL)return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=NULL)
        curr = curr->next;
    curr->prev->next = NULL;
    delete curr;
    return head;
}