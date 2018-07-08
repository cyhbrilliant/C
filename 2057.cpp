#include <iostream>
using namespace std;

int main() {
	char A[10000], B[10000];
	while (cin >> A >> B) {
		bool SignA = true; 
		bool SignB = true;
		int NumA = 0;
		int NumB = 0;
		for (int i = 0; A[i] != '\0'; i++) {
			NumA++;
		}
		for (int i = 0; B[i] != '\0'; i++) {
			NumB++;
		}  


		if (A[0] == '-') {
			SignA = false;
			for (int i = 1; i <= NumA; i++) {
				A[i-1] = A[i];
			}
			NumA--;
		}else {
			if (A[0] == '+') {
				for (int i = 1; i <= NumA; i++) {
					A[i-1] = A[i];
				}
				NumA--;
			}
		}

		if (B[0] == '-') {
			SignB = false;
			for (int i = 1; i <= NumB; i++) {
				B[i-1] = B[i];
			}
			NumB--;
		}else {
			if (B[0] == '+') {
				for (int i = 1; i <= NumB; i++) {
					B[i-1] = B[i];
				}
				NumB--;
			}
		}

		// cout << A << " " << B << endl;

		for (int i = 0; i < NumA; i++) {
			if (A[i] >= '0' && A[i] <= '9') {
				A[i] -= '0';
			}else {
				A[i] = A[i]-'A'+10;
			}
		}
		for (int i = 0; i < NumB; i++) {
			if (B[i] >= '0' && B[i] <= '9') {
				B[i] -= '0';
			}else {
				B[i] = B[i]-'A'+10;
			}
		}

		// for (int i = 0; i < NumA; i++) {
		// 	cout << (int)A[i] << " ";
		// }
		// for (int i = 0; i < NumB; i++) {
		// 	cout << (int)B[i] << " ";
		// }		
		char Result[10000];
		int Result_length;
		if (SignA == SignB) {
			if (NumA >= NumB) {
				Result_length = NumA;
				int k = 0;
				int j = NumB-1;
				char BJ;
				for (int i = NumA-1; i >= 0; i--) {
					if (j < 0) {
						BJ = 0;
					}else {
						BJ = B[j];
					}
					Result[k] = A[i]+BJ;
					k++;
					j--;

				}
			}else {
				Result_length = NumB;
				int k = 0;
				int j = NumA-1;
				char AJ;
				for (int i = NumB-1; i >= 0; i--) {
					if (j < 0) {
						AJ = 0;
					}else {
						AJ = A[j];
					}
					Result[k] = AJ+B[i];
					k++;
					j--;

				}
			}
			int Add = 0;
			for (int i = 0; i < Result_length; i++) {
				if (Add > 0) {
					Result[i] += Add;
					Add--;
				}
				if (Result[i] > 15) {
					Add++;
					Result[i] -= 16;
				}
			}
			if (Add > 0) {
				Result[Result_length] = 1;
				Result_length++;
			}

			for (int i = Result_length-1; i >= 0; i--) {
				if (Result[i] != 0) {
					break;
				}else {
					Result_length--;
				}
			}

			if (Result_length == 0) {
				cout << '0' << endl;
			}else {
				if (!SignA) {
					cout << '-';
				}
				for (int i = Result_length-1; i >= 0; i--) {
					if (Result[i] < 10) {
						cout << (char)(Result[i]+'0');
					}else {
						cout << (char)(Result[i]-10+'A');
					}
				}
				cout << endl;
			}





		}else {
			if (NumA >= NumB) {
				Result_length = NumA;
				int k = 0;
				int j = NumB-1;
				char BJ;
				for (int i = NumA-1; i >= 0; i--) {
					if (j < 0) {
						BJ = 0;
					}else {
						BJ = B[j];
					}

					if (SignA) {
						Result[k] = A[i]-BJ;
					}else {
						Result[k] = BJ-A[i];
					}
					
					k++;
					j--;

				}
			}else {
				Result_length = NumB;
				int k = 0;
				int j = NumA-1;
				char AJ;
				for (int i = NumB-1; i >= 0; i--) {
					if (j < 0) {
						AJ = 0;
					}else {
						AJ = A[j];
					}

					if (SignA) {
						Result[k] = AJ-B[i];
					}else {
						Result[k] = B[i]-AJ;
					}
					
					k++;
					j--;

				}
			}


			for (int i = Result_length-1; i >= 0; i--) {
				if (Result[i] != 0) {
					break;
				}else {
					Result_length--;
				}
			}


			bool Rsign = true;
			if (Result[Result_length-1] < 0) {
				Rsign = false;
				for (int i = Result_length-1; i >= 0; i--) {
					Result[i] = -Result[i];
				}	
			}

			int Sub = 0;
			for (int i = 0; i < Result_length; i++) {
				if (Sub > 0) {
					Result[i] -= Sub;
					Sub--;
				}
				if (Result[i] < 0) {
					Sub++;
					Result[i] += 16;
				}
			}

			for (int i = Result_length-1; i >= 0; i--) {
				if (Result[i] != 0) {
					break;
				}else {
					Result_length--;
				}
			}




			if (Result_length == 0) {
				cout << '0' << endl;
			}else {
				if (!Rsign) {
					cout << '-';
				}
				for (int i = Result_length-1; i >= 0; i--) {
					if (Result[i] < 10) {
						cout << (char)(Result[i]+'0');
					}else {
						cout << (char)(Result[i]-10+'A');
					}
				}
				cout << endl;
			}





		}





	}


	return 0;
}