#include<iostream>
using namespace std;
int main(){
//	program diduga copas dan tidak mengerjakan sendiri
	cout<<"NAMA          : EKA SARTIKA"<<endl;
	cout<<"NIM           : F1G121051  "<<endl;
	cout<<"PROGRAM STUDI : ILMU KOMPUTER"<<endl;
	cout<<"MATA KULIAH   : DASAR-DASAR ALGORITMA PEMROGRAMAN"<<endl;
	
	
	/*Tugas Praktikum Daspro membuat halaman login dengan menggunakan username dan password
	-dalam program ini saya memasukkan instruksi pemilihan dengan if dan else- 
	--serta instruksi pengulangan dengan menggunakan type while--
	---pertama-tama saya akan membuat akun dulu di halaman registrasi---*/
	string user,user1,pass,pass1,pass2,isi;
	ulang:
		cout<<"---------------------SELAMAT DATANG DI HALAMAN REGISTRASI-------------------------"<<endl;
		//di halaman registrasi ini program saya akan menyuruh memasukkan username dan password yang akan saya buat
		cout<<"Masukkan Username = ";
		getline(cin,user);
		cout<<"Masukkan Password = ";
		getline(cin,pass);
		cout<<"Masukkan Ulang Password yang Anda masukkan di atas = ";
		getline(cin,pass1);
			if(pass==pass1){
				cout<<"Akun Anda Sudah Terdaftar";
			}
			else{
				cout<<"Password tidak terverifikasi dan akun Anda belum terdaftar"<<endl;
				cout<<"Periksa Kembali Password Anda"<<endl;
				goto ulang;
			}
		cout<<"\n\n";
		coba_lagi :
			cout<<"-------------------------Halaman Login-----------------------------"<<endl;
			//di halaman login ini program saya akan menyuruh memasukkan username dan password yang sudah saya buat di halaman registrasi
			cout<<"Username = ";
			getline(cin,user1);
			cout<<"Password = ";
			getline(cin,pass2);
				if (user1 == user && pass2 == pass){
					cout<<"Akun Yang Anda Masukkan Sudah Benar "<<endl;
					cout<<"Username Anda adalah "<<user<<endl;
					cout<<"Apakah Anda Ingin Mengulang (y/n)"<<endl;
					cout<<"y for YES and n for NO : ";
					getline(cin,isi);
						if(isi == "y"){
							cout<<"Kembali Ke Halaman Login"<<endl;
							goto coba_lagi;
						}
						else;
						 
			}
				else{
					cout<<"Akun Yang Anda Masukkaan Tidak Terdaftar "<<endl;
					cout<<"Apakah Anda Ingin Mengulang (y/n)";
					cout<<"y for Yes & n for No "<<endl;
					getline(cin,isi);
				}
						if(isi == "y"){
							cout<<"Kembali Kehalaman Login"<<endl;
							goto coba_lagi;
						}
						else;
				
		
		return 0;			
	 
}
