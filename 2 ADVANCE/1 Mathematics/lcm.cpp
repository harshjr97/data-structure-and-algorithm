#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int lcm(int a, int b)
{
    int res = max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
            return res;
        res++;
    }
    return res;
}

// method 2
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
int lcm2(int a, int b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    cout<<lcm(4,6)<<endl;
    cout<<lcm2(12,15)<<endl;
    return 0;
}