#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	char S[2021];
	while (cin >> n) {
		getchar();
		for (int i = 0; i < n; i++) {
			cin.getline(S, 2020);
			bool is = true;
			int count = 0;
			for (int j = 0; S[j] != '\0'; j++) {
				count++;
			}

			for (int j = 0; S[j] != '\0'; j++) {
				if (S[j] != S[count-j-1]) {
					is = false;
					break;
				}
			}
			if (is) {
				cout << "yes" << endl;
			}else {
				cout << "no" << endl;
			}

		}



	}

	return 0;
}