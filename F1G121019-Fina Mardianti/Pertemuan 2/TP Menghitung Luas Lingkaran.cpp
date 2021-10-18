#include <iostream>
using namespace std;

int main() 
{
	cout<<" Menghitung Luas Lingkaran "<<endl;
	
	float l, r;
	const float phi = 3.14;
	
	cout<<"Masukkan Jari-jari Lingkaran : ";
	cin>>r;
	
	l = 3.14 * r * r;
	
	cout<<"Nilai Luas Lingkaran = "<<l;
	
	return 0;
}
