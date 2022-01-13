#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

// optimized
int gcd2(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd2(b, a%b);
}



int main()
{
    cout<<gcd(4,6);
    cout<<endl;
    cout<<gcd2(100,200);
    return 0;
}