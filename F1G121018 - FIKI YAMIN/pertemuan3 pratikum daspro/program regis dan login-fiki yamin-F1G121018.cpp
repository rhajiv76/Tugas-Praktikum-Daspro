#include<iostream>
using namespace std;

int main(){
	string user_regis, pass_regis, username_login, password_login;			char retry;

	cout <<"TUGAS PRATIKUM DASPRO"<< endl;
	cout <<"Nama		:FIKI YAMIN\n";
	cout <<"NIM		:F1G121018\n";



	//DAFTAR
	daftar:
		cout <<"FORM REGISTRASI"<<endl;
		cout <<"BUAT AKUN ANDA TERLEBIH DAHULU"<<endl;
		cout <<"Masukkan Username Anda: ";
			cin>>user_regis;
		cout <<"Masukkan Password Anda: ";
			cin>>pass_regis;
	cout<<endl;

	//MASUK
	login:
    cout<<"FORM LOGIN"			<<endl;
    cout<<"SILAHKAN AKUN YANG ANDA BUAT TADI"			<<endl;																								
	cout<<"Masukkan Username Anda : ";
		cin>>username_login;
    cout<<"Masukkan Password Anda : ";
		cin>>password_login;
    cout<<endl;

    if (username_login == user_regis & password_login == pass_regis){
      	cout<<"WELCOME "<<user_regis<<" YOUR ACOUNT HAS BEEN SUCCESSFULLY...."												<<endl;
      


   	}else {cout<<"FAILED!! CHECK YOUR PASWORD/USERNAME AGAIN..."										<<endl;
        cout<<"DO YOU WANT TO RE-LOG? (y/n)";cin>>retry;
        cout<<endl;

    if(retry == 'y'){
        goto login;
    }else cout<<"THANKS FOR BEING HERE.... ";
        cout																								<<endl;

            }
}

