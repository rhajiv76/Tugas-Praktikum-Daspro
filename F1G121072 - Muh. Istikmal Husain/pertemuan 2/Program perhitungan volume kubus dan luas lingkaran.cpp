#include<iostream>
using namespace std;


int main(){
	system("title MUH. ISTIKMAL HUSAIN");
	cout<<"NAMA     :"<<" Muh. Istikmal Husain"<<endl;
	cout<<"NIM      :"<<" F1G121072"<<endl;
	cout<<"Jurusan  :"<<" Ilmu Komputer"<<endl;
	
	cout<<"|||=========================================================|||======================================================|||"<<endl;
	
	cout<<"\t\t\t\t\t\tMenghitung Volume Kubus"<<endl;
	
	float s, v;
	//Rumus menghitung volume kubus "v = s*s*s"
	//Diman "v" = volume ; "s" = panjang sisi
	cout<<"panjang sisi =";
	cin>> s;
	cout<<"volume Kubus ="<<s*s*s<<endl;
	

	
	cout<<"|||=========================================================|||======================================================|||"<<endl;
	
	cout<<"\t\t\t\t\t\tMenghitung Luan Lingkaran"<<endl;
	
	float r, L;
	//Rumus mencari luas lingkaran adalah "L = phi(3.14)*r^2"
	//Dimana "L" = Luas lingkaran ; "r" = jari jari
	cout<<"Jari-jari lingkaran = ";
	cin>> r;
	cout<<"Luas lingkaran = "<< 3.14*(r*r)<<endl;
	
	
	return 0;
}
