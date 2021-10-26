#include<iostream>
using namespace std;

int main (){
	string username, password, user_log, pass_log;
	char confirmation_password[100];
	char ulang;
	
	cout<<"~~~~program~~~~" 							<<endl;
	cout<<"nama    : majid yunus"						<<endl;
	cout<<"nim     : F1G121070"							<<endl;
	cout<<"jurusan : ilmu komputer"						<<endl;
	cout<<"kelas   : genap"								<<endl;
	cout<<"_____________________________"				<<endl;
	
	//forum registrasi
	registrasi:
	cout<<"<<<<selamat datang di halaman registrasi>>>>"<<endl;
	cout<<"username = ";
	cin>>username;
	cout<<"password = ";
	cin>>password;
	cout<<"confirmation_password = ";
	cin>>confirmation_password;
	cout												<<endl;
	
    //forum login
	login:
	cout<<"====halaman login===="						<<endl;
	cout<<"username : ";
	cin>>user_log;
	cout<<"password :";
	cin>>pass_log;
	cout												<<endl;
	
	if(user_log == username && pass_log == password){
		cout<<"hallo "<<username<<",login anda telah selesai selanjutnya silakan masuk di beranda";
	}else {
		cout<<" password atau username anda salah "   										<<endl;
		cout<<" silahkan masukan ulang (y/n) ";cin>>ulang;
		cout																				<<endl;

	if(ulang == 'y'){
		goto login;
	}else cout<<"terikasi telah menggunakan proggram kami";
    cout																					<<endl;
    
		
}



}
