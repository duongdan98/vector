#pragma once
#include"node.h"
#include<iostream>
using namespace std;
class Queue
{
        int queue[50];
        int tail;
    public:
        Queue()
        {
            tail = -1;
        }
        bool IsFull() {
            if (tail >= 49) {
                return true;
            }
            else {
                return false;
            }
        }
        bool IsEmpty() {
            if (tail == -1) {
                return true;
            }
            else {
                return false;
            }
        }
        void push(int value) {
            if (IsFull() == true) {
                cout << "\nQueue is full. Overflow condition!";
            }
            else {
                queue[++tail] = value;
            }
        }
        int pop() {
            if (IsEmpty() == true) {
                cout << "\nQueue is empty. Underflow condition!";
            }
            else {
                int temp = queue[0];
                for (int i = 0; i < tail; i++)
                {
                    queue[i] = queue[i + 1];
                }
                --tail;
                return temp;
            }
        }

        int Size() {
            return tail + 1;
        }
        void print()
        {
            for (int i = 0; i <=tail; i++)
            {
                cout << "phan tu thu " << i + 1 << " cua queue la: " << queue[i] << endl;
            }
        }
};
/*class queue
{
private:
    node* ptail;
    node* phead;
public:
    queue() { 
        node* ptail = NULL;
        node* phead = NULL;
    };
    ~queue() {
        node* ptail = NULL; 
        node* phead = NULL;
    };
    bool isEmpty()
    {
        if (phead == NULL)
        {
            return true;
        }
        else
            return false;
    }
    void push(int d)
    {
        node* p = new node(d);
        if (phead == NULL)
        {
           phead= ptail = p;
        }
        else
        {
            ptail->pnext = p;
            ptail = p;
        }
    }
    int pop()
    {
        if (phead == NULL)
        {
            cout << "danh sach rong!!!\n";
            return 0;
        }
        node* temp = phead;
        int data = temp->number;
        phead = temp->pnext;
        delete temp;
        return data;
    }
    void print()
    {
        for (node* p = phead; p != NULL; p = p->pnext)
        {
            cout << p->number << endl;
        }
    }
};*/


