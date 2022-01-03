#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// custom priority queue

struct Person
{
    int age;
    float ht;
    Person(int a, int h)
    {
        age = a;
        ht = h;
    }
};

struct mycomp
{
    bool operator()(Person const &p1, Person const &p2)
    {
        p1.ht < p2.ht;
    }
};


int main()
{
    priority_queue <Person, vector<Person>, mycomp> pq;
}