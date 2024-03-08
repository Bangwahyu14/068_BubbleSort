#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variable global n untuk menyimpan banyaknya elemen array

void input() {     //procedur untuk input

	while (true) {
		cout << "masukan banyaknya elemen pada array : "; // output ke layar
		cin >> n; //input dari pengguna 
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break; //keluar dari loop
		else {    //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; 1 < n; i++) {  //Looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + 1) << ": "; //output kelayar
		cin >> arr[i];            //output dari pengguna

	}
}
