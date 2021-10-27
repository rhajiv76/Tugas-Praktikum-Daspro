#include <iostream>
using namespace std;

int main(){
	
	//int = bilangan bulat
	//float = bilangan desmial
	int bil_1, hasil;
	float phi, r, r2, luas;
	
	
	
	/* Rumus mencari volume kubus
	sisi x sisi x sisi
	*/
	 
	cout <<" Masukkan Nilai Sisi Kubus = ";
	cin>>bil_1;
	hasil = bil_1 * bil_1 * bil_1;
	cout <<" Volume Kubus Adalah sisi x sisi x sisi " <<hasil <<" cm^2 \n\n\n";
	
	/* Rumus Mencari Luas Lingkaran
	phi * r^2
	*/
	
	phi = 3.14;
	cout <<" Masukkan Nilai Jari - Jari = ";
	cin>>r ;
	r2 = r * r;
	cout <<" nilai phi = " <<phi ;
	cout <<" jari - jari ^2 = " <<2  ;
	luas = phi * r2;
	cout <<" Rumus Luas Lingkaran adalah phi x Jari - Jari Pangkat 2 =" <<luas<<" cm^2" ;
	
	return 0;
	
	
}
