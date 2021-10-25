#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout<<"==========Halaman Registrasi=========="<<endl;
	cout<<"Nama : Fina Mardianti"<<endl;
	cout<<"Tanggal Lahir : 28 Maret 2003"<<endl;
	cout<<"No.HP : 082240228663 "<<endl;
	cout<<"==========Halaman Login=========="<<endl;
	
	system ("color 9");
	string user, pass;
	
	cout<<"Masukkan Username : ";
	cin>>user;
	cout<<"Masukkan Password : ";
	cin>>pass;
	
	if (user == "finamrdnti" && pass == "280303"){
		cout<<"Hallo Fina Mardianti"<<endl;
	}
	
	else{
		cout<<"Failed, your Username or Password is Wrong";
	}
	
	getch;
	return 0;
}
