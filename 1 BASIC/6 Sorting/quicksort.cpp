#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int lpartition(int [], int, int);
int hpartition(int [], int, int);
void qsortl(int [], int, int);
void qsorth(int [], int, int);
void swapp(int *, int *);

int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    // qsortl(arr, 0, 6);
    qsorth(arr, 0, 6);

    for(int x : arr)
        cout<<x<<" ";
    return 0;
}

void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int lpartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1, j;
    for(j=l ; j<=h-1 ; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swapp(&arr[i], &arr[j]);
        }
    }
    swapp(&arr[i+1], &arr[h]);
    return i+1;
}


int hpartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i=l-1, j=h+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i] < pivot);
        
        do{
            j--;
        }while(arr[j] > pivot);

        if(i>=j)
            return j;
        swapp(&arr[i], &arr[j]);
    }
}



void qsortl(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = lpartition(arr, l, h);
        qsortl(arr, l, p-1);
        qsortl(arr, p+1, h);
    }
}


void qsorth(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = hpartition(arr, l, h);
        qsortl(arr, l, p);
        qsortl(arr, p+1, h);
    }
}
