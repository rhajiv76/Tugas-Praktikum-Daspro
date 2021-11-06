#include <conio.h>
#include <iostream>
using namespace std; 
int main()
{
    int pil,jum;
    char pilihan1;
awal:
    cout<<"*********DAFTAR KELAS TIKET KERETA API***********"<<endl;
    cout<<"1. EKONOMI"<<endl;
    cout<<"2. BISNIS"<<endl;
    cout<<"3. EKSEKUTIF"<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"Masukan Pilihan = ";
    cin>>pil;

    switch(pil) {
    case 1 :
            cout<<"Harga Tiket Rp 150.000/Org" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jum;
            cout<<endl;
            cout<<"Total Bayar "<<jum*150000<<endl;
            
            	ulang_lingkaran:

	cout<<" apakah anda ingin mengulangi program yang ini ???? (Y/N)" <<endl;
			cout<<" masukan pilihan anda "<<endl;
			cin>>pilihan1;
       

	
		
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} 
			else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah menggunakan program kami : )";
			} 
			else{
			cout<<" input yang anda masukan salah";
				goto ulang_lingkaran;}
    break;
    case 2 :
            cout<<"Harga Tiket Rp 250.000/Org" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jum;
            cout<<endl;
            cout<<"Total Bayar "<<jum*250000<<endl;
            	ulang_2:

	cout<<" apakah anda ingin mengulangi program yang ini ???? (Y/N)" <<endl;
			cout<<" masukan pilihan anda "<<endl;
			cin>>pilihan1;
       

	
		
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} 
			else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah menggunakan program kami : )";
			} 
			else{
			cout<<" input yang anda masukan salah";
				goto ulang_2;}
    break;
    case 3 :
            cout<<"Harga Tiket Rp 375.000/Org" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jum;
            cout<<endl;
            cout<<"Total Bayar "<<jum*375000<<endl;
            	ulang_3:

	cout<<" apakah anda ingin mengulangi program yang ini ???? (Y/N)" <<endl;
			cout<<" masukan pilihan anda "<<endl;
			cin>>pilihan1;
       

	
		
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} 
			else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah menggunakan program kami : )";
			} 
			else{
			cout<<" input yang anda masukan salah";
				goto ulang_3;}
    break;

    default : cout<<"Pilihan Anda Salah";

    }

getch();

}

