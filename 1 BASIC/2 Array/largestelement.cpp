#include <iostream>

using namespace std;

int getLargest(int [], int);

int main()
{
    int arr[10] = {5,3,7,1,6};
    int size = 10;
    int n = 5;

    cout<<getLargest(arr, n);    
}

int getLargest(int arr[], int n)
{
    int res=0;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]>res)
            res = arr[i];
        return res;
    }
    return -1;
}
