#include <iostream>
#include "sr1.2.h"

using namespace std;

int main() {
	int n, k, sum, maxs;
	maxs = 0;
	sum = 0;
	cout << "Enter a size of the array." << endl;
	cin >> n;
	cout << "Enter your K." << endl;
	cin >> k;
	int* arr = new int[n];
	cout << "Enter an array's elements:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Your array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < i + k - 1; j++) {
			sum = sum + arr[j];
		}
		if (sum > maxs) {
			maxs == sum;
		}
	}
	cout << "Your max sum = " << maxs << endl;
}