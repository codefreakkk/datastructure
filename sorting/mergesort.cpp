#include <iostream>
using namespace std;

int *merge(int arr[], int l, int mid, int r)
{
    static int a[10] = {0};
    int i = l;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            a[k] = arr[i];
            i++;
        }
        else
        {
            a[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        a[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        a[k] = arr[j];
        j++;
        k++;
    }
    return a;
}

int *sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = 5 / 2;
        sort(arr, l, mid);
        sort(arr, mid + 1, r);
        return merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    int *a = sort(arr, 0, 5);
    cout << *a + 1;
}