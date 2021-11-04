#include<iostream>
#include <conio.h>
using namespace std;

int main () {


	int  ayam, Jumlah_porsi , harga_1, harga_2, harga_3, harga_total;
	char pilihan;
	awal:
	cout<<"============================== selamat datang di warung ayam geprek ========================== "<<endl;
	cout<<" Selamat datang di warung makan kami silahkan memesan menu anda di daftar menu"<<endl;
	cout<<" Daftar menu = "<<endl;
	cout<<" 1. Ayam geprek  Rp 15.000 " <<endl;
	cout<<" 2. Ayam penyet  Rp 20.000 " <<endl;
	cout<<" 3. Ayam crispy  Rp 25.000 " <<endl;
	cout<<"======================================================================= "<<endl;
	harga_1= 15000;
	harga_2= 20000;
	harga_3= 25000;
	cout<<"masukkan pilihan menu anda = ";
	cin >> (ayam);
	switch (ayam){
	
		case 1:
			cout<<"masukkan jumlah porsi ayam geprek yang ingin anda pesan = ";
			cin>>Jumlah_porsi;
			system ("cls");
			harga_total = Jumlah_porsi * harga_1;
			cout<< "harga_total = "<< Jumlah_porsi * harga_1<< " Rp "<<endl;
			cout<<" Ayam geprek " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			ayam_geprek:
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
					goto ayam_geprek;
					}
		break;
			case 2:
			cout<<"masukkan jumlah porsi ayam penyet yang ingin anda pesan = ";
			cin>>Jumlah_porsi;
			system ("cls");
			harga_total = Jumlah_porsi * harga_2;
			cout<< "harga_total = "<< Jumlah_porsi * harga_2<< " Rp "<<endl;
			cout<<"ayam penyet" << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			ayam_penyet:
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
					goto ayam_penyet;
					}
		break;
			case 3:
			cout<<"masukkan jumlah porsi ayam crispy yang ingin anda pesan = ";
			cin>>Jumlah_porsi;
			system ("cls");
			harga_total = Jumlah_porsi * harga_2;
			cout<< "harga_total = "<< Jumlah_porsi * harga_2<< " Rp "<<endl;
			cout<<" Ayam crispy " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			ayam_crispy:
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
					goto ayam_crispy;
					}
		break;
	}

























	
}
	
