#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i;
	char ch;
	system("color c");

	cout<<"===== Halaman Registrasi =====" << endl<<endl;
	cout<<"  Username: Ilkom021" << endl ;
	cout<<"  Password: Ilkom " << endl <<endl ;
	cout <<"================================\n" ;
	cout <<"   ***** Halaman Login *****\n";
	cout <<"================================\n" ;
	cout <<" Batas Memasukkan Username yang salah sebanyak 2x \n" <<endl ;
		for (i=1; i<=2; i++) {
		string user= "" ;
		string pass= "" ;
		cout <<"  Masukkan Username : "; cin >> user;
		cout <<"  Masukkan Password : "; 
			ch = _getch();
			while(ch != 13){//character 13 is enter
			pass.push_back(ch);
			cout << '*' ;
			ch = _getch() ;
			} 
			if (user =="Ilkom021" && pass=="Ilkom") {
			 	system("color a");
				cout << "\n\n\n      Anda Berhasil login .\n" ;
				cout << "\n Selamat Datang ILKOM :) \n" ;
				return 0;
				}
				else{ 
				cout << "\n\n Maaf Username & Password anda salah. \n\n" ;
				}
			}
			while (i <= 2);
			
			cout<<" Anda Telah 2x Salah Memasukkan Username & Sandi Yang Salah.\n";
			cout<<" Mohon maaf akun anda kami blokir untuk sementara.\n";
			cout<<" Silahkan Hubungi kami melalui e-mail Ilkom21@gmail.com, Terima Kasih..";
			getch();
			
			
		}
