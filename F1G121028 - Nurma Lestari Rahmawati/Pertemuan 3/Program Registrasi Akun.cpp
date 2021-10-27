#include<iostream>
using namespace std;

int main(){
	string user, pass, username1, password1;
	char ulang;
	
	cout<<"------------------------------------------------------"<<endl;
	cout<<"NURMA LESTARI RAHMAWATI"<<endl;
	cout<<"F1G121028"<<endl;
	cout<<"ILMU KOMPUTER"<<endl;
	cout<<"MIPA"<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"=0=0=0=Welcome to World Program Registrasi Akun=0=0=0=" <<endl;
	cout<<" "<<endl;


	//Halaman Registrasi Akun
	Registrasi:
	cout<<">>>>>>Halaman Registrasi Akun<<<<<<"<<endl;
	cout<<">>>>>>SELAMAT DATANG DI HALAMAN REGISTRASI AKUN<<<<<<"<<endl;
	cout<<" "<<endl;
	cout<<"Silahkan Masukkan Username Anda: ";cin>>user;
	cout<<"Silahkan Masukkan Password Anda: ";cin>>pass;
	cout<<endl;
	
	//Halaman login
	login:
    cout<<">>>>>>Halaman Login<<<<<<"<<endl;
    cout<<">>>>>>SELAMAT DATANG DI HALAMAN LOGIN<<<<<<"<<endl;
    cout<<" "<<endl;
    cout<<"Silahkan Masukkan Username Anda : ";cin>>username1;
    cout<<"Silahkan Masukkan Password Anda : ";cin>>password1;
    cout<<endl;

    if (username1 == user & password1 == pass){
      	cout<<"Selamat Datang "<<user<<" "<<endl;
        cout<<"Selamat Anda Telah Lulus Registrasi Akun "<<user<<" "<<endl;


   	}else {cout<<"Username/Password yang telah dimasukkan Salah"<<endl;
        cout<<"Ingin Melakukan Login Ulang? (y/n)";cin>>ulang;
        cout<<endl;
            
    if(ulang == 'y'){
        goto login;
    }else cout<<"Sampai Bertemu Lagi di Program Selanjutnya!:>";
        cout<<endl;

            }
}
