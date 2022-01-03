#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int binarySearchh(int [], int , int );
int RbinarySearchh(int [], int , int, int);

int main()
{
    int arr[] = {1,2,3,4,5};
    // int res = binarySearchh(arr,5, 4);
    int res = RbinarySearchh(arr,0, 5, 4);
    cout<<res;
    return 0;
}

int binarySearchh(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high = mid-1;
        else if(arr[mid]<x)
            low = mid+1;
    }
    return -1;
}


int RbinarySearchh(int arr[], int low, int high, int x)
{
    if(low>high)
        return -1;
    int mid = (low+high)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        RbinarySearchh(arr,low, mid-1, x);
    else if(arr[mid]<x)
        RbinarySearchh(arr, mid+1, high, x);
}