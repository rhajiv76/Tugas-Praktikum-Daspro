#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int inputuser, tujuan;
	char pilihan;
	menu :
	cout<< "######Car Deliveri LAYANAN BARU Dalam cuaca apa pun######" << endl ;

		cout <<"Tujuan yang bisa anda pilih" <<endl;
	cout <<"1. Universitas halu oleo	" << endl;
	cout <<"2. Universitas Mandala		" << endl;
	cout <<"3. Universitas Muhammadiyah	"<< endl;
	cout <<"masukkan pilihan anda"<< endl;
	cin >> tujuan;

	switch(tujuan){
		case 1 :
			cout <<"masukkan tujuan yang anda inginkan"<< endl;
			cin>>tujuan;
			system ("cls");
			cout <<"Universitas halu oleo"<< endl;
			cout <<"Total pembayaran = 10000" <<endl;
			cout <<"Mohon tunggu Car Deliverinya -_-" ;

		ganti_tujuan :
			cout<< " Apakah anda ingin mengganti tujuan yang telah dipilih ?? (y/n)" << endl ;
			cout<< "Masukan pilihan anda : " << endl ;
			cin>> pilihan;
			if (pilihan == 'y') {
				system("cls") ;
			goto menu ;
			} else if (pilihan == 'n'){
				system("cls") ;
			cout<< "Terima kasih karena telah memesan Car Deliferi" ;
			} else {
			cout<<"opsi yang anda pilih salah " ;
			goto ganti_tujuan ;
			}
			break;

		case 2 :
			cout <<"masukkan tujuan yang anda inginkan"<< endl;
			cin>>tujuan;
			system ("cls");
			cout <<"Universitas Mandala"<< endl;
			cout <<"Total pembayaran = 10000" <<endl;
			cout <<"Mohon tunggu Car Deliverinya -_-" <<endl;
	Ganti_tujuan :
			cout<< " Apakah anda ingin mengganti tujuan yang telah dipilih ?? (y/n)" << endl ;
			cout<< "Masukan pilihan anda : " << endl ;
			cin>> pilihan;
		
			if (pilihan == 'y') {
				system("cls");
			goto menu ;
			} else if (pilihan == 'n') {
				system("cls");
			cout<< "Terima kasih karena telah memesan Car Deliferi" ;
			} else {
			cout<< "opsi yang anda pilih salah, " ;
			goto ganti_tujuan ;
			}
			break;

			case 3 :
		cout <<"masukkan tujuan yang anda inginkan"<< endl;
			cin>>tujuan;
			system ("cls");
			cout <<"Universitas Muhammadiyah"<< endl;
			cout <<"Total pembayaran = 10000" <<endl;
			cout <<"Mohon tunggu Car Deliverinya -_-" <<endl;
		Ganti_tujua :
			cout<< " Apakah anda ingin mengganti tujuan yang telah dipilih ?? (y/n)" << endl ;
			cout<< "Masukan pilihan anda : " << endl ;
			cin>> pilihan;
			if (pilihan == 'y'){
				system("cls");
			goto menu ;
		} else if (pilihan == 'n'){
			system("cls");
			cout<<"Terima kasih karena telah memesan Car Deliferi" ;
		} else {
			cout<< "opsi yang anda pilih salah, " ;
			goto ganti_tujuan ;
	}
	break ;
	default :
		system("cls");
		cout<<"opsi yang anda pilih salah!!" << endl ;
		goto menu ;

	}

}
