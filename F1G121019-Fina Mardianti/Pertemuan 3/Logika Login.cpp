#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	system ("color 9");
	string user, pass;
	
	cout<<"==========Halaman Registrasi=========="<<endl;
	cout<<"Masukkan Username : ";
	cin>>user;
	cout<<"Masukkan Password : ";
	cin>>pass;
	cout<<"\n\n";
	
	cout<<"==========Halaman Login=========="<<endl;
	cout<<"Username : ";
	cin>>user;
	cout<<"Password : ";
	cin>>pass;
	cout<<"\n\n";
	
	if (user == "finamrdnti" && pass == "280303"){
		cout<<"Hallo Fina Mardianti"<<endl;
	}
	
	else{
		cout<<"Failed, your Username or Password is Wrong";
	}
	
	getch;
	return 0;
}
