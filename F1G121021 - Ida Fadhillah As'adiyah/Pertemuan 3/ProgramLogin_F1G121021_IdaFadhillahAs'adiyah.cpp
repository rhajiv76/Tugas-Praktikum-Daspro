#include <iostream>
using namespace std;

int main (){
char ulang;
    cout<<"xxxxx=====================================xxxxx"<<endl;
	cout<<"|  SELAMAT DATANG DI PROGRAM LOGIN FADHILLAH  |"<<endl;
	cout<<"xxxxx=====================================xxxxx"<<endl;
	
	string user1,user2,pass1,pass2;
	
	cout<<endl;
coba_lagi:	
	cout<<"============= HALAMAN REGISTRASI =============="<<endl;
	cout<<"Buatlah username dan password untuk melanjutkan"<<endl;
	cout<<"Masukkan username Anda : ";
	getline(cin,user1);
	cout<<"Masukkan Password Anda : ";
	getline(cin,pass1);
	
	cout<<endl;
	cout<<"================ HALAMAN LOGIN ================"<<endl;
	cout<<"Masukkan username dan password yang telah Anda buat"<<endl;
	cout<<"Username : ";
	getline(cin,user2);
	cout<<"Password : ";
	getline(cin,pass2);
	     if (user2 == user1 && pass2 == pass1){
	     	cout<<"Hello "<<user1<<"! login Anda berhasil!"<<endl;
		 }
		 else {
		 	cout<<"Username atau password Anda salah :("<<endl;
		 }
	cout<<endl;
	cout<<"--Menu--"<<endl;
	cout<<"Apakah Anda ingin kembali ke menu registrasi? (y/n)"<<endl;
	cin>>ulang;
	     if (ulang == 'y'){
	     	goto coba_lagi;
	} else{
		cout<<"xxx===== TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI =====xxx"<<endl;
		cout<<"____________________________________________________________"<<endl;
		cout<<"Hubungi fadhillahida@gmail.com jika Anda memiliki kendala";
	}
	
	return 0;
}
