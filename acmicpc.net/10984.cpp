#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		int score = 0;
		double gpa = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int c;
			float g;
			cin >> c >> g;
			score += c;
			gpa += c*g;
		}
		printf("%d %.1lf\n", score, gpa / score);

	}

	return 0;

}
