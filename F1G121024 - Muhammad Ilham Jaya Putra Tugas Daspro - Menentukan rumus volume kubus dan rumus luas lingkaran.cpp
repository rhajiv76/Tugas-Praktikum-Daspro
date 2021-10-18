#include<iostream>
using namespace std;

int main(){
	
	 cout<< "Tugas Praktikum F1G121024_Muh. Ilham Jaya Putra\n\n";

  // Mencari Rumus Volume Kubus
  // Mencari Luas Lingkaran


  int bil_1, hasil;
  float phi,r,r2,luas;

  /* Rumus Mencari Nilai Volume Kubus
  sisi x sisi x sisi
  */
  
  cout<<"Masukkan Nilai Sisi Kubus =";
  cin>>bil_1;
  hasil = bil_1 * bil_1 * bil_1;
  cout<<"\n";
  cout<<"Rumus Mencari Volume Kubus adalah sisi x sisi x sisi "<<hasil<<"m^3\n\n";
  
  /* Rumus Mencari  Luas Lingkaran
  phi * r^2
  */
  
  phi = 3.14;
  cout<<"Masukkan nilai jari-jari =";
  cin>>r;
  r2 = r * r;
  cout<<"Nilai phi =" <<phi <<endl;
  cout<<"Jari-jari ^2 =" <<r2<<endl;
  luas = phi * r2;
  cout<<"Rumus Mencari Luas Lingkaran adalah phi x Jari-jari pangkat 2 =" <<luas<<"cm^2\n";
  
  return 0;  
}
