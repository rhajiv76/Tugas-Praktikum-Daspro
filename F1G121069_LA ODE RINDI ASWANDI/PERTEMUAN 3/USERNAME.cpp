#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	cout<<"===== Halaman Registrasi =====" << endl;
	cout<<"Username: laoderindiaswandi" << endl ;
	cout<<"Password: aswan12" << endl ;
	
	
	cout<<"====== Halaman Login ======" << endl ;
    system("color a");
    string user, pass;
 
    cout<<"Masukkan username : "; cin>>user;
    cout<<"Masukkan password : "; cin>>pass;
 
    if(user == "laoderindiaswandi" && pass == "aswan12"){
       cout<<"\n\Hallo laoderindiaswandi"<<endl;
    }
  
    else{
       cout<<"Gagal Masuk, Password Atau Username Anda Salah";
    }

 getch;
 return 0; 

}
