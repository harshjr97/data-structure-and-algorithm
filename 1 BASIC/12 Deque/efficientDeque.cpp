#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Deque
{
    int size, cap, front;
    int *arr;
    Deque(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
    }

    bool isEmptyy(){return (size==0);}
    
    bool isFulll(){return (size==cap);}


    void insertFrontt(int x)
    {
        if(isFulll())return;
        front = (front+cap-1)%cap;
        arr[front] = x;
        size++;
    
    }

    void deleteFrontt()
    {
        if(isEmptyy())return;
        front = (front+1)%cap;
        size--;
    }

    int getFrontt()
    {
        if(isEmptyy())return INT32_MIN;
        else return front;
    }

    void insertRearr(int x)
    {
        if(isFulll())return;
        int new_rear = (front + size - 1)%cap;
        arr[new_rear] = x;
        size++;
    }

    void deleteRearr()
    {
        if(isEmptyy())return;
        size--;
    }

    int getRearr()
    {
        if(isEmptyy())return INT32_MIN;
        else return (front + size - 1)%cap;
    }

    void displayDequee()
    {
    
    }
};

int main()
{
    Deque d(5);
    d.insertFrontt(2);
    d.insertFrontt(15);
    d.insertFrontt(45);
    d.insertRearr(87);
    d.insertRearr(7);
    d.displayDequee();
    return 0;
}