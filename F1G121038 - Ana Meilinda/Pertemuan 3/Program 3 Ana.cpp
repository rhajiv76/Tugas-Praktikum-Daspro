#include<iostream>
using namespace std;

int main()
{
	cout<<"Nama	: Ana Meilinda"<<endl;
	cout<<"NIM	: F1G121038"<<endl;
	cout<<"Kelas	: Genap"<<endl;
	cout<<"Jurusan	: Ilmu Komputer"<<endl;
	cout<<endl;
	
	string Username, Username1, Password, Password1;
	
	//Halaman Registrasi
	Registrasi:
	cout<<"Halaman Registrasi"<<endl;
	cout<<"Masukkan Username : ";
	getline(cin,Username);
	cout<<"Masukkan Password : ";
	getline(cin,Password);
	cout<<"\n\n";

	//Halaman Login
	Login:
	cout<<"Halaman Login"<<endl;
	cout<<"Username : ";
	getline(cin,Username1);
	cout<<"Password : ";
	getline(cin,Password1);
	
	if (Username1 == Username && Password1 == Password)
	{
		cout<<"Anda Telah Berhasil Login"<<endl;
		cout<<"\n\n";
		goto welcome;
	}
		
	else
	
		cout<<"Username/Password Anda Salah, Silahkan Ulangi Lagi!"<<endl;
		cout<<"\n\n";
		goto Login;
				
	welcome:

	cout<<"Selamat Datang "<<Username;
	
return 0;	
	
}
