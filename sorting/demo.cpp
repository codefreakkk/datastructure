#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void swap(int arr[], int max, int last)
{
    int data = arr[last];
    arr[last] = arr[max];
    arr[max] = data;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int getMaxElementIndex(int arr[], int n)
{
    int max = arr[0];
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int last = n - i - 1;
        int max = getMaxElementIndex(arr, last);
        swap(arr, max, last);
    }
}

int main()
{
    int a[] = {5, 4, 3, 2, 1}, n = 5;
    selectionSort(a, n);
    display(a, n);
}