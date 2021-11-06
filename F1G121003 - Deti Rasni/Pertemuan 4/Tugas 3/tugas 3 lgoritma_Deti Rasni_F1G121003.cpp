#include <iostream>

using namespace std;

int main(){
	int boba, nominal, uang, total;
	char ulang;
	beli:
	cout<<"No        menu        harga"<<endl;
	cout<<"1.        boba        10.000"<<endl;
	cout<<"2.        pop ice     5.000"<<endl;
	cout<<"\pilihlah salah satu menu [1-2]"<<endl;
	cout<<"pilihan kamu ";
	cin>>boba;
	switch (boba) {
		case 1:
			
			cout<<"\nboba  Rp.10.000"<<endl;
			cout<<"jumlah boba yang ingin di beli : ";
			cin>>nominal;
			total=nominal*10000;
			cout<<endl;
			cout<<"Total harga : "<<total;
			cout<<endl;
			cout<<"Masukan uang pembayaran anda : ";
			cin>>uang;
			if (uang==total){
				lagi:
					system("cls");
					cout<<"Selamat pembayaran anda berhasil.\n"<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
					cout<<"(y/n) ? "; cin>>ulang;
					if (ulang=='y'){;
					cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar. "<<endl;
				}else{
					system ("cls");
					goto lagi;
				}
			}else if (uang>total) {
				lagi2:
					system ("cls");
					cout<<"Selamat pembayaran anda berhasil."<<endl;
					cout<<"uang kembalian : "<<uang-total;
					cout<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
					cout<<"(y/n) ? ";cin>>ulang;
					if (ulang=='y'){
						system ("cls");
						goto beli;
					}else if (ulang=='n'){
						system ("cls");
						cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
					}else {
						system ("cls");
						goto lagi2;
						
					}
					}else{
						lagi3:
						system ("cls");
						cout<<"Mohon maaf uang anda tidak cukup"<<endl;
						cout<<"Apakah anda ingin melakukan pembelian ulang? tekan y jika iya dan n untuk keluar."<<endl;
						cout<<"(y/n) ? ";cin>>ulang;
						if (ulang=='y'){
							system ("cls");
							goto beli;
						}else if (ulang=='n'){
							system ("cls");
							cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
						}else {
							system ("cls");
							goto lagi3;
							}break;
		case 2:
			
			cout<<"\nPop ice  Rp.5.000"<<endl;
			cout<<"jumlah boba yang ingin di beli : ";
			cin>>nominal;
			total=nominal*5000;
			cout<<endl;
			cout<<"Total harga : "<<total;
			cout<<endl;
			cout<<"Masukan uang pembayaran anda : ";
			cin>>uang;
			if (uang==total){
				lagi4:
					system("cls");
					cout<<"Selamat pembayaran anda berhasil.\n"<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
					cout<<"(y/n) ? "; cin>>ulang;
					if (ulang=='y'){;
					cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar. "<<endl;
				}else{
					system ("cls");
					goto lagi4;
				}
			}else if (uang>total) {
				lagi5:
					system ("cls");
					cout<<"Selamat pembayaran anda berhasil."<<endl;
					cout<<"uang kembalian : "<<uang-total;
					cout<<endl;
					cout<<"Apakah anda ingin melakukan pembelian lain? tekan y jika iya dan n untuk keluar."<<endl;
					cout<<"(y/n) ? ";cin>>ulang;
					if (ulang=='y'){
						system ("cls");
						goto beli;
					}else if (ulang=='n'){
						system ("cls");
						cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
					}else {
						system ("cls");
						goto lagi5;
						
					}
					}else{
						lagi6:
						system ("cls");
						cout<<"Mohon maaf uang anda tidak cukup"<<endl;
						cout<<"Apakah anda ingin melakukan pembelian ulang? tekan y jika iya dan n untuk keluar."<<endl;
						cout<<"(y/n) ? ";cin>>ulang;
						if (ulang=='y'){
							system ("cls");
							goto beli;
						}else if (ulang=='n'){
							system ("cls");
							cout<<"Terima kasih atas pembeliannya, tekan tombol apa saja untuk keluar."<<endl;
						}else {
							system ("cls");
							goto lagi6;
							}break;	
							
						default : system("cls");
						goto beli;
						}
					}
				}
			}
						
			
				
				
 	
 
