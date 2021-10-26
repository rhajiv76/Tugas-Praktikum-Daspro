#include <iostream>
#include <string>

using namespace std;

int main(){
	string passA;
	string userA;
	string passB;
	string userB;
	
	
	cout<<" =======Melakukan Registrasi====== "<<endl;
	cout<<" ====Halaman Registrasi==== "<<endl;
	cout<<"Masukkan Username dan Password :"<<endl;
	cout<<"Username :";
	getline (cin,userA);
	cout<<"Password :";
	getline (cin,passA);
	
	cout<<endl;
	cout<<" ====Halaman Registrasi==== "<<endl;
	cout<<"Masukkan Username dan Password sebelumnya"<<endl;
	cout<<"Username :";
	getline (cin,userB);
	cout<<"Password :";
	getline(cin,passB);
        if(userB == userA && passB == passA) {
	  	cout<< "| Login Berhasil |";
	  	cout<<"Hello "<<userA<<"! Login Berhasil "<<endl;
	    }
	
	    else{
	  	cout<< "Username / Passoword Salah!";
	  	
	    }
	
}

