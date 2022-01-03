#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10,15,5};
    priority_queue <int> pq(arr, arr+3);
    while(pq.empty() == false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}