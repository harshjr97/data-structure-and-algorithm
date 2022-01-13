#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n==1)
        return false;
    for(int i=2 ; i<n ; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

// naive
void primefactor(int n)
{
    for(int i=2 ; i<n ; i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}

// efficient
void primefactor2(int n)
{
    if(n<=1)
        return;
    for(int i=2 ; i*i<=n ; i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1)
        cout<<n<<" ";
}


int main()
{
    // primefactor(315);
    primefactor2(13);
    return 0;
}