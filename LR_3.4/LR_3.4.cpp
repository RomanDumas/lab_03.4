#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	double x, y, R;
	int f1, f2, f3;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	if ((-R <= x && x <= 0) && (0 <= y && y <= R) && (-x <= y)) {
		f1 = 1;
	}
	else {
		f1 = 0;
	}
	if ((-R <= x && x <= 0) && (-R <= y && y <= 0) && (y <= x)) {
		f2 = 1;
	}
	else {
		f2 = 0;
	}
	if ((0 <= x && x <= R) && (-R <= y && y <= R)) {
		f3 = 1;
	}
	else {
		f3 = 0;
	}
	if (f1 || f2 || f3 == 1) 
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}