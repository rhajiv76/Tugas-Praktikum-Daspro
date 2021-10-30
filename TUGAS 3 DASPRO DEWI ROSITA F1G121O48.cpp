#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	string user, user1, pass, pass1, repass, kembali;
	int pilihan;

	menu:
	cout<<"\t Menu "<<endl;
	cout<<"Registrasi (1)"<<endl;
	cout<<"Login (2)"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"Masukan Pilihan Anda: "; 
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
			cout<<"Tulis Ulang Pilihan Anda"<<endl;
			goto menu;
	}

registrasi:
	cout<<"===== HALAMAN REGISTRASI =====" << endl ;
	cout<<"Silahkan registrasi akun anda terlebih dahulu"<<endl;
	cout<<"Tuliskan Username Anda: ";
	cin>>user;
	cout<<"Tuliskan Password Anda: ";
	cin>>pass;
	cout<<"Konfirmasi Ulang Password Anda: ";
	cin>>repass;
		if(repass==pass){
			cout<<"Akun Anda Berhasil Diregistrasi"<<endl<<endl;
			goto login;
			cout<<endl<<endl;
		}
		else 
			cout<<"Konfirmasi Password Anda Salah !. Silahkan Cek Kembali !"<<endl;
			goto registrasi;
			return 1;

login:
	cout<<"===== HALAMAN LOGIN =====" << endl;
	cout<<"Silahkan masukkan akun yang telah dibuat sebelumnya" <<endl ;
	cout<<"\n LOGIN"<<endl;
	cout<<"Masukan Username: ";
	cin>>user1;
	cout<<"Masukan Password: ";
	cin>>pass1;
	cout<<endl;
	if ((user1==user)&& (pass1==pass)){
		cout<<"Halo "<<user1;
		system("cls");
	
	}
	
	else 
		cout<<"hello " <<user <<" anda gagal "<<endl;
	 goto login;






		return 0;

}
