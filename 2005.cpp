#include <iostream>
#include <stdio.h>
using namespace std;

int Day1[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
int Day2[13] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};

int main() {
	int year;
	int month;
	int date;
	while (scanf("%d/%d/%d", &year, &month, &date) != EOF) {
		if (year%4 == 0 && year%100 != 0) {
			cout << Day2[month-1]+date << endl;
		}else if (year%100 == 0 && year%400 == 0) {
			cout << Day2[month-1]+date << endl;
		}else {
			cout << Day1[month-1]+date << endl;
		}
	}


	return 0;
}