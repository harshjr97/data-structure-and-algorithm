#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Deque
{
    int size, cap;
    int *arr;
    Deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isEmptyy(){return (size==0);}
    
    bool isFulll(){return (size==cap);}


    void insertFrontt(int x)
    {
        if(isFulll())return;
        for(int i=size-1 ; i>=0 ; i--)
            arr[i+1] = arr[i];
        arr[0] = x;
        size++;
    }

    void deleteFrontt()
    {
        if(isEmptyy())return;
        for(int i=0 ; i<=size-1 ; i++)
            arr[i] = arr[i+1];
        size--;
    }

    int getFrontt()
    {
        if(isEmptyy())return INT32_MIN;
        else return 0;
    }

    void insertRearr(int x)
    {
        if(isFulll())return;
        arr[size] = x;
        size++;
    }

    void deleteRearr()
    {
        if(isEmptyy())return;
        size--;
    }

    int getRearr()
    {
        if(isEmptyy()) return INT32_MIN;
        else return size-1;
    }

    void displayDequee()
    {
        for(int i=0 ; i<size ; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
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