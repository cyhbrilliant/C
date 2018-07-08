#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			getchar();
			char S[51];
			cin.get(S,50);
			bool is = true;


			if (S[0] >= 'A' && S[0] <= 'z') {

			}else if (S[0] == '_') {

			}else {
				is = false;
			}

			for (int j = 0; S[j] != '\0'; j++) {
				if (S[j] >= 'A' && S[j] <= 'z') {

				}else if (S[j] == '_') {

				}else if (S[j] >= '0' && S[j] <= '9'){
					
				}else {
					is = false;
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