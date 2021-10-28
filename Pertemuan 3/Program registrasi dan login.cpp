#include <iostream>
using namespace std;

int main () {
    string user, user1, pass, pass1;
    char salah;

	cout<<"===== HALAMAN REGISTRASI ====="<<endl;
	cout<<"Buat username anda : ";
	cin>>user;
	cout<<"Buat password anda : ";
	cin>>pass;
	cout<<"Username anda telah dibuat"<<endl;
	cout<<endl;
	
	cout<<"===== HALAMAN LOGIN ====="<<endl;
	cout<<"Username : ";
	cin>>user1;
	cout<<"Password : ";
	cin>>pass1;
	cout<<endl;
	
	if (user==user1 && pass==pass1) {
		cout<<"Selamat datang "<< user << endl;
	}
	else {
		cout<<"Username atau Password yang anda masukkan salah"<<endl;
	}

	return 0;
	
	}



