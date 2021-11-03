#include<iostream>
using namespace std ;

int main(){
	cout<<"NAMA_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ SAHRUL"<<endl ;
	cout<<"NIM_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _F1G121083"<<endl ;
	cout<<"JURUSAN_ _ _ _ _ _ _ _ _ _ _ _ _ _ILMU KOMPUTER"<<endl ;
	cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  ~ ~ ~ ~"<<endl ;
	
	system("color b") ;
	system("pause") ;
	system("cls") ;

	
	cout<<"======GEPREK SAHRUL======"<<endl ;
	/*
//	Pada pemogramana kali ini saya akan membuat program tentang pemesanan geprek >///<
	*/
	
		cout<<"selamat Datang Di Geprek pesan Online Sahrul "<<endl ;
	system("pause") ;
	system("cls") ;
	awal :
	cout<<"Berikut Adalah Varian Menu Kami......"<<endl ;
	cout<<"Ragam menu "<<endl ;
	cout<<"1. Geprek biasa"<<endl<<"2. Geprek plus Es Teh"<<endl<<"3. Geprek Spesial"<<endl ;
	int menu, harga, hasil ;
	char pilihan ;
	
	cout<<"Silahkan pesan menu yang anda inginkan = " ;
	cin>>menu ;
	switch(menu){
		case 1 :
		system("cls") ;
		cout<<"Anda akan memesan (Geprek biasa) dengan harga 25000"<<endl ;
		masukan_harga :
		cout<<"Masukan uang anda  = " ;
		cin>>harga ;
		if(harga > 25000){
			hasil = harga - 25000 ;
			system("cls") ;
			cout<<"Anda memesan geprek biasa dengan harga 25000 sisa kembalian anda "<<hasil<<endl ;
			
		}else if(harga < 25000){
			cout<<"Uang yang anda masukan tidak cukup "<<endl ;
			goto masukan_harga ;
		}
		cout<<"Apakah anda ingin memesan lagi?... y/n "<<endl ;
		cout<<"Y untuk yes dan N untuk no"<<endl ;
		cout<<"Masukan pilihan anda = " ;
		cin>>pilihan ;
		
		if(pilihan == 'y'){
			system("cls") ;
			goto awal ;
		}else{
			system("cls") ;
			cout<<"Terimakasih...Kami menantikan kedatangan anda selanjutnya " ;
		}
		
			break;
	case 2 :
	cout<<"Anda akan memesan Geprek plus Es Teh dengan harga 30000"<<endl ;
	   masukan_uang :
		cout<<"Masukan uang anda  = " ;
		cin>>harga ;
		if(harga > 30000){
			hasil = harga - 30000 ;
			system("cls") ;
			cout<<"Anda memesan Geprek plus Es Teh dengan harga 30000 sisa kembalian anda "<<hasil<<endl ;
			
		}else if(harga < 30000){
			cout<<"Uang yang anda masukan tidak cukup"<<endl ;
			goto masukan_uang ;
		}
		cout<<"Apakah anda ingin memesan lagi?.. y/n"<<endl ;
		cout<<"Y untuk yes dan N untuk no"<<endl ;
		cout<<"masukan pilihan anda = " ;
		cin>>pilihan ;
		
		if(pilihan == 'y'){
			system("cls") ;
			goto awal ;
		}else{
			system("cls") ;
			cout<<"Terimakasih..Kami menantikan kedatangan anda selanjutnya" ;
		}
		break ;
		case 3 :
				cout<<"Anda akan memesan Geprek spesial dengan harga 50000"<<endl ;
	   masukan_duid :
		cout<<"Masukan uang anda  = " ;
		cin>>harga ;
		if(harga > 50000){
			hasil = harga - 50000 ;
			system("cls") ;
			cout<<"Anda memesan Geprek spesial dengan harga 50000 sisa kembalian anda "<<hasil<<endl ;
			
		}else if(harga < 50000){
			cout<<"Uang yang anda masukan tidak cukup"<<endl ;
			goto masukan_duid ;
		}
		cout<<"Apakah anda ingin memesan lagi?.. y/n"<<endl ;
		cout<<"Y untuk yes dan N untuk no"<<endl ;
		cout<<"masukan pilihan anda = " ;
		cin>>pilihan ;
		
		if(pilihan == 'y'){
			system("cls") ;
			goto awal ;
		}else{
			system("cls") ;
			cout<<"Terimakasih..Kami menantikan kedatangan anda selanjutnya" ;
		}
		break ;
		default :
			system("cls") ;
			cout<<"input yang anda masukan invalid"<<endl ;
			goto awal ;
		
		
	
		
		
	}
	
		
		
	
	
	
}
