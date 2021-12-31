import javax.sound.sampled.SourceDataLine;

class Bubble {
    public void sort() {
        int arr[] = { 5, 4, 3, 2, 1 };
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr, j, j + 1);
                }
            }
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public void swap(int arr[], int i, int j) {
        int data = arr[i];
        arr[i] = arr[j];
        arr[j] = data;
    }

    public static void main(String args[]) {
        Bubble ob = new Bubble();
        ob.sort();
    }
}
