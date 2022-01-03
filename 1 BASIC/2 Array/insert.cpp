#include<iostream>

using namespace std;

int arrinsert(int [], int , int , int , int );

int main()
{
    int arr[10] = {5,3,7,1,6};
    int size = 10;
    int n = 5;

    arrinsert(arr, n, 15, 2, size);
    n++;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<"  "; 

    cout<<endl;

    arrinsert(arr, n, 200, 2, size);
    n++;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<"  ";    

    cout<<endl;

    arrinsert(arr, n, 20, 2, size);
    n++;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<"  ";    
}



int arrinsert(int arr[], int n, int x, int pos, int cap)
{
    if(n==cap)
        return -1;
    
    int idx = pos-1;

    for(int i=n-1 ; i>=idx ; i--)
        arr[i+1] = arr[i];
    
    arr[idx]=x;
    return n+1;
}