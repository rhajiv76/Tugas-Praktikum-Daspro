#include<iostream>
using namespace std;

int main()
{
	//int = bilangan bulat
	//float = bilangan desimal
	//char = untuk menampung satu karakter
	
	//menghitung volume kubus
	int sisi,hasil;
	/*rumus menghitung volume kubus
	sisi x sisi x sisi
	*/
	
	cout<< "masukkan nilai sisi = ";cin>>sisi;
	
	cout<<"nilai volume kubus = "<< sisi*sisi*sisi <<"cm^3";
	cout<<endl;
	
	cout<<"----------------------------------------------------";
	cout<<endl;
	
	//menghitung luas lingkaran
	float phi = 3.14f;
	float r,luas;
	
	cout<<"Menghitung Luas Lingkaran\n";
	cout<<"Nilai phi = "<<phi<<endl;
	cout<< "masukkan nilai r = ";
	cin>>r;
	//rumus menghitung luas
	luas = phi*r*r;
	cout<< "nilai luas lingkaran = " <<luas<<"cm^2";
	
	return 0;	
}