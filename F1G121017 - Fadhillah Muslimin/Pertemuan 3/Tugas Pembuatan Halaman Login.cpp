#include<iostream>

using namespace std;

int main (){
  string name,name1,pass,pass1,verpass,back;
  selamat_datang :
  cout<< "---------------- Welcome ---------------" <<endl;
  cout<<"  Silahkan Registrasi Dengan Mendaftarkan Username dan Password Anda  "<<endl;
  cout<<"Username : ";
  cin>>name;
  cout<<"Password : ";
  cin>>pass;
  cout<<"Verifikasi Password : ";
  cin>>verpass;
    if(verpass==pass){
      cout<<"Akun Anda Telah Terdaftar"<<endl;
      cout<<"Silahkan Masuk Ke Halaman Login"<<endl;
      goto login;
    }else{
      cout<<"Password Yang Anda Masukkan Salah"<<endl;
      cout<<"Mohon Periksa Kembali Password Anda"<<endl;
      goto selamat_datang;
    }

  login :
  cout<<"======== Halaman Login ========"<<endl;
  cout<<"Silahkan Masukkan Username dan Password"<<endl;
  cout<<"\n LOGIN"<<endl;
  cout<<"Username : ";
  cin>>name1;
  cout<<"Password : ";
  cin>>pass1;
  cout<<endl;
    if (name1 == name && pass1 == pass){
      cout<< "Halo "<<name1<<endl;
    }else{
      cout<<"Password Atau Username Yang Anda Masukkan Salah!"<<endl;
      cout<<"Anda Belum Mempunyai Akun? (y/n)"<<endl;
  cin>>back;
  if (back== "y"){
    goto selamat_datang;
  }else{
    goto welcome;
  }
    }
  
  welcome :
  cout<<"Selamat Datang "<<name1<<"!"<<endl;
  cout<<"Semoga Harimu Menyenangkan ^_^" <<endl;
return 0;
}
