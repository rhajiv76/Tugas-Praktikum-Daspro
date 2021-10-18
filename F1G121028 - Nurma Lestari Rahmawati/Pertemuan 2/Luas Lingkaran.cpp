#include <iostream>
using namespace std;

int main(){
	
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"Nama		: Nurma Lestari Rahmawati"<<endl;
	cout<<"NIM		: F1G121028"<<endl;
	cout<<"Jurusan		: Ilmu Komputer"<<endl;
	cout<<"Fakultas	: MIPA"<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
  float l, r;
  const float phi = 3.14;
  
  cout << "=================================\n";
  cout << "Program Menghitung Luas Lingkaran\n";
  cout << "=================================\n";
  cout << "Masukkan panjang jari-jari lingkaran: ";
  cin >> r;
  
  l = phi*r*r;
  cout << "Luas Lingkaran adalah "<< l << endl;
  
  return 0;
  
}
 
