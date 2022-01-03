#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countDigit(int n)
{
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    return count;
}

int main()
{
    cout<<countDigit(14523);
    return 0;
}