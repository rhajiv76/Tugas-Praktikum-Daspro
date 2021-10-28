#include<iostream>
using namespace std;

int main ()
{
	cout<<"Nama	: Desti Nur Amaliah"<< endl;
	cout<<"Nim	: F1G121046"<< endl;
	cout<<"Kelas : Genap"<< endl;
	cout<<"Jurusan : Ilmu Komputer"<< endl;
	cout<<endl;
	
	string user, pass, username, password;
	char ulang;
	
	Registrasi:
		cout<<"Halaman Registrasi Akun"<<endl;
		cout<<"Masukkan Username Anda: ";
		cin>>user;
		cout<<"Masukkan Password Anda: ";
		cin>>pass;
		cout<<endl;
	
	Login:
    	cout<<"Halaman Login"<<endl;
    	cout<<"Masukkan Username Anda : ";
		cin>>username;
    	cout<<"Masukkan Password Anda : ";
		cin>>password;
    	cout<<endl;

    	if (username == user & password == pass){
      	 	cout<<"Welcome"<<user<<" "<<endl;

   	 	}else {cout<<"Username/Password Anda Salah"<<endl;
            cout<<"Ingin Login Kembali? (Y/N)";
			cin>>ulang;
            cout<<endl;
            
        if(ulang == 'Y'){
        	goto Login;
        }else 
			cout<<"Thank You";
        	cout<<endl;

            }
}
