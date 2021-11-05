#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	char pilihan;
	int merekhp, jumlah;
	
	awal:
		cout<<"==============================================="<<endl;
		cout<<"\t PROGRAM PEMBELIAN HANPHONE "<<endl;
		cout<<"==============================================="<<endl;
		
		cout<<"Pilih merek hanphone yang akan anda beli"<<endl;
		cout<<"1.iphone"<<endl;
		cout<<"2.samsung"<<endl;
		cout<<"3.advan"<<endl;
		cout<<"4.xioami"<<endl;
		
		cout<<"Merek hanphone yang dibeli : ";
		cin>>merekhp;
		switch(merekhp){
			case 1:
				cout<<"Harga hanphone iphone Rp. 10.000.000"<<endl;
				cout<<"Masukan jumlah hanphone yang anda beli : ";
				cin>>jumlah;
				system("cls");
				cout<<"pembelian hanphone anda berhasil, total pembayaran sebesar "<<jumlah*10000000<<endl;
				ulang_pembelian_iphone:
					cout<<"apakah anda ingin membeli ulang ? (y/n)"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilihan;
					if(pilihan == 'y'){
						system("cls");
						goto awal;
					}
					else if(pilihan == 'n'){
						system("cls");
						cout<<"terimakasi telah membeli di toko hanphone sc jen"<<endl;
					}
					else{
						cout<<"hanphone yang anda pesan tidak ada dalam daftar kami, silakan pesan yang ada dalam daftar";
						goto ulang_pembelian_iphone;
					}
					break;	
					
				case 2:
				cout<<"Harga hanphone samsung Rp. 5.000.000"<<endl;
				cout<<"Masukan jumlah hanphone yang anda beli : ";
				cin>>jumlah;
				system("cls");
				cout<<"pembelian hanphone anda berhasil, total pembayaran sebesar "<<jumlah*5000000<<endl;
				ulang_pembelian_samsung:
					cout<<"apakah anda ingin membeli ulang ? (y/n)"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilihan;
					if(pilihan == 'y'){
						system("cls");
						goto awal;
					}
					else if(pilihan == 'n'){
						system("cls");
						cout<<"terimakasi telah membeli di toko hanphone sc jen"<<endl;
					}
					else{
						cout<<"hanphone yang anda pesan tidak ada dalam daftar kami, silakan pesan yang ada dalam daftar";
						goto ulang_pembelian_samsung;
					}
					break;	
			case 3:
				cout<<"Harga hanphone advan Rp. 4.000.000"<<endl;
				cout<<"Masukan jumlah hanphone yang anda beli : ";
				cin>>jumlah;
				system("cls");
				cout<<"pembelian hanphone anda berhasil, total pembayaran sebesar "<<jumlah*4000000<<endl;
				ulang_pembelian_advan:
					cout<<"apakah anda ingin membeli ulang ? (y/n)"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilihan;
					if(pilihan == 'y'){
						system("cls");
						goto awal;
					}
					else if(pilihan == 'n'){
						system("cls");
						cout<<"terimakasi telah membeli di toko hanphone sc jen"<<endl;
					}
					else{
						cout<<"hanphone yang anda pesan tidak ada dalam daftar kami, silakan pesan yang ada dalam daftar";
						goto ulang_pembelian_advan;
					}
					break;	
					
			case 4:
				cout<<"Harga hanphone xioami Rp. 8.000.000"<<endl;
				cout<<"Masukan jumlah hanphone yang anda beli : ";
				cin>>jumlah;
				system("cls");
				cout<<"pembelian hanphone anda berhasil, total pembayaran sebesar "<<jumlah*8000000<<endl;
				ulang_pembelian_xioami:
					cout<<"apakah anda ingin membeli ulang ? (y/n)"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilihan;
					if(pilihan == 'y'){
						system("cls");
						goto awal;
					}
					else if(pilihan == 'n'){
						system("cls");
						cout<<"terimakasi telah membeli di toko hanphone sc jen"<<endl;
					}
					else{
						cout<<"hanphone yang anda pesan tidak ada dalam daftar kami, silakan pesan yang ada dalam daftar";
						goto ulang_pembelian_xioami;
					}
					break;	
							
				}
				}

