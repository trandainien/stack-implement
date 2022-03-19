#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *head;
    int capacity;

    void init(Stack &s, int capacity);
    void push(Stack &s);
};
