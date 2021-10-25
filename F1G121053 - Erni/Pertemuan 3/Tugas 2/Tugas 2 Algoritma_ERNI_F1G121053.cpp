#include <iostream>

using namespace std;

int main(){
string user, user1, pass, pass1;
char salah;

//halaman regis
cout<<"silahkan buat akun baru"<<endl;
cout<<"buat username anda: ";
cin>>user;
cout<<"buat pasword anda: ";
cin>>pass;
cout<<"akun anda telah dibuat silahkan login"<<endl;
cout<<endl;

//halaman login
login:
cout<<"silahkam login ke akun anda"<<endl;
cout<<"masukan akun anda: ";
cin>>user1;
cout<<"masukan paswword anda: ";
cin >>pass1;
cout<<endl;

if(user1==user && pass1==pass){
    cout<<"selamat datang "<<user<<endl;
}else{
cout<<"pasword atau username anda salah, silahkan melakukan login ulang."<<endl;
cout<<"login ulang?(y/n)";cin>>salah;
if(salah=='y'){
    goto login;
}else cout<<"bye."<<endl;
}

}
