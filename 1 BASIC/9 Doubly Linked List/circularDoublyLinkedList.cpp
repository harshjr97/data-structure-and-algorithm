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


int main()
{
    Node *head = new Node(15);
    
    return 0;
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else
    {
        head->prev->next = temp;
        temp->next = head;
        temp->prev = head->prev;
        head->prev = temp;
    }
}