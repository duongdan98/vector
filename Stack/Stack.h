#pragma once
#include"Node.h"
/*class Stack
{
	int stack[50];
    int top;
public:
    Stack()
    {
        top = -1;
    }
    bool IsFull() {
        if (top >= 49) {
            return true;
        }
        else {
            return false;
        }
    }
    bool IsEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
        void push(int value) {
        if (IsFull() == true) {
            cout<<"\nStack is full. Overflow condition!";
        }
        else {
            stack[++top] = value;
        }
    }
        int pop() {
            if (IsEmpty() == true) {
                cout<<"\nStack is empty. Underflow condition!";
            }
            else {
                int temp = stack[top];
                --top;
                return temp;
            }
        }

        int Size() {
            return top + 1;
        }
        void print()
        {
            for (int i = top; i >=0; i--)
            {
                cout << "phan tu thu " << i+1 << " cua stack la: " << stack[i] << endl;
            }
        }
};*/
class stack
{
private:
    node* phead;
public:
    stack() { node* phead = NULL; };
    ~stack() { node* phead = NULL; };
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
            phead = p;
        else
        {
            p->pnext =phead;
            phead = p;
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
        int data = phead->number;
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
};
