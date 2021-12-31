#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l;
    int j = r;

    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr, i, j);
    }
    swap(arr, j, l);
    return j;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {3, 5, 4, 1, 2};
    int n = 5;
    quickSort(arr, 0, n);
    display(arr, n);
}