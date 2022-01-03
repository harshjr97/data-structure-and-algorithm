#include<iostream>

using namespace std;

int arrsearch(int [], int , int );


int main()
{
    int arr[10] = {5,3,7,1,6};
    int size = 10;
    int n = 5;
    cout<<"at index "<<arrsearch(arr, n, 1);
    
}



int arrsearch(int arr[], int n, int x)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}