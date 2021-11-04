#include<iostream>
using namespace std;
int main(){
	int b,uang;
	string motor1,motor2,motor3;
	beli:
		cout<<"Pemilihan Motor \n";
		cout<<"1. Motor Supra \n2. Motor Vega \n3. Motor Mio \n";
		cout<<"Silahkan tulis pesanan nomor motor yang Anda suka \n";
		cin>>b;
		switch (b){
			case 1 :
				cout<<"Anda memilih motor supra \n";
				cout<<"Dengan harga : Rp.20.000.000 \n";
				cin>>uang;
				if(uang>20000000){
					cout<<"Uang yang Anda miliki cukup untuk membeli motor Supra \n";
					cout<<"Dengan Harga Rp.20.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-20000000<<endl; 
				}
				else if(uang==20000000){
					cout<<"Uang yang Anda miliki cukup untuk membeli motor Supra \n";
					cout<<"Dengan Harga Rp.20.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-20000000<<endl; 
				}
				else{
					cout<<"Uang yang anda miliki tidak cukup \n";
					system("cls");
					goto beli;
			}
			break;
			case 2 :
				cout<<"Anda memilih motor vega \n";
				cout<<"Dengan harga : Rp.15.000.000 \n";
				cin>>uang;
				if(uang>15000000){
					cout<<"Uang yang Anda miliki cukup untuk membeli motor Vega \n";
					cout<<"Dengan Harga Rp.15.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-15000000<<endl; 
				}
				else if(uang==15000000){
					cout<<"Uang yang Anda miliki cukup untuk membeli motor Vega \n";
					cout<<"Dengan Harga Rp.15.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-15000000<<endl; 
				}
				else{
					cout<<"Uang yang anda miliki tidak cukup \n";
					system("cls");
					goto beli;
			}
				break;
			case 3 :
			cout<<"Anda memilih motor mio \n";
				cout<<"Dengan harga : Rp.15.000.000 \n";
				cin>>uang;
				if(uang>18000000){
					cout<<"Uang yang Anda miliki cukup untuk membeli motor Mio \n";
					cout<<"Dengan Harga Rp.18.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-15000000<<endl; 
				}
				else if(uang==18000000){
					cout<<"Uang yang Anda miliki cukup untuk membeli motor Mio \n";
					cout<<"Dengan Harga Rp.18.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-18000000<<endl; 
				}
				else{
					cout<<"Uang yang anda miliki tidak cukup \n";
					system("cls");
					goto beli;
			}
				break;
			default:
				cout<<"Masukkan pilihan yang sesuai \n";
				system ("cls");
				goto beli;
						
		}
	}
