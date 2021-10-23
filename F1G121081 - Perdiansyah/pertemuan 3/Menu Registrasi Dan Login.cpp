#include<iostream>
#include<istream>

using namespace std;

int main(){
	string user, user1, pass, pass1, repass, kembali;
	int pilihan;
	
	menu:
	cout<<"\t \t Menu "<<endl;
	cout<<"Registrasi [1]"<<endl;
	cout<<"Login [2]"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"Input Pilihan Anda: "; 
	cin>>pilihan;
	cout<<endl;
	switch(pilihan){
		case 1:
			goto registrasi;
			break;
			system("cls");
			
		case 2:
			goto login;
			break;
			system("cls");
			
		default:
			cout<<"Tulis Ulang PIlihanmu"<<endl;
			goto menu;
	}
	
registrasi:
	cout<<"Silahkan REGISTRASI Akun Anda"<<endl;
	cout<<"Tuliskan Username Anda: ";
	cin>>user;
	cout<<"Tuliskan Password Anda: ";
	cin>>pass;
	cout<<"Konfirmasi Password Anda: ";
	cin>>repass;
		if(repass==pass){
			cout<<"Selamat Akun Anda Sudah Diregistrasi"<<endl<<endl;
			goto login;
			cout<<endl<<endl;
		}
		else 
			cout<<"Konfirmasi Password Anda Salah !. Silahkan Cek Kembali !"<<endl;
			goto registrasi;
			return 1;
			
			
login:
	cout<<"\t LOGIN"<<endl;
	cout<<"Masukan Username: ";
	cin>>user1;
	cout<<"Masukan Password: ";
	cin>>pass1;
	cout<<endl;
	if ((user1==user)&& (pass1==pass)){
		cout<<"Halo "<<user1;
		system("cls");
		goto welcome;
	}
	else if ((pass1!=pass)&&(user1!=user)){
		cout<<"Maaf Username atau Password Anda Salah."<<endl;
		cout<<"Silahkan Cek Ulang Username atau Password Anda"<<endl;
		cout<<"Jika Akun Anda Belum Teregistrasi. Silahkan Registrasi Sekarang Dengan Menekan Nomor Satu di Menu Untuk Registrasi"<<endl;
		goto menu;
	}
	else 
		cout<<"Login Gagal. Pastikan Username atau Password Yang Anda Masukan Sudah Benar"<<endl;
		goto login;
	
	
	
welcome:
	cout<<"Halo "<<user1;
	cout<<endl<<endl;
	cout<<"Kembali Ke Menu ? y/n: ";
	cin>>kembali;
	if (kembali=="y"){
		cout<<"Kembali Ke Menu !";
		cout<<endl<<endl;
		goto menu;
	}
	else if(kembali=="n"){
		cout<<"dibatalkan !"<<endl;
		cout<<endl<<endl;
		goto welcome;
	}
	else
		goto welcome;	
		
		
		return 0;
		
}

