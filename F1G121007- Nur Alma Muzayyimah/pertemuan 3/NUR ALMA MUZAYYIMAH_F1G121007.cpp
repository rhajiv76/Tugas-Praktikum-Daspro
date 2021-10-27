#include <iostream>
using namespace std;

int main(){
	string user,user1, password,password1,password2,isi;

	cout<<"=====SELAMAT DATANG DI HALAMAN REGISTRASI DAN HALAMAN LOGIN=====";
	
	//silahkan anda mengisi halaman registrasi terlebih dahulu dengan memasukkan username dan password anda
	regis:
	cout<<"==========================HALAMAN REGISTRASI================="<<endl;
	cout<<"Masukkan User anda  :"; 
	getline(cin,user);
	cout<<"Masukkan Password anda :"; 
	getline(cin,password);
	cout<<"Konfirmasi Password :";
	getline(cin,password2);
	if(password2 == password){
		goto login;
	}
	else{
	 	goto regis;
	cout<<endl;
}
	
	//selanjutnya isilah halaman login kemudian memasukkan username dan password anda
	login:
	cout<<"=========================HALAMAN LOGIN========================"<<endl;
	cout<<"User : "; 
	getline(cin,user1);
	cout<<"Passwor :";
	getline(cin,password1);
	if (user == user1 && password == password1){
		cout<<"hallo"<<"alma \n";
		cout<<"apakah anda ingin mengulang : ";
		getline(cin,isi);
			if(isi == "y")
		goto login;
		else 
		cout<<"anda tidak ingin mengulang ";
	
	}
 
	else{
		cout<<"salah \n";
		cout<<"apakah anda ingin mengulang : ";
		getline(cin,isi);	
		cout<<"apakah anda ingin mengulang \n:";
		if(isi == "y")
		goto login;
		else 
		cout<<"anda tidak mengulang ";
}
	
	return 0;
} 
