#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	
	string username;
	string password, verifikasipassword;
	string username1;
	string password1;

//PEMBUKAAN	
cout<< "NAMA: FADLI LA ODE MARDIN" <<endl;
cout<< "NIM: F1G121054" <<endl;
cout<< "TUGAS 3 DASPRO " <<endl;
cout<< "MEMBUAT PROGRAM HALAMAN REGISTRASI DAN HALAMAN LOGIN" <<endl;
cout<< "BERIKUT ADALAH PROGRAMNYA" <<endl;
cout<< "TERIMAKASIH" <<endl;

regist:
	cout<< "\t------------------\n";
	cout<< "\tHALAMAN REGISTRASI\n";
	cout<< "\t------------------\n";
// input user and password
	cout<< " Masukan username: "; cin>>username;
	cout<< " Masukan password: "; cin>>password;


		
		
	cout<<endl;
	login:
	// HALAMAN LOGIN
	cout<< "\t-------------\n";
	cout<< "\tHALAMAN LOGIN\n";
	cout<< "\t-------------\n";
	cout<<endl;
	cout<<" Silakan masukan username:"; cin>>username1;
	cout<<" Silkan masukan password:" ; cin>>password1;
	// APAKAH PASSWORD DAN USERNAME BENAR AKAN DI UJI DI SINI
	if(username1==username && password1==password){
		cout<<endl;
		cout<< " LOGIN BERHASIL " <<endl;
		cout<< " hello " <<username <<" anda berhasil "<<endl;
	
	}
	// JIKA USER NAME DAN PASSWORD SALAH
	else{
		cout<< " hello " <<username << " anda gagal " <<endl;
		cout<< " user dan password salah ";
	}
	return 0;
	
	
	
}
