#include<iostream>
using namespace std;

int main (){
	string username, password, user_login, pas_login;
	char cobalagi;
	
	cout<<"+++++program sederhana+++++"<<endl;
	cout<<"nama		: ical"<<endl;
	cout<<"nim		: F1G121062"<<endl;
	cout<<"jursan	: ilmu komputer"<<endl;
	cout<<endl;
	
	//forum registrasi
	registrasi:
	cout<<"++selamat datang di halaman ini, silahkan anda melakukan registrasi"<<endl;
	cout<<"username = ";
	cin>>username;
	cout<<"password = ";
	cin>>password;
	cout<<endl;
	
	//forum login
	coba_ulang:
	cout<<"++selamat datang di halaman ini teman, silahkan login"<<endl;
	cout<<"username = ";
	cin>>user_login;
	cout<<"password = ";
	cin>>pas_login;
	cout<<endl;
	
	if(user_login == username && pas_login == password){
		cout<<"hei "<<username<<" login anda telah berhasil"<<endl;
		
	}else{cout<<"Maaf username/password anda salah" <<endl;
	cout<<"coba lagi ? (y/n)";cin>>cobalagi;
	cout<<endl;
	
	if(cobalagi == 'y'){
		goto coba_ulang;
}else cout<<"sampai jumpa di program selanjutnya";
cout<<endl;
	}

	
}
