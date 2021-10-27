#include <iostream>
using namespace std;

int main(){
system ("title MUH. ISTIKMAL HUSAIN");
cout<< "Nama\t:"<<"Muh. Istikmal Husain\n";
cout<< "Nim\t:"<<"F1G121072\n";
cout<< "Jurusan\t:"<<"Ilmu komputer\n";
cout<< "\n";


string Username1, Username, Password1, Password;
	char ulang;

Registrasi :
	cout<< "=========Halaman Registrasi======="<<endl;
	cout<<"Masukkan username\t:";
	cin>> Username1;
	cout<<"Masukkan password\t:";
	cin>>Password1;
	cout<< "\n";
	
	
Login :
	cout<< "=========Halaman Login========"<<endl;
	cout<<"Masukkan username\t:";
	cin>> Username;
	cout<<"Masukkan password\t:";
	cin>> Password;
	
	
	if (Username == (Username1) && Password == (Password1)){ cout<<"\n";
		cout<<"Hallo "<<Username<<endl;}
		
	else{
		cout<<"Terjadi Kesalahan dalam memasukkan Username atau Password\n";
		cout<<"Apakah anda ingin mencoba Login ulang? <y/n> = ";
		cin>> ulang;
		cout<<"--------------------------------\n";
		
		
		if (ulang == 'y'){
			goto Login;
			
		}else {
			
			cout<<"Trimakasih telah memilih program kami";
			}	
	}
	
	
	return 0;
}
