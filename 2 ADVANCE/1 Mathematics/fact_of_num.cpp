#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fact(int x)
{
    int res = 1;
    for(int i=2; i<=x ; i++)
        res = res*i;
    return res;
}

int main()
{
    cout<<fact(5);
    return 0;
}