#pragma once
#include <iostream>
#include <ctime>

using namespace std;

void fullfilling(int** array, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			array[i][j] = 1 + rand() % 70;
		}
	}
}

void showing(int** array, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
}

int sum(int** array, int r, int c) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = c - 1; j > 0; j--) {
			sum += array[i][j];
		}
	}
	cout << "Sum = " << sum << endl;
	return sum;
}