#include <iostream>

using namespace std;

int main(){
string user, pass, username, password;
char ulang;

cout<<"Nama         = Lily Firdaus Gusrin"<<endl;
cout<<"NIM          = F1G121023"<<endl;
cout<<"Jurusan      = Ilmu Komputer"<<endl;
cout<<"Fakultas     = FMIPA"<<endl;
cout<<" "<<endl;

//main program

//Laman regis
cout<<"=========Halaman registrasi========="<<endl;
cout<<"buat username anda: ";cin>>user;
cout<<"buat password anda: ";cin>>pass;
cout<<endl;

//Laman login
login:
    cout<<"===========Halaman Login============"<<endl;
    cout<<"Masukkan username anda : ";cin>>username;
    cout<<"Masukkan password anda : ";cin>>password;
    cout<<"===================================="<<endl;
    cout<<endl;

    if (username == user && password == pass){
        cout<<"Welcome "<<user<<" :)"<<endl;

    }else {cout<<"Username/Password yang anda masukkan salah"<<endl;
            cout<<"Login ulang? (y/n)";cin>>ulang;
            cout<<endl;
            if(ulang == 'y'){
                goto login;
                }else cout<<"Bye:>";
                cout<<endl;

            }
}

