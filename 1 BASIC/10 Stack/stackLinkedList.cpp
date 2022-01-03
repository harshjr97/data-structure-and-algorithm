#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct myStack
{
    Node *head;
    int sz;
    myStack()
    {
        head = NULL;
        sz = 0;
    }

    void pushh(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        sz++;
    }

    int popp()
    {   
        if(head==NULL)return INT16_MAX;
        Node *te = head;
        int temp = head->data;
        head = head->next;
        delete te;
        sz--;
        return temp;
    }

    int peekk()
    {
        if(head==NULL)
            return INT16_MIN;
        return (head->data);
    }

    int sizee()
    {
        return sz;
    }

    bool isEmptyy()
    {
        return (head==NULL);
    }

    void printStk()
    {
        Node *curr = head;
        while(curr!=NULL)
        {
            cout<<curr->data<<"-->";
            curr = curr->next;
        }
        cout<<endl;
    }
};


int main()
{
    myStack s;
    // s.pushh(10);
    // s.pushh(20);
    // s.pushh(30);
    // cout<<"popped  : "<<s.popp()<<endl;
    cout<<"peek : "<<s.peekk()<<endl;
    cout<<"size : "<<s.sizee()<<endl;
    cout<<"is empty : "<<s.isEmptyy()<<endl;
    s.printStk();
    return 0;
}