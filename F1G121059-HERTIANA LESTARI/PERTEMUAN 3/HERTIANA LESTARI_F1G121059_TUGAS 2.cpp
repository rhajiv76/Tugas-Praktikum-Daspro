#include <iostream>

using namespace std;

int main(){
	cout<<"***************************************"	<<endl;
	cout<<"Welcome to the HERTIANA LESTARI program" <<endl;
	cout<<"***************************************" <<endl;
	
	string nama, pass, username, password;
	
	//HAL.REG//
	cout<<"//==========HALAMAN REGISTRASI==========//"<<endl;
	cout<<"silahkan buat akun anda sebelum melanjutkan"<<endl;
	cout<<"Masukan username =  ";
	getline(cin,nama);
	cout<<"Masukan password =  ";
	getline(cin,pass);
	cout<<"akun anda telah dibuat, silahkan melakukan Login.";
	cout<<endl;

	//HAL.LOGIN//
	cout<<"//==========HALAMAN LOGIN==========//"<<endl;
	cout<<"username: ";
	getline(cin,username);
	cout<<"password: ";
	getline(cin,password);
	cout<<endl;
	
	if (username == nama && password == pass){
			cout << "\nHalo"<<nama<<endl;
			
		}else{
			cout<<"username/password yang anda masukan salah"<<endl;
			cout<<"silahkan login kembali"<<endl;
			
			}
			

return 0;		
}
