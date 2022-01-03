#include <iostream>

using namespace std;

bool isssorted(int [], int);

int main()
{
    int arr[10] = {1,2,3,4,5};
    int size = 10;
    int n = 5;

    cout<<isssorted(arr, n);    
}

bool isssorted(int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}
