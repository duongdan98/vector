#pragma once
#include<iostream>
using namespace std;
class node
{
private:
    int number;
    node* pnext;
public:
    node(int num = 0)
    {
        number = num;
        pnext = NULL;
    }
    friend class queue;
};

