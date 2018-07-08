#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int m, n;
	while (cin >> m >> n) {
		int max = -1;
		int truth = -1;
		int x;
		int y;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int score;
				cin >> score;
				if (abs(score) > max) {
					max = abs(score);
					truth = score;
					x = i+1;
					y = j+1;
				}
			}
		}
		cout << x << " " << y << " " << truth << endl;
	}


	return 0;
}