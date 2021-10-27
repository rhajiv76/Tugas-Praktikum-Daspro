#include<iostream>
using namespace std;

int main()
{
	string  name, name1, pass, pass1, pass2;
	cout<<"Halaman login"<<endl;
	cout<<"usurname=";
	getline(cin, name);
	cout<<"masukan password=";
	getline(cin, pass);
	cout<<"\n\n";
	ulang:
	cout<<"Halaman loggin"<<endl;
	cout<<"usurname=";
	getline(cin,name1);
	cout<<"password=";
	getline(cin,pass1);
	if(name1==name && pass1==pass)
{
    cout<<"akun telah memenuhi syarat"<<endl;
	cout<<"\n\n";		
}
    else{
    cout<<"akun tidak memenuhi syarat"<<endl;
    goto ulang;}
}
