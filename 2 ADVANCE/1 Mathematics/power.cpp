#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int power(int x, int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0)
            res=res*x;
        x = x*x;
        n = n/2;
    }
    return res;
}

int power2(int x, int n)
{
    int res = 1;
    for(int i=0; i<n ; i++)
        res=res*x;
    return res;
}



int power3(int x, int n)
{
    if(n==0)
        return 1;
    int temp = power3(x,n/2);
    temp=temp*temp;
    if(n%2==0)
        return temp;
    else
        return temp*x;;
}





int main()
{
    cout<<power(2,4);
    return 0;
}