#include<iostream>
using namespace std;
int main() 
{
string username,password,nama1,pass1;
cout<<"Halaman Regis"<< endl;
cout<<"username : ";
getline (cin,username);	
cout<<"password : ";	
getline (cin,password);
cout<<endl;
ulang:
cout<<"Halaman Login"<< endl;
cout<<"username : ";
getline (cin,nama1);
cout<<"password : ";
getline (cin,pass1);
if(nama1==username && pass1==password) {
	cout<<"Akun Anda sudah benar"<<endl;
	system( "cls");
	goto welcome;
}
else{
	cout<<"Akun Anda Salah"<< endl;
	goto ulang;
}
welcome :
cout<<"Hallo "<<nama1;
}

