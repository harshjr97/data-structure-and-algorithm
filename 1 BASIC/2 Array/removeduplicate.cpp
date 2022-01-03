#include<iostream>
using namespace std;

int removeduplicate(int [], int);

int main()
{
    int arr[10] = {5,7,7,7,6};
    int size = 10;
    int n = 5;
    n = removeduplicate(arr, n);

    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<"  ";    
}



int removeduplicate(int arr[], int n)
{
    int res=1;
    for(int i=1; i<n ; i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}