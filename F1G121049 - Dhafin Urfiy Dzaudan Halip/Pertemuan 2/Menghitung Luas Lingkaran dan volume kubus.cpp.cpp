#include<iostream>
using namespace std;

int main(){
	const float phi = 3.14;
	float L, r;
	
	cout<<"Menghitung Luas Lingkaran "<<endl;
	//value r
	printf ("Masukkan jari-jari lingkaran : ");
	cin>>r;
	
	//proses penrhitungan luas
	L = phi * r * r;
	
	//penampilan hasil
	cout<<"Luas lingkaran dengan jari-jari "<<r<<" cm "<<" adalah ";
	cout<<L<<" cm "<<endl;
	
	float s,hasil;
	cout<<"Menghitung volume kubus"<<endl;
	
	cout<<"Masukkan nilai sisi kubus : ";
	cin>>s;
	
	hasil = s * s * s;
	
	cout<<"Jadi, volume  kubus dengan sisi "<<s<<" cm "<<"sadalah "<<hasil<<" cm ";
	
}
