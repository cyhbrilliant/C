#include <iostream>
using namespace std;

int main() {
	int W, H;
	while (cin >> W >> H) {
		for (int i =0; i < H+2; i++) {
			for (int j = 0; j < W+2; j++) {
				if (i == 0) {
					if (j == 0) {
						cout << "+";
					}else if (j == W+1) {
						cout << "+";
					}else {
						cout << "-";
					}
				}else if (i == H+1){
					if (j == 0) {
						cout << "+";
					}else if (j == W+1) {
						cout << "+";
					}else {
						cout << "-";
					}
				}else if (j == 0){
					cout << "|";
				}else if (j == W+1) {
					cout << "|";
				}else {
					cout << " ";
				}

			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}