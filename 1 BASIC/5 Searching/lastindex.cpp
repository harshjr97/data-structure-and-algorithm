#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int lastOcc(int [], int, int, int, int);


int main()
{
    int arr[] = {1,2,3,3,4,4,4,5,5};
    cout<<lastOcc(arr, 0, 9, 4, 9);
    return 0;
}


int lastOcc(int arr[], int low, int high, int x, int n)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]>x)
        return lastOcc(arr, low, mid-1, x, n);
    if(arr[mid]<x)
        return lastOcc(arr, mid+1, high, x, n);
    else
    {
        if(mid==n-1 || arr[mid]!= arr[mid+1])
            return mid;
        else
            return lastOcc(arr, mid+1, high, x, n);
    }

}