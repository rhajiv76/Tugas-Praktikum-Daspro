#include <iostream>
using namespace std;

int main(){
string nama, pass, username, password;
char ulang;

//biodata
cout<<"Tugas praktikum daspro 2"<<endl;
cout<<"Nama          : Elma Sulistian"<<endl;
cout<<"NIM           : F1G121052"<<endl;
cout<<"Fakultas      : FMIPA"<<endl;
cout<<"Jurusan       : Ilmu komputer"<<endl;
cout<<"Asisten dosen : Muhamad alief risky ramadhan"<<endl;
cout<<endl;

//halaman registrasi
cout<<"================registrasi================"<<endl;
cout<<"silahkan buat akun anda sebelum bisa login"<<endl;
cout<<"buat username anda: ";
getline(cin,nama);
cout<<"buat password anda: ";
getline(cin,pass);
cout<<endl;
cout<<"akun anda telah dibuat, silahkan melakukan login.";
cout<<endl;


//halaman login
login:
cout<<endl;
cout<<"=========login========="<<endl;
cout<<"masukan username anda: ";
getline(cin,username);
cout<<"masukan password anda: ";
getline(cin,password);
cout<<endl;

if(username==nama && password==pass){
    cout<<"welcome "<<nama<<endl;
}else{
cout<<"password/username yang anda masukan salah"<<endl;
cout<<"silahkan masukan ulang username/password anda? (y/n)"<<endl;
cout<<"tekan (y) untuk melakukan login ulang, tekan (n) jika ingin keluar: ";cin>>ulang;
cout<<endl;
    if(ulang=='y'){
        goto login;
    }else cout<<"Nyeh nda asik, bye."<<endl;
}
return 0;
}
