#include<iostream>

using namespace std;

int arrdelete(int [], int, int);


int main()
{
    int arr[10] = {5,3,7,1,6};
    int size = 10;
    int n = 5;

    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<"  "; 
    cout<<endl;
    
        
    arrdelete(arr, n, 7);

    n--;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<"  "; 

    cout<<endl;    
}


int arrdelete(int arr[], int n, int x)
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==x)
        break;
    }

    if(i==n)
        return -1;
    
    for(int j=i ; j<n-1 ; j++)
        arr[j]=arr[j+1];
    return n-1;
}