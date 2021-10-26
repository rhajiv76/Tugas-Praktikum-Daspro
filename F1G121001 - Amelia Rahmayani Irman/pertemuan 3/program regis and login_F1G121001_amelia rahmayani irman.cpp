#include<iostream>
using namespace std;

int main ()
{
	cout<<"---Welcome To The Registration And Login Program By lia---"<<endl;
	cout<<endl;
	
	cout<<"NAMA: Amelia Rahmayani irman"<<endl;
	cout<<"NIM: F1G121001"<<endl;
	//tugas ke2 ini saya akan membuat program registrasi dan login
	cout<<endl;
	
	string username, user , password, pass, pass1, ulang, a; 
	kembali:
	cout<<"=====HALAMAN REGISTRASI====="<<endl;
	//silahkan masuk ke halaman registrasi, masukan unsername dan password anda
	
	cout<<"Silahkan Buat Akun Anda"<<endl;
	cout<<"Masukkan Username Anda = ";
	getline(cin,username);
	cout<<"Masukkan Password Anda = ";
	getline(cin,password);
	cout<<"Konfirmasi Ulang Password Anda = ";
	getline(cin,pass1);
		
		if(password==pass1){
			cout<<"AKUN ANDA TELAH BERHASIL TERDAFTAR"<<endl;
			//*jika konfirmasi password anda masukan benar maka anda telah berhasil terdaftar
		}
		else{
			cout<<"MAAF KONFIRMASI PASSWORD ANDA SALAH"<<endl;
			//*jika konfirmasi password anda masukan salah maka anda akan disuru memvertifikasi ulang akun anda
			goto kembali;	
		}
		
	vertifikasi_kembali:
		cout<<endl;
		
		cout<<"=====SELAMAT DATANG DI HALAMAN LOGIN====="<<endl;
		cout<<"Masukan Unsername Dan Password Sesuai Dengan Yang Ada Pada Halaman registrasi"<<endl;
		cout<<"Masukan Unsername Anda = ";
		getline(cin,user);
		cout<<"Masukan Password Anda = ";
		getline(cin,pass);
		
		if (user==username&&pass==password){
			cout<<endl;
			cout<<"Halo " <<username <<endl;
			cout<<"SELAMAT AKUN ANDA TELAH TERDAFTAR<3"<<endl;
		}
		else{
			cout<<"Maaf unsername atau password yang anda masukan salah" <<endl;
			cout<<"Masukan Kembali Unsername dan Password anda" <<endl; 
			cout<<"ketik (y) jika YA, ketik (n) jika TIDAK dan ingin Keluar"<<endl;
			cin>>a;	
			if(a=="y"){
			goto vertifikasi_kembali;
			}
			else
			cout<<"Thank You For Using My Program, See You In The Next Programs";
		}
		
	}
			

