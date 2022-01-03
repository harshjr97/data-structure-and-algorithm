#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maxHeapp(int [], int , int );
void buildHeapp(int [], int );
void Heapsortt(int [], int );


int main()
{
    int arr[] = {5,4,3,2,1};
    Heapsortt(arr, 5);
    for(int x : arr)
        cout<<x<<" ";
}


// Building Max Heap
void maxHeapp(int arr[], int n, int i)
{
    int largest = i, left = 2*i+1 , right = 2*i+2;
    if(left<n && arr[left]>arr[largest])
        largest = left;
    if(right<n && arr[right]>arr[largest])
        largest = right;
    if(largest!=i)
    {
        int temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        maxHeapp(arr, n, largest);
    }
}


// Building a Heap
void buildHeapp(int arr[], int n)
{
    for(int i=(n-2)/2 ; i>=0 ; i--)
        maxHeapp(arr, n, i);
}


// Heap sort
void Heapsortt(int arr[], int n)
{
    buildHeapp(arr,n);
    for(int i=n-1 ; i>=1 ; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        maxHeapp(arr,i,0);
    }
}