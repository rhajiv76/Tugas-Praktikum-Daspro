#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout<<"==========Halaman REgistrasi=========="<<endl;
	cout<<"Username : Finamardianti"<<endl;
	cout<<"Password : fina280303"<<endl;
	cout<<"==========Halaman Login=========="<<endl;
	
	system ("color 9");
	string user, pass;
	
	cout<<"Masukkan Username : ";
	cin>>user;
	cout<<"Masukkan Password : ";
	cin>>pass;
	
	if (user == "Finamardianti" && pass == "fina280303"){
		cout<<"Hallo Fina Mardianti"<<endl;
	}
	
	else{
		cout<<"Failed, your Username and Password is Wrong";
	}
	
	getch;
	return 0;
}
