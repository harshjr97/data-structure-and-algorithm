#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printdivision(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
}

void printdivision2(int n)
{
    for(int i=1 ; i*i<=n ; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=n/i)
                cout<<n/i<<" ";
        }
    }
}

void printdivision3(int n)
{
    int i;
    for(i=1 ; i*i<n ; i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    for(; i>=1 ; i--)
    {
        if(n%i==0)
            cout<<n/i<<" ";
    }
}


int main()
{
    // printdivision(15);
    printdivision2(15);
    return 0;
}