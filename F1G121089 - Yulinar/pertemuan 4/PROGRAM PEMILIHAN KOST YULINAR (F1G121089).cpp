#include <iostream>
using namespace std;


int main (){
	
	int kost , uang_pembayaran , uang , kost_1 , kost_2 , kost_3;

	char pilihan;
	kembali:
	cout<<"**********************DAFTAR PEMILAHAN KOST**********************"<<endl;
	cout<<"1. kost  dilengkapi dengan fasilitas wc dan dapur dalam"<<endl<<"2. kost dilengkapi dengan fasilitas kasur, tapi wc luar"<<endl<<"3. kost dilengkapi dengan fasilitas wi-fi, tapi ukuran kos lebih kecil kecil"<<endl;
	cout<<"Masukkan Kost Pilihan Anda = 	";
	cin>>kost;
	system ("cls");
	
	switch (kost){
		case 1:
			kembali_kost_1:
			cout<<"kost 1 = 550.000 per bulan"<<endl;
			cout<<"Masukkan Uang Pembayaran Kost 1 Seperti Yang Tertera Diatas=";
			cin>>uang;	
			system ("cls");
			cout<<"SELAMAT ANDA TELAH BERHASIL MELAKUKAN PEMBAYARAN"<<endl;
			ulang_pembayaran_kost_1:
			cout<<"Apakah Anda Ingin Kembali Ke Menu Utama Untuk Melakukan Pemilihann Ulang?? (y/n) "<<endl;
			cout<<"Silahkan Masukkan Pilihan 'y' Jika Mau, Dan 'n'Jika Tidak Ingin Kembali Ke Menu Utama =";
			cin>>pilihan;
			if (pilihan == 'y'){
				system ("cls");
				goto kembali;
				}
				else if (pilihan == 'n'){
					system ("cls");
					cout<<"TERIMA KASIH KARENA TELAH MENGGUNAKAN PROGRAM INI"<<endl;					
				}else{
					cout<<"PENGISIAN YANG TELAH ANDA LAKUKAN MASIH KELLIRU"<<endl;
					goto kembali_kost_1;
					
				}
				break;
		case 2 :
			kembali_kost_2:
			cout<<"kost 2 = 600.000 per bulan"<<endl;
		   	cout<<"Masukkan Uang Pembayaran Kost 2 Seperti Yang Tertera Diatas=";
			cin>>uang;	
			system ("cls");
			cout<<"SELAMAT ANDA TELAH BERHASIL MELAKUKAN PEMBAYARAN"<<endl;
			ulang_pembayaran_kost_2:
			cout<<"Apakah Anda Ingin Kembali Ke Menu Utama Untuk Melakukan Pemilihann Ulang?? (y/n) "<<endl;
			cout<<"Silahkan Masukkan Pilihan 'y' Jika Mau, Dan 'n'Jika Tidak Ingin Kembali Ke Menu Utama =";
			cin>>pilihan;
			if (pilihan == 'y'){
				system ("cls");
				goto kembali;
				}
				else if (pilihan == 'n'){
					system ("cls");
				cout<<"TERIMA KASIH KARENA TELAH MENGGUNAKAN PROGRAM INI"<<endl;					
				}else{
					cout<<"PENGISIAN YANG TELAH ANDA LAKUKAN MASIH KELLIRU"<<endl;
					goto kembali_kost_2;
					
				}
				break;
		case 3 :
			kembali_kost_3:
			cout<<"kost 3 = 450.000 per bulan"<<endl;
			cout<<"Masukkan Uang Pembayaran Kost 3 Seperti Yang Tertera Diatas=";
			cin>>uang;	
			system ("cls");
			cout<<"SELAMAT ANDA TELAH BERHASIL MELAKUKAN PEMBAYARAN"<<endl;
			ulang_pembayaran_kost_3:
			cout<<"Apakah Anda Ingin Kembali Ke Menu Utama Untuk Melakukan Pemilihann Ulang?? (y/n) "<<endl;
			cout<<"Silahkan Masukkan Pilihan 'y' Jika Mau, Dan 'n'Jika Tidak Ingin Kembali Ke Menu Utama =";
			cin>>pilihan;
			if (pilihan == 'y'){
				system ("cls");
				goto kembali;
				}
				else if (pilihan == 'n'){
					system ("cls");
					cout<<"TERIMA KASIH KARENA TELAH MENGGUNAKAN PROGRAM INI"<<endl;					
				}else{
					cout<<"PENGISIAN YANG TELAH ANDA LAKUKAN MASIH KELLIRU"<<endl;
					goto kembali_kost_3;
					
				}
				break;
			
		    default:
		    system ("cls");
			cout<<"MAAF PILIHAN YANG ANDA MASUKKAN TIDAK SESUAI"<<endl;
			cout<<"SILAHKAN MEMILIH PILIHAN YANG TELAH DISEDIAKAN DI MENU UATAMA"<<endl;
			cout<<"\n";
			goto kembali;
		    
			}
return 0;			
	}

