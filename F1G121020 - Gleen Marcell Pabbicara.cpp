#include <iostream>
#include <conio.h>
using namespace std;

int main() {

string user1,user2,pass1,pass2;
char salah;

  cout<<"| Tugas Dasar Pemrograman, Oleh; |\n";
  cout<<"| Nama : Gleen Marcell Pabbicara |\n";
  cout<<"| NIM  : F1G121020               |\n";
  cout<<"\n";
  cout <<"|===========Halaman Registrasi===========|"<<endl;
  cout <<"Masukkan Username Dan Password "<<endl;
  cout<<endl;
  cout <<"Username  = ";
  cin>>user1;
  cout <<"Password  = ";
  cin>>pass1;
  cout<<endl;
  cout <<"setelah memasukkan username dan password klik tombol daftar "<<endl;
  cout <<"setelah akun aktif, maka kamu dapat login"<<endl;
  cout<<endl;

  login:
  cout <<"|==============Halaman login=============|"<<endl;
  cout <<"Masukkan Username Dan Password"<<endl;
  cout <<"Username  = ";
 cin>>user2;
  cout <<"Password  = ";
  cin>>pass2;
  cout<<endl;
    
    
    if(user2 == user1 && pass1==pass2)
    {
    cout<<"Selamat Kamu Telah Berhasil Login Ke Akun Kamu"<<endl;
    }
    else 
    { 
    cout<<"username dan password kamu salah,silahkan lakukan login ulang"<<endl;
    cout<<"Apakah kamu mau login ulang? (Y/N)";
    cin>>salah;
      if(salah=='Y') {
        goto login;
      }else{
      
      cout <<""<<endl;}
  }
    
      
}

