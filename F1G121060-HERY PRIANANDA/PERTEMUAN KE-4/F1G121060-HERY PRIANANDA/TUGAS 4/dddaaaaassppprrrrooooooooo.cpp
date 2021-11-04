#include <iostream>

 using namespace std;
 
 int main() {

 	int snack, jumlah, total, uang;
 	char ulang;
 	
	beli:
 	cout<<"1. Nabati"<<endl;
 	cout<<"2. Nextar"<<endl;
 	cout<<"3. Malkist"<<endl;
 	cout<<endl;
 	
 	cout<<"Masukan jenis barang yang ingin anda beli: ";cin>>snack;
	cout<<endl;
	switch (snack){
		case 1:
			bayar:
			cout<<"Harga Nabati Rp.5.000/pcs\n"<<endl;
			cout<<"Masukan jumlah barang yang ingin dibeli: ";cin>>jumlah;
			total=jumlah*5000;
			cout<<endl;
			cout<<"Total harga keseluruhan adalah: Rp."<<total<<endl;
			cout<<"Masukan uang anda: ";cin>>uang;
				if(uang==total){
					lagi:
					system("cls");
					cout<<"Selamat pembayaran anda telah berhasil."<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lainnya? Tekan y jika ingin melakukan pembelian lainnya atau n untuk keluar."<<endl;
					cout<<("(y/n)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {
						system ("cls");
						goto lagi;}
				}else if(uang>total){
					lagi1:
					system ("cls");
					cout<<"Selamat pembayaran anda telah berhasil."<<endl;
					cout<<"Sisa uang anda adalah: Rp. "<<uang-total<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lainnya? Tekan y jika ingin melakukan pembelian lainnya atau n untuk keluar."<<endl;
					cout<<("(y/n)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {
						system("cls");
						goto lagi1;}
				}else {
					lagi2:
					cout<<"Maaf uang anda tidak cukup."<<endl;
					cout<<"Apakah anda ingin melakukan pembayaran ulang? Tekan y jika ingin melakukan pembayaran ulang, r untuk melakukan pembelian baru atau n untuk keluar."<<endl;
					cout<<("(y/n/r)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto bayar;
						}else if(ulang=='r'){
							system("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {
						system("cls");
						goto lagi2;
						}
				}break;
		case 2:
			bayar2:
			cout<<"Harga Naxtar Rp.3.000/pcs\n"<<endl;
			cout<<"Masukan jumlah barang yang ingin dibeli: ";cin>>jumlah;
			total=jumlah*3000;
			cout<<endl;
			cout<<"Total harga keseluruhan adalah: Rp."<<total<<endl;
			cout<<"Masukan uang anda: ";cin>>uang;
				if(uang==total){
					lagi3:
					system("cls");
					cout<<"Selamat pembayaran anda telah berhasil."<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lainnya? Tekan y jika ingin melakukan pembelian lainnya atau n untuk keluar."<<endl;
					cout<<("(y/n)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {system("cls");
						goto lagi3;}
				}else if(uang>total){
					lagi4:
					system ("cls");
					cout<<"Selamat pembayaran anda telah berhasil."<<endl;
					cout<<"Sisa uang anda adalah: Rp. "<<uang-total<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lainnya? Tekan y jika ingin melakukan pembelian lainnya atau n untuk keluar."<<endl;
					cout<<("(y/n)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {
						system("cls");
						goto lagi4;
						}
				}else {
					lagi5:
					cout<<"Maaf uang anda tidak cukup."<<endl;
					cout<<"Apakah anda ingin melakukan pembayaran ulang? Tekan y jika ingin melakukan pembayaran ulang, r untuk melakukan pembelian baru atau n untuk keluar."<<endl;
					cout<<("(y/n/r)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto bayar2;
						}else if(ulang=='r'){
							system("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else  {
							system("cls");
							goto lagi5;
						}break;
		case 3:
			bayar3:
			cout<<"Harga Malkist Rp.6.000/pcs\n"<<endl;
			cout<<"Masukan jumlah barang yang ingin dibeli: ";cin>>jumlah;
			total=jumlah*6000;
			cout<<endl;
			cout<<"Total harga keseluruhan adalah: Rp."<<total<<endl;
			cout<<"Masukan uang anda: ";cin>>uang;
				if(uang==total){
					lagi6:
					system("cls");
					cout<<"Selamat pembayaran anda telah berhasil."<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lainnya? Tekan y jika ingin melakukan pembelian lainnya atau n untuk keluar."<<endl;
					cout<<("(y/n)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {system("cls");
						goto lagi6;}
				}else if(uang>total){
					lagi7:
					system ("cls");
					cout<<"Selamat pembayaran anda telah berhasil."<<endl;
					cout<<"Sisa uang anda adalah: Rp. "<<uang-total<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lainnya? Tekan y jika ingin melakukan pembelian lainnya atau n untuk keluar."<<endl;
					cout<<("(y/n)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else {
						system("cls");
						goto lagi7;
						}
				}else {
					lagi8:
					cout<<"Maaf uang anda tidak cukup."<<endl;
					cout<<"Apakah anda ingin melakukan pembayaran ulang? Tekan y jika ingin melakukan pembayaran ulang, r untuk melakukan pembelian baru atau n untuk keluar."<<endl;
					cout<<("(y/n/r)? ");cin>>ulang;
						if(ulang=='y'){
							system ("cls");
							goto bayar3;
						}else if(ulang=='r'){
							system("cls");
							goto beli;
						}else if(ulang=='n'){
							cout<<"Terima kasih telah menggunakan program ini, tekan tombol apa saja untuk keluar."<<endl;
						}else  {
							system("cls");
							goto lagi8;
						}
				}
			}break;
	default: system ("cls");
			goto beli;
	}
	return 0;
 }
