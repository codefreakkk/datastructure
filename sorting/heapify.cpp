#include <iostream>
using namespace std;

void swap(int arr[], int i, int large)
{
    int temp = arr[i];
    arr[i] = arr[large];
    arr[large] = temp;
}

void display(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

void heapify(int arr[], int n, int i)
{
    int large = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[left] > arr[large])
        large = left;
    if (right <= n && arr[right] > arr[large])
        large = right;

    if (large != i)
    {
        swap(arr, i, large);
        heapify(arr, n, large);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = (n / 2); i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int deleteh(int arr[], int n)
{
    int large = arr[1];
    arr[1] = arr[n];
    n = n - 1;
    int i = 1;

    while (i < n)
    {
        int left = arr[2 * i];
        int right = arr[2 * i + 1];
        int large = (left > right) ? (2 * i) : (2 * i + 1);

        if (arr[i] < arr[large])
        {
            swap(arr, i, large);
            i = large;
        }
        else
            return large;
    }
    return large;
}

void sort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n; i > 0; i--)
    {
        swap(arr, 1, i);
        heapify(arr, i - 1, 1);
    }
}

int main()
{
    int arr[] = {0, 40, 10, 30, 50, 60, 15};
    int n = 6;
    sort(arr, n);
    display(arr, n);
}