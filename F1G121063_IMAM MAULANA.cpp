#include <iostream>
using namespace std;

int main()
{
  
int s;
int volume;
float luas, phi=3.14;
int r;

// Menghitung volume kubus

cout<<"Masukkan sisi kubus : ";
cin>>s;

volume = s*s*s;
cout<<"Masukkan volume kubus : "<<volume<<endl;

// Luas lingkaran

cout<<"Masukkan jari-jari lingkaran : ";
cin>>r;

luas=phi*r*r;
cout<<"Luas lingkaran = "<<luas<<endl;


return 0;
}