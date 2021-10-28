#include<iostream>
using namespace std;
int main() 
{
string username,password,nama1,pass1;

cout<<"Selamat datang di Halaman Registrasi"<< endl;
cout<<"Silahkan Lakukan Registrasi"<< endl;
cout<<"Masukkan username : ";

getline (cin,username);	
cout<<"Masukkan password : ";	
getline (cin,password);
cout<<endl;


ulang:
	
cout<<"Selamat datang di Halaman Login"<< endl;
cout<<"Silahkan Lakukan tahap Login"<< endl;
cout<<"Masukkan username : ";
getline (cin,nama1);
cout<<"Masukkan password : ";
getline (cin,pass1);
if(nama1==username && pass1==password) {
	cout<<"Akun Anda sudah benar"<<endl;
	system( "cls");
	goto welcome;
}
else{
	cout<<"Informasi yang Anda Masukkan Salah"<< endl;
	goto ulang;
}
welcome :
cout<<"Welcome Home" <<nama1;




return 0;

}
