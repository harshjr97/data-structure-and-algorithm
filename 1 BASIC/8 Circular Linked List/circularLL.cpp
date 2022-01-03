#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
}typedef Node;

void printCLL(Node *);
Node *insertBegin(Node *, int);
Node *insertBegin2(Node *, int);
Node *insertEnd(Node *, int);
Node *insertEnd2(Node *, int);
Node *deleteHead(Node *);
Node *deleteHead2(Node *);
Node *deleteKthNode(Node *, int);


int main()
{
    Node *head = new Node(10);
    head->next = head;
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    head = insertBegin2(head,40);
    head = insertBegin2(head,50);
    head = insertBegin2(head,10000);
    printCLL(head);
    head = insertEnd(head, 1012);
    head = insertEnd2(head, 1912);
    printCLL(head);

    return 0;
}


void printCLL(Node *head)
{
    if(head==NULL)return;
    Node *p = head;
    do{
        cout<<p->data<<" --> ";
        p = p->next;
    }while(p!=head);
    cout<<endl;
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while(curr->next!=head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
        return temp;
    }
}


Node *insertBegin2(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return head;
    }
}


Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while(curr->next!=head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
        return head;
    }
}


Node *insertEnd2(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}


Node *deleteHead(Node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while(curr->next != head)
            curr = curr->next;
        curr->next = head->next;
        delete head;
        return curr->next;
    }
}


Node *deleteHead2(Node *head)
{
    if(head==NULL)return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;

}


Node *deleteKthNode(Node *head, int k)
{
    if(head==NULL)return NULL;
    if(k==1)
        return deleteHead2(head);
    Node *curr = head;
    for(int i=0; i<k-2 ; i++)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}