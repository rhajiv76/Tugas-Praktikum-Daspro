#include<iostream>
using namespace std;

int main (){
	string user_name, pass_word, username_log, password_log;
	 char ulangi;
	

	cout <<"===============program==============="<< endl;
	cout <<"Nama : Andika Ashari\n";
	cout <<"NIM : F1G121002\n";
	cout <<"====================================="<< endl;
	
	
	
	//registrasi
	regis:
	cout<<"==========Halaman registrasi=========="<<endl;
	cout<<"mengisi username : ";
	cin>>user_name;
	cout<<"mengisi password : ";
	cin>>pass_word;
	cout<<endl;
	
	//login
	login:
	cout<<"========selamat datang di halaman login========"<<endl;
	cout<<"masukan username : ";
	cin>>username_log;
	cout<<"masukan password : ";
	cin>>password_log;
	cout<<endl;
	  
	if(username_log == user_name && password_log == pass_word){
		cout<<"halo username "<<user_name;
		cout<<endl;
	}else {
		cout<<"password atau username anda salah ";
		cout<<"silahkan masukkan ulang (y/n) ";cin>>ulangi;
		cout<<endl;
	
	if(ulangi == 'y'){
		goto login;	
	}else cout<<"Terima Kasih";
		cout<<endl;

		}
}

