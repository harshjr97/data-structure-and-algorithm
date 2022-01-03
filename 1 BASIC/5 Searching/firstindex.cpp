#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int occur(int [], int, int);
int occurR(int [], int, int, int);

int main()
{
    int arr[] = {1,2,3,3,4,5,5,6,7,8};
    int s = sizeof(arr)/sizeof(arr[0]);
    // cout<<occur(arr, s, 6);
    cout<<occurR(arr,0, s, 6);
    return 0;
}


int occur(int arr[], int n, int x)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}


int occurR(int arr[], int low, int high, int x)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(x>arr[mid])
        return occurR(arr,mid+1, high, x);
    else if(x<arr[mid])
        return occurR(arr,low, mid-1, x);
    else
    {
        if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
        else 
            return occurR(arr,low,mid-1,x);
    }
}