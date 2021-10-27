#include<iostream>
using namespace std;

int main(){
	//memasukan username dan password
	string username, username1, password, password1;
	

	cout<<"SELAMAT DATANG DI HALAMAN REGISTRASI "<<endl;
	cout<<"masukan username = ";
	getline(cin,username);
	cout<<"masukan password = ";
	getline(cin,password);
	cout<<"masukan kembali password =";
	getline(cin,password);
	cout<<"\n\n";
	
	
	//masuk ke halaman login
  kembali:
	cout<<"HALAMAN LOGIN "<<endl;
	cout<<"masukan username = ";
	getline(cin,username1);
	cout<<"masukan password = ";
	getline(cin,password1);
    if(username1 == username && password1 == password){
   cout<<"Username Yang Anda Masukkan Sudah Benar "<<endl;
    cout<<"password yang anda masukan sudah benar "<<endl;
    cout<<"\n\n";
    goto welcome;
    }
else 
 cout<<"username yang anda masukan salah "<<endl;
    cout<<"password yang anda masukan salah "<<endl;
    cout<<"Silahkan Login Ulang"<<endl;
    cout<<"\n\n\n";
    goto kembali;

    
    welcome :
	cout<<"Username Anda adalah "<<username<<endl;
	cout<<"Hallo "<<username;
}
