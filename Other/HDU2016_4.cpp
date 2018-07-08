#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int ABSSUM(int KH, int KW, int A[100][100], int B[100][100], int x, int y) {
	int sum = 0;
	for (int i = x; i < x+KH; i++) {
		for (int j = y; j < y+KW; j++) {
			sum += abs(A[i][j]-B[i][j]);
		}
	}
	return sum;
}

int main() {
	int H, W, KH, KW;
	int A[100][100], K[100][100];
	cin >> H >> W; 
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >>A[i][j];
		}
	}
	cin >> KH >> KW; 
	for (int i = 0; i < KH; i++) {
		for (int j = 0; j < KW; j++) {
			cin >> K[i][j];
		}
	}

	vector<int> SUM;
	for (int i = 0; i < H-KH; i++) {
		for (int j = 0; j < W-KW; j++) {
			SUM.push_back(ABSSUM(KH, KW, A, K, i, j));
		}
	}

	sort(SUM.begin(), SUM.end());
	
	cout << SUM[0] << endl;
	// cout << SUM[1] << endl;
	

	return 0; 
}