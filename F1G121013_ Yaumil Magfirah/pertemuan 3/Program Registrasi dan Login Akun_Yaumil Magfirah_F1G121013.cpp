#include <iostream>
using namespace std;

int main()
{
	string user , pass ;
	
	//Ketika masuk di halaman registrasi anda perlu memasukkan username dan password
	
	cout<<"......................SELAMAT DATANG DI HALAMAN REGISTRASI....................."<<endl;
	cout<<"Masukkan username = ";
	getline(cin,user);
	cout<<"masukkan password = ";
	getline(cin, pass);
	
	// kemudian masuk ke halaman login dan memasukkan username dan password yang sama di halaman registrasi
	cout<<".................................HALAMAN LOGIN................................."<<endl;
	cout<<" masukkan username = ";
	getline(cin,user);
	cout<<"masukkan password = ";
	getline(cin, pass);

	
	
	if(user == "Yaumil Magfirah" && pass == "Yumi"){
		
		cout<<"Hallo Yumi" <<endl;
	}
	
	else{
	
		cout<<"password atau username anda salah";
	}

return 0;

}


	
	
	
	
	


