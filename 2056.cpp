#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
		double X, Y;
		double temp;
		if (x1 > x2) {
			temp = x1;
			x1 = x2;
			x2 = temp;
		}
		if (x3 > x4) {
			temp = x3;
			x3 = x4;
			x4 = temp;
		}
		if (y1 > y2) {
			temp = y1;
			y1 = y2;
			y2 = temp;
		}
		if (y3 > y4) {
			temp = y3;
			y3 = y4;
			y4 = temp;
		}

		if (x2 >= x4 && x1 <= x3){
			X = x4-x3;
		}
		if (y2 >= y4 && y1 <= y3){
			Y = y4-y3;
		}

		if (x2 <= x4 && x1 >= x3){
			X = x2-x1;
		}
		if (y2 <= y4 && y1 >= y3){
			Y = y2-y1;
		}

		if (x4 >= x2 && x3 >= x1) {
			if (x2 > x3) {
				X = x2-x3;
			}else {
				X = 0;
			}
		}
		if (x4 <= x2 && x3 <= x1) {
			if (x4 > x1) {
				X = x4-x1;
			}else {
				X = 0;
			}
		}
		

		if (y4 >= y2 && y3 >= y1) {
			if (y2 > y3) {
				Y = y2-y3;
			}else {
				Y = 0;
			}
		}
		if (y4 <= y2 && y3 <= y1) {
			if (y4 > y1) {
				Y = y4-y1;
			}else {
				Y = 0;
			}
		}
		printf("%.2lf\n", X*Y);



	}

	return 0;
}