#include<iostream>
using namespace std;

int main(){
	int inputuser, jumlah;
	char pilihan;
	awal :
		cout<<"=========== poi ice barokah=========="<<endl;
		cout<<"daftar menu kami"<<endl;
		cout<<"1. coklat"<<endl<<"2. vanila blue"<<endl<<"3. taro"<<endl;
		cout<<"masukan menu yang ingin anda pesan : ";
		cin>>inputuser;
		switch(inputuser){
			case 1:
				cout<<"harga pop ice coklat RP.5.000/gelas"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*5000<<endl;
				ulang_popice_coklat:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan pop ice kami"<<endl;
					cout<<"selamat menikmati";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_popice_coklat;
				}	
				break;
				
			case 2:
				cout<<"harga pop ice vanila blue RP.5.000/gelas"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*5000<<endl;
				ulang_popice_vanila_blue:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan pop ice kami"<<endl;
					cout<<"selamat menikmati";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_popice_vanila_blue;
				}
				break;	
					
				case 3:
					cout<<"harga pop ice taro RP.5.000/gelas"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*5000<<endl;
				ulang_popice_taro:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan pop ice kami"<<endl;
					cout<<"selamat menikmati";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_popice_taro;
				}
				break;	
					
				}	
		}
