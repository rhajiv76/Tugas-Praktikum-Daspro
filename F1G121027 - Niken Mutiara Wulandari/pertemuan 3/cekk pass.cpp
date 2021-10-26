#include <iostream>
#include<string>

using namespace std;

int main(){
	
	string nama, pass, username, password;
	
	
//halaman registrasi
	cout<<"==========registrasi=========="<<endl;
	cout<<"silahkan buat akun anda sebelum bisa login"<<endl;
	cout<<"Username =  ";
	getline(cin,nama);
	cout<<"Password =  ";
	getline(cin,pass);
	cout<<"akun anda telah dibuat, silahkan melakukan Login.";
	cout<<endl;

//halaman login
	login:
	cout<<"==========Login=========="<<endl;
	cout<<"username: ";
	getline(cin,username);
	cout<<"password: ";
	getline(cin,password);
	cout<<endl;
	
	if (username==nama && password==pass){
			cout << "\nHalo "<<nama<<endl;
			
		}else{
			cout<<"username/password yang anda masukan salah"<<endl;
			cout<<"silahkan login kembali"<<endl;
			goto login;
			}
			

return 0;		
}

		

			






