#include <iostream>
#include <conio.h>
using namespace std;

int main() {

string user1,user2,pass1,pass2;
char salah;

	
	cout <<"==========Halaman Registrasi=========="<<endl;
	cout <<"masukkan username dan password "<<endl;
	cout<<endl;
	cout <<"username  = ";
	cin>>user1;
	cout <<"password  = ";
	cin>>pass1;
	cout<<endl;
	cout <<"setelah masukkan username dan password klik tombol daftar "<<endl;
	cout <<"setelah akun aktif,maka anda dapat login"<<endl;
	cout<<endl;

	login:
	cout <<"==========Halaman login=========="<<endl;
	cout <<"masukkan username dan password"<<endl;
	cout <<"username  = ";
	cin>>user2;
	cout <<"password  = ";
	cin>>pass2;
	cout<<endl;
		
		
		if(user2 == user1 && pass1==pass2)
		{
		cout<<"selamat akun anda terdaftar"<<endl;
		}
		else 
		{ 
		cout<<"username dan password anda salah,silahkan lakukan login ulang"<<endl;
		cout<<"silahkan memeriksa username dan password anda kembali"<<endl;
		cout<<"silahkan login ulang? (y/n)";
		cin>>salah;
			if(salah=='y') {
				cout <<"username dan password salah"<<endl;
				goto login;
			}else{
			
			cout <<"program berhenti di jalankan"<<endl;}
	}
		
			
}

