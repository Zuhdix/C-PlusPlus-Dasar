#include <iostream>

using namespace std; // ini digunakan agar tidak usah memanggil std lagi

int main(){
	
	int a;
	a = 10;
	cout << a << endl;

	int b;
	cout << "masukan nilai : ";
	cin >> b;
	cout << "nilai yang anda masukan adalah: ";
	cout << b << endl;

	cin.get();
	return 0;
}
