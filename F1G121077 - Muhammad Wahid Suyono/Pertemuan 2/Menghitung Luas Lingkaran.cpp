#include <iostream>
using namespace std;

int main() {
	const float phi = 3.14 ;
	float L, r;

system ("color 2");
	
	int menu;

	//Menentukan Nilai Jari-jari lingkaran
	cout<<"Masukkan Jari-Jari Lingkaran = " ;
	cin>>r;

	//proses perhitungan luas
	L = phi * r * r;
	cout<<endl;
	
	//Proses Penyelesaian
 	cout<<"Diketahui luas lingkaran jari-jari dengan:"<<endl;
	cout<<"phi   \t	= " <<phi<<endl;
	cout<<"r  	\t = "<<r<<endl; 
	cout<<"==================================="<<endl;
	
	//tampilan Hasil
	cout<<"Luas Lingkaran Dengan Jari-Jari " <<r<<"cm "<<" adalah ";
	cout<<L<<" cm2";
}
