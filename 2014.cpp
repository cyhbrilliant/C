#include <iostream>
#include <iomanip>
using namespace std;

void delScore(double *Dscore, double *score, int n) {
	double high = score[0];
	double low = score[0];
	int index_H = 0;
	int index_L = 0;
	for (int i = 1; i < n; i++) {
		if (score[i] > high) {
			high = score[i];
			index_H = i; 
		}
		if (score[i] < low) {
			low = score[i];
			index_L = i;
		}
	}
	int index = 0;
	for (int i = 0; i < n; i++) {
		if ((i != index_H) && (i != index_L)) {
			Dscore[index] = score[i];
			index++;
		}
	}
}

double average(double *score, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += score[i];
	}
	return sum/(double)n;
}


int main() {
	int n;
	double score[100];
	double Dscore[100];
	while (cin >> n) {
		if (n > 2 && n <= 100) {
			for (int i = 0; i < n; i++) {
				cin >> score[i];
			}
			delScore(Dscore, score, n);
			cout << setiosflags(ios::fixed) << setprecision(2) << average(Dscore, n-2) << endl; 
		}
	}
}