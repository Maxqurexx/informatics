#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	float pi = 3.1415;
	float x, y;
	cout << "Enter x and y: ";
	cin >> x >> y;

	float R = cos(pi / 2 * x);
	float S = log2(pow(2, y));

	cout << "R = " << R << ", S = " << S << endl;
	cout << "Biggest number: " << max(R, S) << endl;
	system("pause");
	return 0;
}
