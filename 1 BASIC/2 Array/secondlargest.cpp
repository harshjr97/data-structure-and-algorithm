#include <iostream>

using namespace std;

int getSecondLargest(int [], int);

int main()
{
    int arr[10] = {5,3,7,6,1};
    int size = 10;
    int n = 5;

    cout<<getSecondLargest(arr, n);    
}

int getSecondLargest(int arr[], int n)
{
    int res=-1, largest=0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}
