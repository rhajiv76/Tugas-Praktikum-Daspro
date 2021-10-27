#include <iostream>

float kubus(float p, float l, float t,float v){// sebagai rumus
	float re;
	if (p == 0) re = v/(l*t);// jika panjang tidak di ketahui maka rumusnya volume / (lebar * Tinggi)
	if (l == 0) re = v/(p*t);// jika  lebar tidak di ketahui maka rumus volume / (panjang * Tinggi)
	if (t == 0) re = v/(l*p);// jik tinggi yang tidak di ketahui maka rumusnya volume / (lebar * panjang)
	if (v == 0) re = l*p*t;// jika volume ang tidak di ketahui maka rumusnya lebar * panjang * Tinggi
	return re;
}

int main(){
	float p,l,t,v;// Digunakan untuk mendeskripsikan variable
	std::cout << "panjang kubus : ";
	std::cin >> p;// p untuk panjang 
	std::cout << "Lebar kubus: ";
	std::cin >> l;// l untuk lebar
	std::cout << "Tinggi kubus: ";
	std::cin >> t;// t untuk Tinggi
	std::cout << "volume kubus: ";
	std::cin >> v;// v untuk volume
	std::cout << "\nHasil: " << kubus(p,l,t,v) << "\n";// Digunakan untuk menampilkan hasilnya
	return 0;	
}
