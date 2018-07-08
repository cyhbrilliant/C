#include <iostream>
using namespace std;

int average(int *list, int begin, int end) {
	int sum = 0;
	for (int i = begin; i < end; i++) {
		sum += list[i];
	}
	return sum/(end-begin);
}


int main() {
	int list[100];
	for (int i = 0; i < 100; i++) {
		list[i] = 2*(i+1);
	}

	int m, n;
	while (cin >> n >> m) {
		if (n > 0 && n <= 100) {
			int blocks = (n-1)/m;
			int lastblock = n%m;
			for (int i = 0; i < blocks; i++) {
				cout << average(list, i*m, (i+1)*m) << " ";
			}
			cout << average(list, m*blocks, n) << endl;
		}
	}

}