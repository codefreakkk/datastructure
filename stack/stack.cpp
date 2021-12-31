#include <iostream>
#include <string>
using namespace std;

struct stack
{
    int top;
    int size;
    int *arr;
} obj;

int isFull(struct stack *st)
{
    if (st->top == st->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct stack *st)
{
    if (st->top < 0)
        return 1;
    else
        return 0;
}

void push(struct stack *st, int value)
{
    if (isFull(st))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        st->top++;
        st->arr[st->top] = value;
        cout << "Pushed into stack " << st->top << endl;
    }
}

int pop(struct stack *st)
{
    if (isEmpty(st))
        return -1;
    else
    {
        int value = st->arr[st->top];
        st->top = st->top - 1;
        return value;
    }
}

void display(struct stack *st)
{
    for (int i = 0; i <= st->top; i++)
    {
        cout << st->arr[i] << " ";
    }
}

int main()
{
    struct stack *st = new (struct stack);
    st->top = -1;
    st->size = 5;
    st->arr = new int(st->size);
    push(st, 20);
    push(st, 10);
    push(st, 19);
    push(st, 30);
    display(st);
    // cout << " " << endl;
    cout << "Pop element " << pop(st) << endl;
    display(st);
    // cout << "Pop element " << pop(st) << endl;
    // cout << "Pop element " << pop(st) << endl;
}