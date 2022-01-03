#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[] = {6,9,2,1,4};
    // int n = 5;
    // sort(arr, arr+n);
    // for(int x : arr)
    //     cout<<x<<" ";
    // return 0;

    vector <int> v = {6,9,2,1,4};
    sort(v.begin(), v.end(), greater<int>());
    for(int x : v)
        cout<<x<<" ";
}