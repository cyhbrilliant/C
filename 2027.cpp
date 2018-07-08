#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		getchar();
		for (int i = 0; i < n; i++) {
			char S[101];
			cin.getline(S, 100);

			int num[5];
			for (int j = 0; j < 5; j++) {
				num[j] = 0;
			}
			for (int j = 0; S[j] != '\0'; j++) {
				if (S[j] == 'a' || S[j] == 'A') {
					num[0]++;
				}else if (S[j] == 'e' || S[j] == 'E') {
					num[1]++;
				}else if (S[j] == 'i' || S[j] == 'I') {
					num[2]++;
				}else if (S[j] == 'o' || S[j] == 'O') {
					num[3]++;
				}else if (S[j] == 'u' || S[j] == 'U') {
					num[4]++;
				}
			}

			cout << "a:" << num[0] << endl;
			cout << "e:" << num[1] << endl;
			cout << "i:" << num[2] << endl;
			cout << "o:" << num[3] << endl;
			cout << "u:" << num[4] << endl;

			if (i != n-1) {
				cout << endl;
			}
			
		}




	}

	return 0;
}