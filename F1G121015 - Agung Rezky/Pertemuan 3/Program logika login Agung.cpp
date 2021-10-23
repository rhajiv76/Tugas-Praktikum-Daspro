#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	cout<<"===== Halaman Registrasi =====" << endl;
	cout<<"Username: Agungbeh" << endl ;
	cout<<"Password: abehkun" << endl ;
	
	
	cout<<"====== Halaman Login ======" << endl ;
    system("color a");
    string user, pass;
 
    cout<<"Masukkan USERNAME : "; cin>>user;
    cout<<"Masukkan PASSWORD : "; cin>>pass;
 
    if(user == "Agungbeh" && pass == "abehkun"){
       cout<<"\n\Hallo Agungbeh"<<endl;
    }
  
    else{
       cout<<"Gagal Masuk, Password Atau Username Anda Salah";
    }

 getch;
 return 0; 

}
