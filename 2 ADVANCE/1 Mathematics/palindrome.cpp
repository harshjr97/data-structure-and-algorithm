#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPal(int x)
{
    int rev = 0;
    int temp=x;
    while(temp!=0)
    {
        int ld = temp%10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return (rev==x);
}

int main()
{
    cout<<isPal(4554);
    return 0;
}