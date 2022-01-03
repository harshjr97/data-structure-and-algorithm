#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void bubblesortt(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {6,9,2,1,4};
    int n = 5;
    bubblesortt(arr, n);
    for(int x : arr)
        cout<<x<<" ";
}