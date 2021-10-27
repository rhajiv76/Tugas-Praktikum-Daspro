#include <iostream>
using namespace std;

int main () {
	string name,word,user,pass;
	
	cout<<"----------------------";
	cout<<"Halaman Registrasi";
	cout<<"----------------------"<<endl;
	
	cout<<"Buat Username : ";
	getline (cin,user);
	
	cout<<"Buat Password : ";
	getline (cin,pass);
	
	cout<<"Akun anda telah terdaftar "<<endl;
	
	cout<<"\n\n";
	
	cout<<"----------------------";
	cout<<"Halaman Login ";
	cout<<"----------------------"<<endl;
	
	cout<<"Masukkan Username : ";
	getline (cin,name);
	
	cout<<"Masukkan Password : ";
	getline (cin,word);
	
	if (name==user && word==pass){
		cout<<"Anda berhasil login"<<endl;
		cout<<"Halo "<<user<<endl;
	}
	else 
	cout<<"Anda gagal login. Gunakan username dan password yang telah terdaftar untuk login"<<endl;
	cout<<"Username anda adalah "<<user<<endl;
	cout<<"Password anda adalah "<<pass<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
