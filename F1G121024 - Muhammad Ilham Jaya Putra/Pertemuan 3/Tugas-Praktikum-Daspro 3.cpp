#include<iostream>
using namespace std;

// Tugas Program Registrasi Dan Login
// F1G121024_Muhammad Ilham Jaya Putra

int main(){
	string name, name2, password, password2;
	// Selamat datang di halaman ini :)
	// Silahkan masukkan username dan password anda :)
		
	cout<<"------------Halaman Registrasi--------------"<<endl;
	cout<<"------------Masukkan Username Anda---------- =";
	getline(cin,name);
	cout<<"------------Masukkan Password Anda---------- =";
	getline(cin,password);
	
	silahkan_masukkan_ulang:
		cout<<"------------Halaman Login--------------"<<endl;
		cout<<"------------Username------------- =";
		getline(cin,name2);
		cout<<"------------Password----------- =";
		getline(cin,password2);


	if(name2 == name && password2 == password){
	
	
	// Harap masukkan username dan password yang benar
		
		cout<<"akun yang anda masukkan sudah benar"<<endl;
		cout<<"\n\n";

}
		else {
		
		
			cout<<"akun yang anda masukkan salah"<<endl;
			cout<<"\n\n";

			goto silahkan_masukkan_ulang;
}
		// Selamat telah berhasil melakukan proses registrasi dan login	
		cout<<"username anda adalah "<<name<<endl;
		cout<<"Hallo "<<name;

}
		
	
	
	
	
	
	
	
	



