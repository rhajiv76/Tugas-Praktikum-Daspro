#include <iostream>
using namespace std;

int main()

{
	string user1,user2,pass1,pass2,isi;
	cout<<".....Halaman Registrasi....."<<endl;
	cout<<"Masukkan username =";
	getline(cin,user1);
	cout<<"Masukkan password =";
	getline(cin,pass1);
	cout<<"\n\n";
	ulang:
		
		cout<<".....Halaman Login....."<<endl;
		cout<<"Username =";
		getline(cin,user2);
		cout<<"Password =";
		getline(cin,pass2);
		
	if(user1 == user2 && pass1 == pass2){
		cout<<".....Halo Username.....";
	}
	
	else{
		cout<<"Username || password salah"<<endl;
		goto ulang;
	}
	
	cout<<"Halaman LOgin"<<endl;
	//masukkan kembali username dan password anda yang benar.
	cout<<"Username =";
	getline(cin,user2);
	cout<<"Password =";
	getline(cin,pass2);
	mencoba_kembali:
	
	if(user2==user1 && pass2==pass1){
		cout<<"Akun anda benar"<<endl;
		cout<<"Apakah anda ingin mengulang (y/n)"<<endl;
		cout<<"y for Yes and n for NO:";
		getline(cin,isi);
			if(isi =="y"){
				cout<<"Kembali ke halaman login"<<endl;
				goto  mencoba_kembali;
			}
			else;
		
	}
	
	else{
		cout<<"Username || password salah"<<endl;
		cout<<"Apakah ngin mengulang (y/n)";
		cout<<"y or Yes & n for No"<<endl;
		getline(cin,isi);
	}
	
	if(isi=="y"){
		cout<<"Kembali ke Halaman Login"<<endl;
		goto mencoba_kembali;
	}
	else;
	
	return 0;
	

		
}
