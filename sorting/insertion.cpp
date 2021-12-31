#include <iostream>
using namespace std;

void swap(int arr[], int j, int n)
{
    int temp = arr[j];
    arr[j] = arr[j - 1];
    arr[j - 1] = temp;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr, j, n);
            }
            else
                break;
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] + " ";
    }
}

int main()
{
    int arr[] = {4, 3, 5, 2, 1};
    int n = 5;
    sort(arr, n);
    display(arr, n);
}