#include<iostream>
using namespace std;

int main(){
	string user_regis, pass_regis, username_login, password_login;			char retry;

	cout <<"++++++++++++++++PROGRAM LOGIN SEDERHANA++++++++++++++++"<< endl;
	cout <<"Nama		:MUH. HARJUN SALEHUDDIN\n";
	cout <<"NIM		:F1G121074\n";
	cout <<"Prodi		:ILMU KOMPUTER\n";
	cout <<"Fakultas	:MIPA\n";
	cout <<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
	

	//FORM REGISTRASI
	RegisPendaftaran:
		cout <<"INI ADALAH HALAMAN REGISTRASI"<<endl;
		cout <<"SILAHKAN MEAKUKAN REGISTRASI TERLEBIH DAHULU"<<endl;
		cout <<" "<<endl;
		cout <<"Masukkan Username Anda: ";
			cin>>user_regis;
		cout <<"Masukkan Password Anda: ";
			cin>>pass_regis;
	cout<<endl;

	//FORM LOGIN
	login:
    cout<<"INI ADALAH HALAMAN LOGIN"			<<endl;
    cout<<"SILAHKAN MASUKKAN AKUN ANDA"			<<endl;																								
    cout <<" "									<<endl;
	cout<<"Masukkan Username Anda : ";
		cin>>username_login;
    cout<<"Masukkan Password Anda : ";
		cin>>password_login;
    cout<<endl;

    if (username_login == user_regis & password_login == pass_regis){
      	cout<<"Selamat Datang "<<user_regis<<" Di Program Kami"												<<endl;
        cout<<"Selamat, "<<user_regis<<" Login Anda Berhasil, Semoga tetap sehat dan bebas dari covid 19"	<<endl;


   	}else {cout<<"Mohon maaf silahkan periksa kembali user/pass anda"										<<endl;
        cout<<"apakah ingin masuk ulang? (y/n)";cin>>retry;
        cout<<endl;

    if(retry == 'y'){
        goto login;
    }else cout<<"Terimakasih telah menggunakan program kami ";
        cout																								<<endl;

            }
}
