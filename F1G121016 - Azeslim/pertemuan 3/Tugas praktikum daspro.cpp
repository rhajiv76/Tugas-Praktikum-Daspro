#include<iostream>
using namespace std;

int main(){
    string user,pass;
    cout<<"Username : ";cin>>user;
    cout<<"Password : ";cin>>pass;
    if(user=="Destro") { //cek username apakah sama dengan input
        if(pass=="ajeskuh"){ //cek password jika sama maka berhasil masuk
            cout<<"* Berhasil Login *"<<endl;
            cout<<"\n\Hallo Destro"<<endl;
         }else{
            cout<<"Password yng anda masukan salah!"<<endl; //password salah
         }
    }else if(pass=="ajeskuh"){ //username salah
        cout<<"Username yang anda masukan salah!";
    }else{
        cout<<"username dan password anda salah!"; //username dan password salah
    }
}
