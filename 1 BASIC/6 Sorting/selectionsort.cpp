#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void selectsort(int arr[], int n)
{
    int i, j, minint;
    for(i=0 ; i<n ; i++)
    {
        minint = i;
        for(j=i+1 ; j<n ; j++) // finding the minimun element in the remaining array
        {
            if(arr[j]<arr[minint])
                minint = j;
        }
        int temp = arr[minint];  // 
        arr[minint] = arr[i];   // swapping with i th element 
        arr[i] = temp;         // 
    }
}

int main()
{
    int arr[5] = {9,2,7,6,1};
    selectsort(arr, 5);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}