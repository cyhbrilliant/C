#include <iostream>
#include <string>
using namespace std;

int main() {
	char A[20000], B[20000];
	while (cin >> A >> B) {

		bool F = false;
		int Znum = 0;
		int Anum = 0;
		int Bnum = 0;
		for (int i = 0; A[i] != '\0'; i++) {
			if (A[i] == '.') {
				F = true;
			}
			if (A[i] == '0' && F) {
				Znum++;
			}
			if (A[i] != '0') {
				Znum = 0;
			}
			Anum++;
		}
		A[Anum-Znum] = '\0';
		Anum -= Znum;

		F = false;
		Znum = 0;
		for (int i = 0; B[i] != '\0'; i++) {
			if (B[i] == '.') {
				F = true;
			}
			if (B[i] == '0' && F) {
				Znum++;
			}
			if (B[i] != '0') {
				Znum = 0;
			}
			Bnum++;
		}
		B[Bnum-Znum] = '\0';
		Bnum -= Znum;
		// cout << A[Anum-1] << endl << B[Bnum-1] << endl;

		if (Anum > 1 && A[Anum-1] == '.') {
			A[Anum-1] = '\0';
			Anum--;
		}
		if (Bnum > 1 && B[Bnum-1] == '.') {
			B[Bnum-1] = '\0';
			Bnum--;
		}

		// cout << A << endl << B << endl;

		if (Anum != Bnum) {
			cout << "NO" << endl;
		}else {
			bool equal = true;
			for (int i = 0; i < Anum; i++) {
				if (A[i] != B[i]) {
					equal = false;
					break;
				}
			}
			if (equal) {
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl;
			}
		}
		
		
	}


	return 0;
}

// int main() {
// 	string A, B;
// 	while (cin >> A >> B) {
// 		if (A == B) {
// 			cout << "YES" << endl;
// 		}else {
// 			cout << "NO" << endl;
// 		}
// 	}
// }