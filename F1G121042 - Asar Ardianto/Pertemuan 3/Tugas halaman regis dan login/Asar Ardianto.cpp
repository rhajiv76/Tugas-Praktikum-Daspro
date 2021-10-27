#include<iostream>
using namespace std;
int main()
{
	string name,name1,pass,pass1,pass2;
	cout<<"halaman regis"<<endl;
	cout<<"username=";
	getline(cin,name);
    cout<<"masukan password=";
    getline(cin,pass);
    cout<<"\n\n";
    ulang:0
    cout<<"Halaman login"<<endl;
    cout<<"user name=";
    getline(cin,pass1);
    if(name1==name && pass1==pass)
	{
		cout<<"Akun yang dimasukan suda benar"<<endl;
		cout<<"\n\n";
	}
	else{
	cout<<"akun tidak terdaftar"<<endl;
	goto ulang;}
	
	
}
