#include <iostream>
using namespace std;

int main (){

	string user1,user2,pass1,pass2;
cout << "\=====MOHON LAKUKAN REGISTRASI=====\n\n";
	cout<<endl;	
	cout<<"======= HALAMAN REGISTRASI =======\n"<<endl;
	cout<<"Buatlah username dan password"<<endl;
	cout<<"Masukkan username Anda : ";
	getline(cin,user1);
	cout<<"Masukkan Password Anda : ";
	getline(cin,pass1);

	cout<<endl;
	cout<<"========== HALAMAN LOGIN ==========\n"<<endl;
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


	return 0;
}
