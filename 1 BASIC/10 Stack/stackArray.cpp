#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top=-1;
    }


    void pushh(int x)
    {
        if(top==cap)return;
        top++;
        arr[top] = x;
    }

    int popp()
    {
        if(top==-1)return -1;
        int x = arr[top];
        top--;
        return x;
    }

    int peekk()
    {
        if(top==-1)
            return -1;
        return arr[top];
    }

    int sizee()
    {
        return (top+1);
    }

    bool isEmptyy()
    {
        return top==-1;
    }

    void printStk()
    {
        int x;
        for(x=top ; x!=-1 ; x--)
            cout<<arr[x]<<" ";
        cout<<endl;
    }
};


int main()
{
    myStack s(5);
    s.pushh(10);
    s.pushh(20);
    s.pushh(30);
    // cout<<"popped  : "<<s.popp()<<endl;
    cout<<"peek : "<<s.peekk()<<endl;
    cout<<"size : "<<s.sizee()<<endl;
    cout<<"is empty : "<<s.isEmptyy()<<endl;
    s.printStk();
    return 0;
}