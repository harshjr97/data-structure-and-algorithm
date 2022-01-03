#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct MinHeap
{
    int *arr;
    int size, capacity;

    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i)
    {
        return (2*i+1);
    }

    int right(int i)
    {
        return (2*i+2);
    }

    int parent(int i)
    {
        return (i-1)/2;
    }

    void insertheap(int x)
    {
        if(size==capacity)return;
        size++;
        arr[size-1]=x;
        for(int i=size-1 ; i!=0 && arr[parent(i)]>arr[i] ; )
        {
            int temp = arr[i];
            arr[i] = arr[parent(i)];
            arr[parent(i)] = temp;

            i = parent(i);
        }
    }

    void MinHeapify(int i)
    {
        int lt = left(i), rt = right(i);
        int smallest = i;

        if(lt<size && arr[lt]<arr[i])
            smallest = lt;
        
        if(rt<size && arr[rt]<arr[smallest])
            smallest = rt;
        
        if(smallest!=i)
        {
            int temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;

            MinHeapify(smallest);
        }
    }

    int extractMin()
    {
        if(size==0)
            return INT32_MAX;
        if(size==1)
        {
            size--;
            return arr[0];
        }
        int temp = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = temp;
        size--;
        MinHeapify(0);
        return arr[size];
    }

    void decreaseKey(int i, int x)
    {
        arr[i] = x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[parent(i)];
            arr[parent(i)] = temp;
            i=parent(i);
        }
    }

    void buildHeap()
    {
        for(int i=(size-2)/2 ; i>=0 ; i--)
        {
            MinHeapify(i);
        }
    }

    void displayHeap()
    {
        for(int i=0 ; i<size ; i++)
            cout<<arr[i]<<" ";
    }

}typedef MinHeap;


int main()
{
    MinHeap h(10);
    h.insertheap(2);
    h.insertheap(5);
    h.insertheap(1);
    h.insertheap(4);
    h.insertheap(3);
    h.insertheap(6);
    h.insertheap(7);
    h.insertheap(8);
    h.insertheap(9);
    
    // h.displayHeap();

    cout<<"Min Value : "<<h.extractMin();
    h.buildHeap();
    h.displayHeap();

    return 0;
}