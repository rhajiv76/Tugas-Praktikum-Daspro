#include <iostream>
using namespace std;
int main(){
	cout<<"Agung Rezky Pujiawan" << endl ;
  float l, r;
  const float phi = 3.14;

  cout << "Program Menghitung Luas Lingkaran\n";

  cout << "Masukkan panjang jari-jari lingkaran: ";
  cin >> r;
  l = phi*r*r;
  cout << "Luas Lingkaran adalah "<< l << endl;
  return 0;
}
