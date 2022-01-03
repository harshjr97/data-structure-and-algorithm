#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // max heap queue (default)
    priority_queue <int> pq;
    // min heap queue
    // priority_queue <int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(1);
    pq.push(15);

    cout<<pq.size();
    cout<<"\n";
    cout<<pq.top();
    cout<<"\n";

    while(pq.empty() == false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}