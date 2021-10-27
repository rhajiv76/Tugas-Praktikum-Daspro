#include <iostream>
using namespace std;

int main(){
	cout<<"=== Halaman Registrasi dan Login ==="<<endl;
	string user_regis,pass_regis,user_login,pass_login;
	cout<<"Masukkan nama : ";
	getline(cin,user_regis);
	cout<<"Masukkan password : ";
	getline(cin,pass_regis);
	
	cout<<"=== Halaman Login ==="<<endl;
	cout<<"Masukkan nama : ";
	getline(cin,user_login);
	cout<<"Masukkan password : ";
	getline(cin,pass_login);
	if (user_login == user_regis && pass_login == pass_regis) {
		cout<<"Halo "<< user_login << endl;
	}
	else {
		cout<<"Username atau Password yang anda masukkan salah"<<endl;
	}
	
	return 0;
}
