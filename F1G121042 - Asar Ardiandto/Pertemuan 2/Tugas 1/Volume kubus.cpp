#include <iostream>
using namespace std;

int main (){
	float s,volume;
	
	cout << " Program Menghitung Volume Kubus "<<endl;
	
	cout << "Masukkan Sisi Kubus :";
	cin>> s;
	
	volume = s*s*s;
	
	cout << "Volume Kubus Adalah : "<<volume<<endl;
	
	return 0;
}
