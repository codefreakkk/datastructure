#include<iostream>
using namespace std;

int getMax(int arr[], int n) {
	int max = arr[0];	
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) max = i;
	}
	return max;
}

void swap(int arr[], int i, int last, int max) {
	int data = arr[max];
	arr[last] = arr[max];
	arr[max] = data;
}

int main() {
	int arr[] = {5,4,3,2,1};
	int n = 5;
	
//	for(int i = 0; i < n; i++) {
//		int max = getMax(arr, n);
//		int last = n - i - 1;
//		swap(arr, i, last, max);
//	}

	
	for(int i = 0; i < n; i++) {
		cout << arr[i] + " ";
	}
	 
	
}
