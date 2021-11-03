#include <iostream>
using namespace std;
int main()
{
	int pembelianbuku,novel,komik,psikologi;
	char pilihan;
	string  jumlah;
	
	
	awal:
	cout<<"========Book Store========"<<endl;
	cout<<"1.novel"<<endl<<"2.komik"<<endl<<"3.psikologis"<<endl;
	cout<<"masukkan pilihan anda : ";
	cin>>pembelianbuku;
	switch(pembelianbuku){
		case 1:
			cout<<"Masukkan Jenis Buku Novel Yang Ingin Anda Beli: ";
			cin>>jumlah;
			system("cls");
			cout<<"SELAMAT BUKU NOVEL PILIHAN ANDA TELAH TERBELI"<<endl;
			ulang_novel:
				cout<<"apakah ingin melakukan pembelian ulang ?? (y/n)"<<endl;
				cout<<"Masukkan Jenis Novel Yang Ingin Anda Beli : ";
				cin>>pilihan;
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}
			
				else if(pilihan == 'n'){
						system("cls");
						cout<<"Terima Kasih Telah Membeli Buku Di Toko Kami";
					}	else{
						cout<<"Input yang anda masukkan salah";
						goto ulang_novel;
					}
					
				
				break;
		case 2:
			cout<<"Masukkan Jenis Buku Komik Yang Ingin Anda Beli: ";
			cin>>jumlah;
			system("cls");
			cout<<"SELAMAT BUKU KOMIK PILIHAN ANDA TELAH TERBELI"<<endl;
			ulang_komik:
				cout<<"Apakah ingin melakukan pembelian ulang ??(y/n)"<<endl;
				cout<<"Masukkan Jenis Komik Yang Ingin Anda Beli: ";
				cin>>pilihan;
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}
					else if(pilihan =='n'){
						system("cls");
						cout<<"Terima Kasih Telah Membeli Buku Di Toko Kami";
					}
						else{
							cout<<"Input Yang Anda Masukkan Salah";
							goto ulang_komik;
						}
					
					
				
				break;
		case 3:
				cout<<"Masukkan Jenis Buku Psikologis Yang Ingin Anda Beli: ";
			cin>>jumlah;
			system("cls");
			cout<<"SELAMAT BUKU PSIKOLOGIS PILIHAN ANDA TELAH TERBELI"<<endl;
			ulang_psikologis:
				cout<<"apakah ingin melakukan pembelian ulang ?? (y/n)"<<endl;
				cout<<"Masukkan Jenis Psikologis Yang Ingin Anda Beli : ";
				cin>>pilihan;
				if(pilihan == 'y'){
					system("cls");
					goto awal;
				}
					else if(pilihan == 'n'){
						system("cls");
						cout<<"Terima Kasih Telah Membeli Di Toko Buku Kami";
					}	else{
						cout<<"Input yang anda masukkan salah";
						goto ulang_psikologis;
					}
				break;
			default :
				system("cls");
				cout<<"input yang anda masukkan tidak valid"<<endl;
				goto awal;
	}
	
	return 0;
	
	
} 
 
