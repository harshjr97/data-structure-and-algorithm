#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insertionsortt(int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main()
{
    int arr[] = {6,9,2,1,4};
    int n = 5;
    insertionsortt(arr, n);
    for(int x : arr)
        cout<<x<<" ";
}