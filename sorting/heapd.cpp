#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void deleteh(int arr[], int n)
{
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
            return;
    }

    // display tree
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {0, 40, 30, 10, 20, 15};
    int n = 5;
    deleteh(arr, n);
}