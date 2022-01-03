#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct myhash
{
    int bucket;  //size of the hash table
    list<int> *table; // creating array of linked list
    myhash(int b)  // constructor to create array of linked list of user given size
    {
        bucket=b;
        table = new list<int>[b];  // created array of linked list of size b
    }
    void insertt(int key)
    {
        int i = key % bucket;  // storing index of key using hash func in i
        table[i].push_back(key); // inserting value at index i in array LL using push_back() func
    }
    void removee(int key)
    {
        int i = key % bucket;  // storing index of key using hash func in i
        table[i].remove(key);  // removing key from hash table using remove() func
    }
    bool searchh(int key)
    {
        int i = key % bucket;  // storing index of key using hash func in i
        for(auto x : table[i])  // traversing the ll to find the pos of key
        {
            if (x==key)  // if found return true
                return true;
        }
        return false; // else return false
    }
};

int main()
{
    struct myhash s(7);  // created an object of myhash 
    s.insertt(70);
    s.insertt(71);
    s.insertt(9);
    s.insertt(56);
    s.insertt(72);
    s.removee(56);
    cout<<s.searchh(56);
    return 0;
}