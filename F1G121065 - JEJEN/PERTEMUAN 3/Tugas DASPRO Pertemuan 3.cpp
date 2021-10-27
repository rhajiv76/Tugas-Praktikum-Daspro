#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"\t====-------------------------------------===="<<endl;
	cout<<"\t    SELAMAT DATANG DI FROM PROJECT SC JEN  "<<endl;
	cout<<"\t====-------------------------------------====\n"<<endl;
	
	system("color 3e");
	string user, user1, pass, pass1, repass, ulang;


	
	selamat_registrasi:
	cout<<"Halaman registrasi \n"<<endl;
	
	cout<<"\t Masukkan username: ";
	cin>>user;
	cout<<"\t Masukkan password: ";
	cin>>pass;
	cout<<"\t Konfirmasi ulang password anda: ";
	cin>>repass;
	if(repass==pass){
		
		cout<<"Akun anda berhasil di registrasi "<<endl;
		cout<<"Silakan masuk di halaman selanjutnya \n"<<endl;
		goto login;
	}
	else{
		
		cout<<"Konfirmasi password yang anda masukkan salah !. silakkan cek kembali konfirmasi password anda \n"<<endl;
		goto selamat_registrasi;
		
	}
	
	login:
	cout<<"Halaman login \n"<<endl;
	cout<<"\t Username: ";
	cin>>user1;
	cout<<"\t Password: ";
	cin>>pass1;
	if(user1 == user && pass1 == pass){
		cout<<"\n Hello username \n"<<endl;
	}
	else{
		cout<<"Password atau Username yang anda masukkan salah !."<<endl;
		cout<<"Apakah anda belum mempunyai akun ? (y/n)"<<endl;
		cin>>ulang;
}
	if(ulang == "y"){
		goto selamat_registrasi;
	}		
	else{
		goto selamat_datang;

	}
	 
	selamat_datang:
	cout<<"Selamat datang di from project sc jen"<<endl;
	cout<<"Terimakasih telah membuat akun di project sc jen"<<endl;

	
return 0;	
	}
	

		
	
	

