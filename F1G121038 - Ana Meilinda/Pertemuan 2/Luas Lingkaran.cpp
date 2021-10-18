#include <iostream>
using namespace std;

int main (){
	cout<<"Program Menghitung Luas Lingkaran"<<endl;
	cout<<"Nama	: Ana Meilinda"<<endl;
	cout<<"Nim	: F1G121038"<<endl;
	cout<<"Kelas	: Genap"<<endl;
	cout<<"Jurusan	: Ilmu Komputer"<<endl;
	
	cout<<endl;
	
	float phi = 3.14;
	float r, L;
	
	//Menghitung Luas Lingkaran\n";
	cout<<"Masukkan jari-jari Lingkaran : ";
	cin>>r;
	L = phi * r * r;
	cout<<"Luas lingkaran adalah adalah : " << L;
	
	return 0;
	
}

