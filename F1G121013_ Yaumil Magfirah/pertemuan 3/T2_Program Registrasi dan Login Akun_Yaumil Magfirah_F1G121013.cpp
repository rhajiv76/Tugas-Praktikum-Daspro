#include <iostream>
using namespace std;

int main()
{
	string username, user , password, pass, pass_1, ulang ; 

	
kembali:
	//Ketika masuk di halaman registrasi anda perlu memasukkan username dan password anda
	
	cout<<"......................SELAMAT DATANG DI HALAMAN REGISTRASI....................."<<endl;
	cout<<"Masukkan username = ";
	getline(cin,user);
	cout<<"masukkan password = ";
	getline(cin, pass);
	cout<<"masukkan ulang password anda seperti di atas = ";
	getline(cin,pass_1);
	
	if (pass == pass_1){
	
		cout<<" akun anda telah terdaftar selanjutnya masuk ke halaman login"<<endl;
	}
	else{
	
		cout<<"password anda salah masukkan kembali password anda";
		goto kembali;
	}
	
coba_kembali:	
	// kemudian masuk ke halaman login dan memasukkan username dan password yang sama dengan halaman registrasi
	
	
	cout<<"........................HALAMAN LOGIN........................."<<endl;
	cout<<" masukkan username = ";
	getline(cin,username);
	cout<<"masukkan password = ";
	getline(cin, password);
	

		if (username == user && password == pass){
		
			cout<< " Hallo, selamat datang "  <<user<<endl;
			cout<<  " akun anda telah terdaftar dengan username " <<user<<endl;	
		}
			
		else{
			cout<<"username atau password yang anda masukkan salah" <<endl;
			cout<<" apakah anda ingin login ulang? (y/n) ? "<<endl;
			cout<<" y untuk yes and n untuk no " <<endl;
			getline(cin ,ulang);	
		
				if(ulang == "y"){
				
					cout<< "ulang ke halaman login"<<endl;
					goto coba_kembali;
				}
				else 
				cout<< "keluar";
				cout<<endl;		
				
		}
	

return 0;
}




	
	
	
	
	


