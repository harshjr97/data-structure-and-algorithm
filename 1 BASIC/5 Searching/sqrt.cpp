#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sqrrt(int );

int main()
{
    cout<<sqrrt(25);
    return 0;
}


int sqrrt(int x)
{
    int l=1, h=x, ans=1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        int mSq = mid * mid;
        if(mid==x)
            return mid;
        else if(mSq>x)
            h = mid-1;
        else
        {
            l = mid+1;
            ans = mid;
        }
    }
    return ans;
}