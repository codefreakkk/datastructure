#include <iostream>
using namespace std;

void swap(int arr[], int parent, int i)
{
    int temp = arr[parent];
    arr[parent] = arr[i];
    arr[i] = temp;
}

void display(int arr[], int n)
{
    // n += 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void insertIntoHeap(int arr[], int value, int n)
{
    n += 1;
    arr[n] = value;
    int i = n;

    while (i >= 1)
    {
        int parent = i / 2;
        if (arr[parent] < arr[i])
        {
            swap(arr, parent, i);
            i = parent;
        }
        else
            return;
    }
}

int main()
{
    int arr[] = {50, 30, 40, 10, 5, 20, 30};
    int n = 7;
    // insertIntoHeap(arr, 70, 7);
    display(arr, 7);
    return 0;
}