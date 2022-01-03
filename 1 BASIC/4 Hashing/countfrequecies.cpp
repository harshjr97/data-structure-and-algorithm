#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void countfreq(int arr[], int n)
{
    unordered_map<int, int> h;
    for(int i = 0 ; i<n ; i++)
        h[arr[i]]++;
    for(auto x: h)
        cout << x.first << " : " << x.second << endl;
}

int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    // int n = sizeof(arr) / sizeof(arr[0]);
    // countfreq(arr, n);
    cout<<sizeof(arr)/ sizeof(arr[0]);
    return 0;
}