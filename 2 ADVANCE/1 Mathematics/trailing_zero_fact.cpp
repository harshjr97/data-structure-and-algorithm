// trailing zeros in factorial
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countzero(int x)
{
    int fact = 1;
    for(int i=2; i<=x ; i++)
        fact = fact*i;
    
    int res = 0;
    while(fact%10 == 0)
    {
        res++;
        fact = fact/10;
    }
    return res;
}

// method 2
int countzero2(int x)
{
    int res = 0;
    for(int i=5; i<=x ; i=i*5)
        res = res+x/i;
    return res;
}


int main()
{
    // cout<<countzero(10);
    cout<<countzero2(10);
    return 0;
}