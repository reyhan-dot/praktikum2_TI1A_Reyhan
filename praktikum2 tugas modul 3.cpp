#include<iostream>
using namespace std;
int main() 
{
	double nilaiA, nilaiB, nilaiC;

	cout << "Kalkulasi Segitiga" << endl;
	cout << "Masukkan A: ";
	cin >> nilaiA;

	cout << "Masukkan B:";
	cin >> nilaiB;

	nilaiC = sqrt((nilaiA*nilaiA) + (nilaiB*nilaiB));

	cout << "\nHasil:" << endl;
	cout << "Sisi Miring:" << nilaiC << endl;
	return 0;

}