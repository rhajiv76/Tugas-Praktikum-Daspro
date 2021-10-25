#include <iostream>

using namespace std;

int main() {
	string user, user1, pass, pass1;
	char salah;
	
	//halaman regis
	cout<<"silahkan buat akun baru"<<endl;
	cout<<"buat username anda: ";
	cin>>user;
	cout<<"buat password anda: ";
	cin>>pass;
	cout<<"akun anda sudah di buat silahkan login"<<endl;
	cout<<endl;
	
	//halaman login
	login:
	cout<<"silahkan login akun anda"<<endl;
	cout<<"masukan akun anda: ";
	cin>>user1;
	cout<<"masukan pasword anda: ";
	cin>>pass1;
	cout<<endl;
	
	if (user1==user && pass1==pass) {
		cout<<"welcome "<<user<<endl;
	}else{
		cout<<"username atau password anda salah, silahkan lakukan login ulang. "<<endl;
		cout<<"login ulang? (y/n) "; cin>>salah;
		if (salah=='y') {
			goto login;
	}else cout<<"good bye. "<<endl;
		
	}
	
	
}

