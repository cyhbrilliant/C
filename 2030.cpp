#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	int n;
	char S[20201];
	while (cin >> n) {
		getchar();
		for (int i = 0; i < n; i++) {
			cin.getline(S, 20200);
			int count = 0;
			for (int j = 0; S[j] != '\0'; j++) {
				if (S[j] < 0) {
					count++;
				}
			}
			cout << count/2 << endl;

		}
	}

	return 0;
}