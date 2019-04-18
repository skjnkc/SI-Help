#include<iostream>
using namespace std;



int linear_search(int a, const int b, int c[]) {
	for (int i = 0; i < b; i++) {
		if (c[i] == a)
			return i;
	}
	return -1;
}

// From https://www.geeksforgeeks.org/binary-search/
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 
int recBinarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x)
			return recBinarySearch(arr, l, mid - 1, x);

		// Else the element can only be present 
		// in right subarray 
		return recBinarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not 
	// present in array 
	return -1;
}

int binarySearch(int arr[], int size, int target) {

	int low = 0;
	int high = size;
	int mid = (low + high) / 2;

	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] < target)
			low = mid + 1;
		else if (arr[mid] > target)
			high = mid - 1;
		else 
			return mid;
	}
	return -1;



}

void main() {

	const int SIZE = 10;
	int a[SIZE] = { 1, 5, 15, 21, 24, 27, 32, 47, 55, 66 };
	int target;
	cin >> target;

	cout << recBinarySearch(a, 0, SIZE, target) << endl;
	cout << binarySearch(a, SIZE, target) <<endl;
	system("PAUSE");

	
}