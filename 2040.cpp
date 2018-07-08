#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int M;
	while (cin >> M) {
 		for (int i = 0; i < M; i++) {
 			int A, B;
 			cin >> A >> B;

 			int sumA = 1;
 			for (int j = 2; j <= sqrt(A); j++) {
 				if (A%j == 0) {
 					sumA += j;
 					if (j != A/j) {
 						sumA += A/j;
 					}
 					
 				}
 			}

 			int sumB = 1;
 			for (int j = 2; j <= sqrt(B); j++) {
 				if (B%j == 0) {
 					sumB += j;
 					if (j != B/j) {
 						sumB += B/j;
 					}
 					
 				}
 			}

 			if (sumA == B && sumB == A) {
 				cout << "YES" << endl;
 			}else {
 				cout << "NO" << endl;
 			}

 		}
	}

	return 0;
}