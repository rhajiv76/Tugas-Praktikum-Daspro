#include<iostream>
using namespace std;
int main ()
{
	
	string user,user1,pass,pass1;
	
	cout<<"====================Halaman Registrasi==================== "<<endl;
	cout<<"masukkan username 	: ";
	getline(cin,user);
	cout<<"masukkan password 	: ";
	getline(cin,pass);
	cout<<"\n\n";

	login:
	cout<<"=====================Halaman Login========================="<<endl;
	cout<<"username 	: ";
	getline(cin,user1);
	cout<<"password 	: ";
	getline(cin,pass1);
	if(user1 == user && pass1 == pass)
	
	{
		cout<<"Akun Anda sudah benar "<<endl;
		cout<<"\n\n";
		goto welcome;
	
	}
	else
	
		cout<<"Username atau Password salah, coba lagi!! "<<endl;
		cout<<"\n\n";
		goto login;
				
	welcome :

	cout<<"Hallo "<<user;
	
	
}
