#include <iostream>
using namespace std;
int main(){
	cout<<"====Nama : Ulfa Mardiana==="<<endl;
	cout<<"======Nim : F1G121031======"<<endl;
	
	float l, r;
	const float phi = 3.14;
	
	cout<<"=========================\n";
	cout<<"menghitung luas lingkaran\n";
	cout<<"=========================\n";
	
	cout<<"masukan panjang jari jari lingkaran:";
	cin>> r;
	
	l = phi*r*r;
	
	cout<<"luas lingkaran adalah "<<l<<endl;
	return 0;
}
