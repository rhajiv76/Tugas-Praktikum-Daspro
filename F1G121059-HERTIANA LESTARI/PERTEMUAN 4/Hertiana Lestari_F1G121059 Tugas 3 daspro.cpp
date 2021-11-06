#include <iostream>

using namespace std;

int main() {  

	char nomenuMakanan, nomenuMinuman;
	int harga1, harga2;
	
	cout << "*******DAFTAR MENU******" << endl;
	cout << "MAKANAN: 			" << endl;
	cout << "1. BAKSO URAT   	25000" << endl;
	cout << "2. MIE PANGSIT  	15000" << endl;
	cout << "MINUMAN:				 " << endl;
	cout << "ES JERUK  		7000" << endl;
	cout << "ES TEH   		5000" << endl;
	cout <<"*************************" << endl;
	
	cout << "SILAHKAN IMPUTKAN NOMOR MENU MAKANAN" << endl;
	cin >> nomenuMakanan;
	
	switch (nomenuMakanan) {
	case'1'
		:cout <<"anda memesan BAKSO URAT" << endl;
		harga1 = 25000;
		break;
	case '2'
		:cout <<"anda memesan MIE PANGSIT" << endl;
		harga1 = 15000;
		break;
	default:;
		cout << "tidak ada dimenu" << endl;
	}
	
	cout << "SILAHKAN IMPUTKAN NOMOR MENU MINUMAN" << endl;
	cin >> nomenuMinuman;

	
	switch (nomenuMinuman) {
	case '1':
		cout <<"anda memesan ES JERUK" << endl;
		harga2 = 25000;
		break;
	case '2':
		cout <<"anda memesan ES TEH" << endl;
		harga2 = 15000;
		break;
	default:;
		cout << "tidak ada dimenu" << endl;
	}
	cout << "**************************" << endl;
	cout <<"total harga yang harus anda bayar adalah: Rp" << harga1+harga2 << endl;
	
	}


