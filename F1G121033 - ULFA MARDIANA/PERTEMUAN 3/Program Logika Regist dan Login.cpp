#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i;
	char ch;
	cout << "==Halaman Registrasi==\n";
	cout << "Username : ulffaa\n";
	cout << "Password : ul5634\n" << endl;
	
	cout << "=====Halaman Login====\n";
		for (i=1; i<=3; i++) {
			string user = "";
			string pass = "";
			cout << "Username : ";cin >>user;
			cout << "Password : ";
			ch = _getch();
			while(ch !=13){//character13 is enter
			pass.push_back(ch);
			cout<< '*';
			ch = _getch();
			}
			
			if(user=="ulffaa" &&pass =="ul5634"){
				cout << "\n\nAnda berhasil login. \n";
				cout << "....Hallo ulffaa.... \n";
				return 0;
			}else {
				cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
			}
		}
		while(i<=3);
		
		cout <<"Anda telah 3x memasukan Username & Password yang salah.\n";
		cout <<"Mohon maaf akun anda kami blokir untuk sementara.\n";
		cout <<"Silahkan hubungi kami melaui email ulul69@gmail.com\n";
		cout <<"Terima kasih";
		getch();
}
