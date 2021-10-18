#include<iostream>
using namespace std;

float kubus(float p, float l, float t, float v){//Ini rumusnya
	float re;
	if (p == 0) re = v/(l*t);//rumus mencari panjang adalah v/(lxT)
	if (l == 0) re = v/(p*t);//rumus mencari lebar adalah v/(pxt)
	if (t == 0) re = v/(l*p);//rumus mencari tinggi adalah v/(lxp)
	if (v == 0) re = l*p*t;//rumus mencari volume adalah pxlxt
	return re;
}

int main (){
	
		cout <<"++++++++++++++++MENGHITUNG VOLUME KUBUS++++++++++++++++"<< endl;
	cout <<"Nama		:ICAL SAPUTRA\n";
	cout <<"NIM		:F1G121062\n";
	cout <<"Prodi		:ILMU KOMPUTER\n";
	cout <<"Fakultas	:MIPA\n";
	cout <<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
	
	float p,l,t,v;// Digunakan untuk mendeklarasikan variabel
	std::cout << " Masukkan angka 0 pada kolom yang ingin di cari\n";
	std::cout << " Panjang Kubus: ";
	std::cin >> p;// p untuk panjang
	std::cout << " Lebar Kubus : ";
	std::cin >> l;// l untuk lebar
	std::cout << " Tinggi Kubus : ";
	std::cin >> t;// t untuk tinggi
	std::cout << " Volume Kubus : ";
	std::cin >> v;// v untuk volume
	std::cout << "\nHasil: " << kubus(p,l,t,v) << "\n";//untuk menampilkan hasilnya
	return 0;
	
}
