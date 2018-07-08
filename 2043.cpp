#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	int M;
	while (cin >> M) {
		getchar();
		for (int i = 0; i < M; i++) {
			char S[51];
			cin.getline(S, 50);
			bool is = true;

			int num = 0;
			for (int j = 0; S[j] != '\0'; j++){
				num++;
			}
			if (num < 8 || num > 16){
				is =false;
			}
			// cout << num << endl;

			int Sclass[4] = {0, 0, 0, 0};
			for (int j = 0; S[j] != '\0'; j++){
				if (S[j] >= 'A' && S[j] <= 'Z') {
					if (Sclass[0] == 0) {
						Sclass[0] = 1;
					}
				}else if (S[j] >= 'a' && S[j] <= 'z') {
					if (Sclass[1] == 0) {
						Sclass[1] = 1;
					}
				}else if (S[j] >= '0' && S[j] <= '9') {
					if (Sclass[2] == 0) {
						Sclass[2] = 1;
					}
				}else if (S[j] == '~' || S[j] == '!' || S[j] == '@' || S[j] == '^' ||
					S[j] == '#' || S[j] == '$' || S[j] == '%') {
					if (Sclass[3] == 0) {
						Sclass[3] = 1;
					}
				}else {
					is =false;
				}
			}
			// cout << Sclass[0]<< Sclass[1] << Sclass[2] << Sclass[3]  << endl;
			if (Sclass[0]+Sclass[1]+Sclass[2]+Sclass[3] < 3) {
				is =false;
			}

			if (is) {
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl;
			}

		}



	}

	return 0;
}