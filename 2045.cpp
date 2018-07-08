#include <iostream>
// #include <cmath>
using namespace std;

// int N;
// long long Paint(int i, int lastcolor, int firstcolor) {
// 	if (i == N) {
// 		if (lastcolor == firstcolor) {
// 			return 0;
// 		}else {
// 			return 1;
// 		}
// 	}else {
// 		long long num = 0;
// 		for (int k = 0; k < 3; k++) {
// 			if (k != lastcolor) {
// 				num += Paint(i+1, k, firstcolor);
// 			}
// 		}
// 		return num;
// 	}
// }

// int main() {

// 	while (cin >> N) {
// 		if (N == 1) {
// 			cout << '3' << endl;
// 		}else {
// 			long long num = 0;
//  			for (int i = 0; i < 3; i++) {
//  				num += Paint(1, i, i); 
//  			}
//  			cout << num << endl;
// 		}

// 	}

// 	return 0;
// }
// int side2[6][2] = {{0, 1}, {0, 2}, {1, 0}, {1, 2}, {2, 0}, {2, 1}};
// int side3[12][3];
// void init3() {
// 	int num = 0;
// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			if (j == i) {
// 				continue;
// 			}
// 			for (int k = 0; k < 3; k++) {
// 				if (k == j) {
// 					continue;
// 				}
// 				side3[num][0] = i;
// 				side3[num][1] = j;
// 				side3[num][2] = k;
// 				num++;
// 			}
// 		}
// 	}
// }


// long long CAL(int num,int last) {
// 	// cout << num << endl;
// 	if (num == 3) {
// 		if (last == 1) {
// 			return 6;
// 		}else {
// 			return 5;
// 		}
// 	}else if (num == 2) {
// 		if (last == 1) {
// 			return 2;
// 		}else {
// 			return 3;
// 		}
// 	}else if (num == 1) {
// 		if (last == 1) {
// 			return 2;
// 		}else {
// 			return 1;
// 		}
// 	}else {
// 		int K = 0;
// 		for (int i = 0; i < 12; i++) {
// 			if (last != side3[i][0]) {
// 				K += CAL(num-3, side3[i][2]);
// 			}
// 		}
// 		return K;
// 	}


// }

// int main() {
// 	int N;
// 	init3();
// 	while (cin >> N) {
// 		if (N == 1) {
// 			cout << "3" << endl;
// 		}else if (N == 2) {
// 			cout << "6" << endl;
// 		}else if (N == 3) {
// 			cout << "6" << endl;
// 		}else if (N == 4) {
// 			cout << "18" << endl;
// 		}else {
// 			cout << CAL(N-2, 0)*6 << endl;
// 		}

// 	}

// 	return 0;
// }


int main() {
	int N;
	while (cin >> N) {
		if (N == 1) {
			cout << "3" << endl;
		}else if (N == 2) {
			cout << "6" << endl;
		}else {
			long long result = 2;
			long long A = 0;
			long long Aex = 0;
			long long B = 1;
			for (int i = 2; i < N; i++) {
				result *= 2;
				Aex = A;
				A = 2*B;
				B = Aex + B;
			}
			cout << 3*(result-A) << endl; 
		}

	}

	return 0;
}