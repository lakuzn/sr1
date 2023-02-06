#include <iostream>
#include <ctime>
#include "sr1.h"

using namespace std;

int main() {
	int r, c;
	srand(time(0));
	cout << "Enter a number of rows:" << endl;
	cin >> r;
	cout << "Enter a number of collumns:" << endl;
	cin >> c;
	int** array = new int* [r];
	for (int count = 0; count < r; ++count)
		array[count] = new int[c];
	fullfilling(array, r, c);
	showing(array, r, c);
	sum(array, r, c);
	delete array;
	return 0;
}