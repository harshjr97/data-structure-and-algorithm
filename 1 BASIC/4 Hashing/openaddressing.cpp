#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int *arr;
    int size, cap;
    MyHash(int c)
    {
        cap = c;
        size = 0;
        for(int i=0 ; i<cap ; i++)
            arr[i]=-1;
    }

    int hash(int key)
    {
        return key % cap;
    }

    bool searchh(int key)
    {
        int h = hash(key);
        int i = h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
                return true;
            i = (i+1) % cap;
            if(i==h)
                return false;
        }
        return false;
    }

    bool insertt(int key)
    {
        if(size==cap)
            return false;
        int i = hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i = (i+1) % cap;
        if(arr[i]==key)
            return false;
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool erasee(int key)
    {
        int h = hash(key);
        int i = h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i+1) % cap;
            if(i==h)
                return false;
        }
        return false;
    }

    void displayy()
    {
        for(int i=0; i<size ; i++)
            cout<<arr[i]<<" ";
    }
};

int main()
{
    struct MyHash s(7);
    s.insertt(50);
    s.insertt(51);
    s.insertt(49);
    s.insertt(16);
    s.insertt(19);
    s.insertt(56);
    s.insertt(15);
    // s.displayy();
    cout<<"\n"<<s.searchh(50);
}