#include <iostream>
#include <math.h>

using namespace std;

//Let x be a vector with n integer elements. 
//Display the vector, the elements on the odd positions and the arithmetic mean.

void main() {
	int x[10], n, i, k = 0;
	float m, s = 0;
	cout << "Dimension: ";
	cin >> n;
	cout << "The elements of the vector: " << endl;
	for (i = 1; i <= n; i++) {
		cout << "x[" << i << "]=";
		cin >> x[i];
	}
	cout << "The vector: " << endl;
	for (i = 1; i <= n; i++)
		cout << "x[" << i << "]=" << x[i] << endl;
	cout << "The new vector " << endl;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			cout << "x[" << i << "]=" << x[i] << endl;
			k++;
			s = s + x[i];
		}
	}
	m = s / k;
	cout << "Arithmetic mean: " << m;
}