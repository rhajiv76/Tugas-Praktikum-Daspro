#include<iostream>
#include <conio.h>
using namespace std;

int main () {


	int  palumara, Jumlah_porsi , harga_1, harga_2, harga_3, harga_total;
	char pilihan;
	awal:
	cout<<"============================== WM.PALUMARA RICA-RICA ========================== "<<endl;
	cout<<" Selamat datang di warung makan kami silahkan memesan menu anda di daftar menu"<<endl;
	cout<<" Daftar menu = "<<endl;
	cout<<" 1. Palumara ikan kakap   Rp 50.000 " <<endl;
	cout<<" 2. Palumara ikan putih  Rp 60.000 " <<endl;
	cout<<" 3. Palumara ikan katamba Rp 70.000 " <<endl;
	cout<<"======================================================================= "<<endl;
	harga_1= 50000;
	harga_2= 60000;
	harga_3= 70000;
	cout<<"masukkan pilihan menu anda = ";
	cin >> palumara;
	switch (palumara){
	
		case 1:
			cout<<"masukkan jumlah porsi palumara ikan kakap yang ingin anda pesan = ";
			cin>>Jumlah_porsi;
			system ("cls");
			harga_total = Jumlah_porsi * harga_1;
			cout<< "harga_total = "<< Jumlah_porsi * harga_1<< " Rp "<<endl;
			cout<<" palumara ikan kakap " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			palumara_ikan_kakap:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if (pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }	else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah berkunjung di warung makan kami"<<endl;
			}		else{
					cout<<"pilihan yang anda masukkan salah";
					goto palumara_ikan_kakap;
					}
		break;
			case 2:
			cout<<"masukkan jumlah porsi palumara ikan putih yang ingin anda pesan = ";
			cin>>Jumlah_porsi;
			system ("cls");
			harga_total = Jumlah_porsi * harga_2;
			cout<< "harga_total = "<< Jumlah_porsi * harga_2<< " Rp "<<endl;
			cout<<" palumara ikan putih " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			palumara_ikan_putih:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if (pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }	else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah berkunjung di warung makan kami"<<endl;
			}		else{
					cout<<"pilihan yang anda masukkan salah";
					goto palumara_ikan_putih;
					}
		break;
			case 3:
			cout<<"masukkan jumlah porsi palumara ikan katamba yang ingin anda pesan = ";
			cin>>Jumlah_porsi;
			system ("cls");
			harga_total = Jumlah_porsi * harga_2;
			cout<< "harga_total = "<< Jumlah_porsi * harga_2<< " Rp "<<endl;
			cout<<" palumara ikan katamba " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			palumara_ikan_katamba:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if (pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }	else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah berkunjung di warung makan kami"<<endl;
			}		else{
					cout<<"pilihan yang anda masukkan salah";
					goto palumara_ikan_katamba;
					}
		break;
}
	
}
	
