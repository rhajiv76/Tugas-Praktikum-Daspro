#include<iostream>
using namespace std;

int main(){
	int inputuser, jumlah;
	char pilihan;
	awal :
		cout<<"===== warkop ical ===="<<endl;
		cout<<"daftar menu kami"<<endl;
		cout<<"1.kopi luwak"<<endl;
		cout<<"2.es teh manis"<<endl;
		cout<<"3.pisang goreng"<<endl;
		cout<<"4. susu coklat"<<endl;
		cout<<"masukan menu yang ingin anda pesan : ";
		cin>>inputuser;
		switch(inputuser){
			case 1:
				cout<<"harga kopi luwak RP.5.000/gelas"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*5000<<endl;
				ulang_kopi_luwak:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan kopi kami"<<endl;
					cout<<"semoga enjoy";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_kopi_luwak;
				}	
				break;
				
			case 2:
				cout<<"harga es teh manis RP.4.000/gelas"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*4000<<endl;
				ulang_es_teh_manis:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan es teh manis kami"<<endl;
					cout<<"semoga enjoy";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_es_teh_manis;
				}
				break;	
					
				case 3:
					cout<<"harga pisang goreng RP.10.000/porsi"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*100000<<endl;
				ulang_pisang_goreng:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan pisang goreng kami"<<endl;
					cout<<"semoga enjoy";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_pisang_goreng;
				}
				break;
							
				case 4:
					cout<<"harga susu coklat RP.8.000/pergelas"<<endl;
				cout<<"masukan jumlah pesanan anda =";
				cin>>jumlah;
				system("cls");
				cout<<"pesanan anda telah berhasil, total pembayaran anda sebesar "<<jumlah*8000<<endl;
				ulang_susu_coklat:
				cout<<"apakah anda ingin memesan ulang ?? (y/n)"<<endl;
				cout<<"masukan pilihan anda : ";
				cin>>pilihan; 
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}   else if(pilihan == 'n'){
					system("cls");
					cout<<"terimakasih telah memesan susu coklat kami"<<endl;
					cout<<"semoga anda jadi orang sukses";
				}	else{
					cout<<"menu yang anda pesan tidak ada dalam daftar kami";
					goto ulang_susu_coklat;
				}
				break;		
				}		
				
					
				}	
		
