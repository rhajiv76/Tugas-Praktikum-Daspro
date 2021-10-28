#include<iostream>
using namespace std;
int main (){
	string user,user1,sandi,sandi1;
	//Program halaman regis dan login febri
		cout<<"------------ Halaman Registrasi ------------ \n";
			cout<<"\n\n"; 
			cout<<"Username = ";
			getline(cin,user);
			cout<<"Password = ";
			getline(cin,sandi);
			cout<<"\n\n";
	Login:
		cout<<"------------- Halaman Login ---------------- \n";
			cout<<"\n\n";
			cout<<"Username Yang diregis = ";
			getline(cin,user1);
			cout<<"Password Yang diregis = ";
			getline(cin,sandi1);
			if (user1 == user && sandi1 == sandi){
				cout<<"Akun Yang Anda Input Sudah Benar \n";
				system("pause");
				//system akan pause jika saya menekan tombol
				cout<<"\n\n";
				system ("cls");
				//system akan membersihkan semua layar di atas
				cout<<"Hallo "<<user1<<endl;
			}
			else {
				cout<<"Akun yang dimasukkan salah \n";
				cout<<"Silahkan Kembali Ke halaman login \n";
				goto Login;
				//perintah goto kembali ke halaman login
			}
}
