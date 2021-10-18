#include <iostream>
using namespace std;

int main(){
	std::cout << "winda\n";
	
	int s, v; // Deklarasi variabel sisi (s)dan volume (v)
	string dimensi;
	
	cout<<"PROGRAN C++ MENGHITUNG VOLUME KUBUS"<<endl;
	cout<<"............................................."<<endl;
	
	//mengimput nilai ke variabel sisi (s)
	cout<<"Masukkan Sisi kubus ";
	cin>>s;
	cout<<"Masukkan Satuan (mm, cm, m) Dimensi kubus : ";
	cin>>dimensi;
	cout<<endl;
	
	v=s*s*s; //Rumus volume kubus
	cout<<"volume kubus = "<<v<<" "
	<<dimensi<<"3"; // tampikan kubus
	return 0;
	
	
	
		
}
