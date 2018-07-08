#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;



double Plong(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2-x1, 2.0)+pow(y2-y1, 2.0));
} 

double getA(double x1, double y1, double x2, double y2) {
	double A;
	double L = Plong(x1, y1, x2, y2);
	if (y2 == y1) {
		if (x2 > x1) {
			A = 0;
		}else {
			A = 2.0;
		}
	}
	if (x2 == x1) {
		if (y2 > y1) {
			A = 1.0;
		}else {
			A = 3.0;
		}
	}

	if (y2 > y1 && x2 > x1) {
		A = (y2-y1)/L;
	}
	if (y2 > y1 && x2 < x1) {
		A = 2.0-(y2-y1)/L;
	}
	if (y2 < y1 && x2 < x1) {
		A = 2.0+(y1-y2)/L;
	}
	if (y2 < y1 && x2 > x1) {
		A = 4.0-(y1-y2)/L;
	}
	return A;
}


bool compare(double x0, double y0, double x1, double y1, double x2, double y2) {
	if (y2 >= y0 && x2 > x0 && y1 < y0 && x1 > x0) {
		return true;
	}else {
		double A1 = getA(x0, y0, x1, y1);
		double A2 = getA(x0, y0, x2, y2);
		if (A2 >= A1) {
			return true;
		}else {
			return false;
		}
	}

}

double S3(double a, double b, double c) {
	double p = (a+b+c)/2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}else {
			int X[101];
			int Y[101];
			for (int i = 0; i < n; i++) {
				cin >> X[i] >> Y[i];
			}
			double S = 0;
			for (int i = 2; i < n; i++) {
				bool O = true;
				if (!compare(X[0], Y[0], X[i-1], Y[i-1], X[i], Y[i])) {
					O = false;
				}
			
				if (O) {
					S += S3(Plong(X[0], Y[0], X[i-1], Y[i-1]), 
					Plong(X[i], Y[i], X[i-1], Y[i-1]), 
					Plong(X[0], Y[0], X[i], Y[i]));
				}else {
					S -= S3(Plong(X[0], Y[0], X[i-1], Y[i-1]), 
					Plong(X[i], Y[i], X[i-1], Y[i-1]), 
					Plong(X[0], Y[0], X[i], Y[i]));
				}
				
			}

			printf("%.1lf\n", S);
			// cout << setiosflags(ios::fixed) << setprecision(1) << S << endl;


		}




	}

	return 0;
}
