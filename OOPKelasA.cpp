#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "masukkan nim : ";
		cin >> nim;
		cout << "masukkan nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nnim : " << nim << endl;
		cout << "nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namaMk;
	int sks;
public:
	void inputMk();
	void tampilMk();

};

void Matakuliah::inputMk() {
	cout << "masukkan kode : ";
	cin >> kode;
	cout << "masukkan namaMk : ";
	cin >> namaMk;
	cout << "masukkan sks : ";
	cin >> sks;
}

void Matakuliah::tampilMk() {
	cout << "\nkode: " << kode << endl;
	cout << "namaMk : " << namaMk << endl;
	cout << "sks : " << sks << endl;
}

int main() {
	Mahasiswa mhs;
	Matakuliah Mk;

	mhs.inputdata();
	mhs.tampildata();

	Mk.inputMk();
	Mk.tampilMk();  


}