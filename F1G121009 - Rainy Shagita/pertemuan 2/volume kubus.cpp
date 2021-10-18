#include <iostream>
#include <string>
using namespace std;
int main(){
	std: cout<<"Rainy Shagita\n";
    int s,v; // Deklarasi variabel sisi (s) dan volume (v)
    string dimensi;
    
    cout<<"PROGRAM C++ MENGHTUNG VOLUME KUBUS"<<endl;
    cout<<"----------------------------------"<<endl;

    //Menginput nilai ke vaiabel sisi (s)
    cout<<"Masukan Sisi Kubus : ";
    cin>>s;
    cout<<"Masukan Satuan (mm,cm,m) Dimensi Kubus : ";
    cin>>dimensi;
    cout<<endl;

    v=s*s*s; //Rumus volume kubus
    cout<<"Volume Kubus =  "<<v<<" "<<dimensi<<"3"; // Tampilkan kubus
    return 0;

}
