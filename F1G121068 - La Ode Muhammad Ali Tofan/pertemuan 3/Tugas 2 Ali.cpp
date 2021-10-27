#include<iostream>
using namespace std;

int main(){
	string userdaftar, passdaftar, usermasuk, passmasuk;			char cobakembali;

	cout <<"=============TUGAS REGIS DAN LOGIN============="<< endl;
	cout <<"Nama		:Laode Muhammad Ali Tofan\n";
	cout <<"NIM		:F1G121068\n";
	cout <<"Prodi		:Ilmu Komputer\n";
	cout <<"Fakultas	:MIPA\n";
	cout <<"================================================"<< endl;
	

	//Ini untuk daftar
	kolompendaftaran:
		cout <<"INI ADALAH HALAMAN PENDAFTARAN"				<<endl;
		cout <<"SILAHKAN MENDAFTAR TERLEBIH DAHULU"<<endl;
		cout <<" "											<<endl;
		cout <<"Masukkan User: ";cin>>userdaftar;
		cout <<"Masukkan Pass: ";cin>>passdaftar;
	cout													<<endl;

	//ini untuk masuk
	masuk:
    cout<<"INI ADALAH HALAMAN MASUK"		<<endl;
    cout<<"SILAHKAN MASUKKAN AKUN ANDA"		<<endl;																								
    cout <<" "								<<endl;
	cout<<"Masukkan User: ";cin>>usermasuk;
    cout<<"Masukkan Pass: ";cin>>passmasuk;
    cout									<<endl;

    			if (usermasuk == userdaftar & passmasuk == passdaftar){
      	cout<<"Halo "<<userdaftar<<" Jombloo, Welcome Di Program Kami"				<<endl;
        cout<<"Selamat, "<<userdaftar<<" Kamu Berhasil, Semoga tidak jomblo lagi"	<<endl;


   	}			else {cout<<"Sorry , silahkan periksa kembali user/pass kamu"  <<endl;
        cout<<"apakah ingin masuk ulang? (y/n)";cin>>cobakembali;
    															cout<<endl;

    			if(cobakembali == 'y'){
        goto masuk;
    }			else cout<<"Sampai jumpa ";cout<<endl;

            }
}
