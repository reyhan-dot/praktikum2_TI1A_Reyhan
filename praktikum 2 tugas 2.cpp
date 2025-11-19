#include <iostream>;
using namespace std;
int main()
{
	double nilai;
	cout << "=== Program Penghitungan Nilai ===" << endl;
	cout << "Masukkan nilai angka:";
	cin >> nilai;

	cout << "\nhasil:" << endl;
	if (nilai >= 90) {
		cout << "Nilai mutu:A" << endl;
		cout << "kerja bagus" << endl;
	}
	else if (nilai >= 80) {
		cout << "Nilai mutu:B" << endl;
		cout << "Cukup untuk lulus" << endl;
	}
	else if (nilai >= 70) {
		cout << "Nilai mutu:c" << endl;
		cout << "Bisa dibenahi" << endl;
	}
	else if (nilai >= 60) {
		cout << "Nilai mutu:D" << endl;
		cout << "Butuh nilai tambahan" << endl;
	}
	else if (nilai <= 50) {
		cout << "Nilai mutu:E" << endl;
		cout << " Perlu belajar  " << endl;
	}
}

	
