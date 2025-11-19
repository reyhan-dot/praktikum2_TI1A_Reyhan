#include <iostream>

using namespace std;
int main()
{
	char huruf;
	cout << "Detektor huruf Vokal" << endl;
	cout << "Masukkan huruf:";
	cin >> huruf;
	
	cout << "\nHasil:" << endl;
		if (huruf == 'a' | huruf == 'i' | huruf == 'u' | huruf == 'e' | huruf == 'o' |
			huruf == 'A' | huruf == 'I' | huruf == 'U' | huruf == 'E' | huruf == 'O') {
			cout << huruf << " adalah Huruf Vokal" << endl;
	} else {
			cout << huruf << " adalah Huruf Konsonan" << endl;
	}
	return 0;
}

//time spend 2 hours
