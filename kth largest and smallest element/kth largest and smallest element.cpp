#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int flag, temp;
		for (int j = 0; j < n - 1 - i; j++) {
			flag = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}

int main()
{
	int arr[] = { 8,5,7,3,2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<< "BEFORE SORTING " << endl;
	cout << "  " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	bubbleSort(arr, n);
	int i;
	cout << "Which kth largest element you want: " << endl;
	cin >> i;

	cout << arr[n - i] << "  is the element" << endl;


	int min;
	cout << "Which kth smallest element you want: " << endl;
	cin >> min;
	cout << arr[min-1] << " is the element" << endl;
}