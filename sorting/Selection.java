class Selection {

    int getMax(int arr[], int n) {
        int max = arr[0];
        int index = 0;
        for (int i = 1; i <= n; i++) {
            if (arr[i] > max) {
                max = arr[i];
                index = i;
            }
        }
        return index;
    }

    void swap(int arr[], int i, int last, int max) {
        int data = arr[last];
        arr[last] = arr[max];
        arr[max] = data;
    }

    void sort() {
        int arr[] = { 5, 4, 3, 2, 1 };
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            int last = n - i - 1;
            int max = getMax(arr, last);
            swap(arr, i, last, max);
        }

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        Selection obj = new Selection();
        obj.sort();
    }
}