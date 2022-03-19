#include "stack.h"

void Stack::init(Stack &s, int capacity)
{
    s.head = nullptr;
    s.capacity = capacity;
}