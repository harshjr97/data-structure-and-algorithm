#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    };
}typedef Node;

// function defination
void printList(Node *);
int searchll(Node *, int);
Node *insertatbeginning(Node *, int);
Node *insertat(Node *, int, int);
Node *insertatend(Node *, int);
Node *deletefirst(Node *);
Node *deletelast(Node *);
Node *sortedinsert(Node *, int);
void middlenode1(Node *);
void nLastNode(Node *, int);
Node *reverseLink(Node *);
void removeDuplicate(Node *);

int main()
{
    Node *head = new Node(10);
    head = insertat(head, 20, 2);
    head = insertat(head,30,3 );
    head = insertat(head,30,4 );
    head = insertat(head,30,5 );
    head = insertatend(head, 1000);
    head = insertatend(head, 69);
    // cout<<"Before reverse : "<<endl;
    printList(head);
    // cout<<"After reverse : "<<endl;
    // head = reverseLink(head);
    // printList(head);

    // middlenode1(head); 
    // cout<<searchll(head, 2);
    // nLastNode(head,3);
    // removeDuplicate(head);
    // printList(head);
    return 0;
}



// function define
void printList(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        if(curr->next==NULL)
        {
            cout<<curr->data;
            curr = curr->next;

        }
        else
        {
            cout<<curr->data<<" --> ";
            curr = curr->next;
        }
    }
    cout<<endl;
}


Node *insertatbeginning(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return head;
}


Node *insertat(Node *head, int x , int pos)
{
    Node *temp = new Node(x);
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i=0; i<pos-2 && curr!=NULL ; i++)
        curr = curr->next;
    if(curr==NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}


int searchll(Node *head, int x)
{
    int pos=1;
    Node *curr = head;
    while(curr!=NULL)
    {
        if(curr->data==x)
            return pos;
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}


Node *insertatend(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
        return temp;
    Node *curr = head;
    while(curr->next!=NULL)
        curr = curr->next;
    curr->next = temp;
    return head;
}


Node *deletefirst(Node *head)
{
    Node *temp = head->next;
    delete head;
    return temp;
}


Node *deletelast(Node *head)
{
    if (head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next!=NULL)
        curr = curr->next;
    delete curr->next;
    curr->next = NULL;
    return head;
}


Node *sortedinsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL) return temp;
    if(x<head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL && curr->next->data<x)
        curr = curr->next;
    temp->next = curr->next;
    curr->next = temp;
    return head;

}


void middlenode1(Node *head)
{
    if(head==NULL)return;
    int count = 0;
    Node *curr;
    for(curr=head ; curr!=NULL ; curr=curr->next)
        count++;
    curr=head;
    for(int i=0 ; i<count/2 ; i++)
        curr = curr->next;
    cout<<curr->data;
}


void nLastNode(Node *head, int n)
{
    Node *first = head;
    Node *second = head;

    for(int i=0 ; i<n ; i++)
    {   
        if(first==NULL)
            return;
        first = first->next;
    }
    
    while(first!=NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout<<second->data<<endl;

}


Node *reverseLink(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL)
    {
        Node *next = curr->next;  // store curr next node address
        curr->next = prev;        // point current to prev node
        prev = curr;              // prev is now curr
        curr = next;              // curr is now next
    }
    return prev;
}


void removeDuplicate(Node *head)
{
    Node *curr = head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
            curr = curr->next;
    }
}