#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	double x, y, R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	if ((y = sqrt(R * R - x * x) && x >= 0 && y >= -R && y <= R && x <= R) || (y = x && y >= -R && x <= 0 && y <= 0) || (y = -x && x <= 0 && y <= R && y >= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}