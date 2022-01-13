#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// naive
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

// efficient
bool isPrime2(int n)
{
    if(n==1)
        return false;
    for(int i=2 ; i*i<=n ; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    
    return 0;
}