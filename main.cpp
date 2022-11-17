#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		double x, y;
		cin >> x >> y;

		const auto& xm = x / 100;
		const auto& bmi = y / (xm * xm);

		if (x < 140.1) {
			cout << 6;
		}
		else if (x < 146) {
			cout << 5;
		}
		else if (x < 159) {
			cout << 4;
		}
		else if (x < 161) {
			if (16.0 <= bmi && bmi < 35.0) {
				cout << 3;
			}
			else {
				cout << 4;
			}
		}
		else if (x < 204) {
			if (20.0 <= bmi && bmi < 25.0) {
				cout << 1;
			}
			else if ((18.5 <= bmi && bmi < 20.0) ||
				(25.0 <= bmi && bmi < 30.0)) {
				cout << 2;
			}
			else if ((16.0 <= bmi && bmi < 18.5) ||
				(30.0 <= bmi && bmi < 35.0)) {
				cout << 3;
			}
			else {
				cout << 4;
			}
		}
		else {
			cout << 4;
		}

		cout << '\n';
	}

	return 0;
}