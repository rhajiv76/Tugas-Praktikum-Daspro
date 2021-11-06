

#include <iostream>


#include <conio.h>


#include <stdlib.h>

using namespace std;




int main() {


unsigned int pilihan;
char pilihan1;


float r, Ll, p, l, Lp, a, t, Ls;

cout << " ============================ " <<endl;
cout << " Nama    : Fadli La Ode Mardin " <<endl;
cout << " NIM     : F1G121054 " << endl;
cout << " Jurusan : Ilmu komputer " <<endl;
cout << " Fakultas: MIPA  " << endl;
cout <<  " =============================" << endl;

awal:

cout << "MENU PILIHAN" << endl;

cout << "------------" << endl;

cout << "1. hitung luas lingkaran" << endl;

cout << "2. hitung luas persegi" << endl;

cout << "3. hitung luas segitiga" << endl;

cout << "4. exit" << endl;

cout << "------------" << endl;


cout <<  " masukan pilahan anda ";
 cin >>pilihan>=0;


switch(pilihan) {


case 1:

cout << "-------------------------------------"<< endl;

cout << "Menghitung Luas Lingkaran" << endl;

cout << "Masukan jari-jari            : "; cin >> r;

Ll = 3.14*r*r;

cout << "Luas Lingkaran               : " << Ll  << " program selesai " <<endl;

cout << "-------------------------------------"<< endl;
	ulang_lingkaran:

	cout<<"apakah anda ingin mengulangi program yang ini ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda"<<endl;
			cin>>pilihan1;
       

	
		
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} 
			else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah menggunakan program kami :)";
			} 
			else{
			cout<<"input yang anda masukan salah";
				goto ulang_lingkaran;
			
			
			
			}
	 		


break;


case 2:

cout << "-------------------------------------"<< endl;

cout << "Menghitung Luas Persegi" << endl;

cout << "Masukan Panjang              : "; cin >> p;

cout << "Masukan Lebar                : "; cin >> l;
Lp = p*l;

cout << "Luas Persegi                 : " << Lp <<" program selesai" <<endl;

cout << "-------------------------------------"<< endl;
        ulang_persegi:
	cout<<"apakah anda ingin meulangi program yang ini ???? (Y/N) " <<endl;
			cout<<"masukan pilihan anda"<<endl;
			cin>>pilihan1;     
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memakai program ini :)";
			} else{
			
			cout<<"input yang anda masukan salah";
		 goto ulang_persegi;
		}


break;


case 3:


cout << "-------------------------------------"<< endl;


cout << "Menghitung Luas Segitiga" << endl;


cout << "Masukan Alas                 : "; cin >> a;


cout << "Masukan Tinggi               : "; cin >> t;


Ls = 0.5*a*t;


cout << "Luas Segitiga                 : " << Ls << endl;


cout << "-------------------------------------"<< endl;

         ulang_segitiga:
	cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda"<<endl;
			cin>>pilihan1;
		
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memakai program kami :) ";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_segitiga;}
			


break;


case 4:


exit(4);


break;


default:


cout << "Kode Yang Anda Masukan Salah...!!!"<< endl;


}





 


getch();


}


