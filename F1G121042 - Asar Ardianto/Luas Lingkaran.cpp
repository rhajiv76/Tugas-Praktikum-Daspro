#include <iostream>
using namespace std;

int main (){
	float l,r;
	const float phi = 3.14;
	
	cout << "Program Menghitung Luas Lingkaran"<<endl;
	
	cout << "Masukkan Jari-jari Lingkaran :";
	cin>> r;
	
	l = phi*r*r;
	
	cout << "Luas Lingkaran Adalah : "<< l << endl;
	
	return 0;
}
