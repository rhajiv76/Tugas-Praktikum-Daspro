/*   
	Bagian Program
	1. Header  (kepala program)
	2. Main 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	/* 
	    tipe data
		int >> integer (bilangan bulat)
		float >> floating point (bilangan asli)
		char >> character ''
		string >>
		array
		pointer 
		
		aturan penamaan variabel :
		1. tidak boleh diawali angka boleh diawali _
		2. case sensitive (huruf besar dan kecil berpengaruh) Nama != nama
		3. tidak boleh ada spasi
		4. tidak boleh ada karakter spesial selain _
	*/	
//	string nama;
//	string Nama;
	
	/* 
		untuk memberi baris baru 
		1. escape karakter (\n) singkatan dari new line
		2. endl (end line)
		
		escape karakter
		\n (untuk membuat baris baru)
		\t (tab)
		\"
		
		operator aritmatika
		+ (penjumlahan)
		- (pengurangan)
		* (perkalian)
		/ (pembagian)
		% (modulus / sisa bagi)
		++ (increment) -> + 1
		-- (decrement) -> - 1
	*/
//	int angka1,angka2,hasil;
//	cout<< "input angka 1 : ";
//	cin>>angka1;
//	cout<< "input angka 2 : ";
//	cin>> angka2;
//	hasil = angka1 + angka2;
//	cout<< hasil;

//	string nama;
//	cout<<"masukkan nama: ";
//	cin >> nama;
//	cout<<"Selamat datang "<<nama<<" di websiteku" ;

// nama : Mohamad ALief Rizky Ramadhan
// NIM  : F1G119031
// PRODI : Ilmu Komputer

// Halo Nama Saya .......
// NIM ........
// Prodi ........
// Saya berkuliah di Universitas Halu Oleo
//	string nama,nim,prodi = "Ilmu Komputer";
//	cout << "Masukkan nama lengkap anda : ";
//	getline(cin,nama);
//	cout <<"Nama Saya "<<nama<<endl<<"prodi saya "<<prodi;

// operator pembanding (comparational operator)

// > (lebih besar dari)
// < (lebih kecil dari)
// >= (lebih dari atau sama dengan)
// <= (lebih kecil atau sama dengan)
// ==   (sama dengan) 
// !=   (tidak sama dengan)

// = (asignment operator) 

//int x = 5;
//int y = x;

/*
	if(kondisi){
		apa yang diinginkan bila kondisi terpenuhi
	}
	else {
		apa yang diinginkan bila kondisi tidak terpenuhi
	}


*/

// if(x > y){
// 	cout << "ya nilai x = y";
// }
// else {
// 	cout << "nilai x tidak sama dengan y";
// }



//int nilai;
//char predikat;
//cout << "Masukkan nilai: ";
//cin>>nilai;

//if(nilai > 90){
//	predikat = 'A';
//} else if(nilai > 80){
//	predikat = 'B';
//} else {
//	predikat = 'C';
//}
//
//
//
//switch(predikat){
//	case 'A' : 
//				cout << "Anda mendapatkan predikat sangat baik";
//				break;
//	case 'B' :
//				cout<< "Anda mendapatkan baik";
//				break;
//	case 'C' :  cout<< "Anda Cukup";
//				break;
//}


//konversi dari tahun ke abad

// tahun 

// 1890 => Abad ke-19
// 1800 => Abad ke-18
// 1700 => Abad ke-17
// Abad ke-18 1701 - 1800
// % pembagian biasa


//int tahun;
//cout << "Masukkan Tahun yang mau dikonversi : ";
//cin >> tahun;
//
//if(tahun % 100 == 0){
//	cout<< "Hasil Konversi tahun "<<tahun<<" Adalah Abad ke-"<<tahun / 100;
//}else {
//	cout<< "Hasil Konversi tahun "<<tahun<<" Adalah Abad ke-"<<tahun / 100 + 1;
//}

// input 1
// input 2
// input 3 => +  - 
// input 2 + input 1 // input 1 - input 2 // 


// 1
// 2
// + - * /
// 3 -1 1 0,5


//float angka1,angka2;
//char input;
//
//
//	cout << "masukkan angka1: ";
//	cin >>angka1;
//	cout << "masukkan angka2: ";
//	cin >> angka2;
//	cout << "masukkan simbol: ";
//	cin >>input;
	
	
//	if(input == '+'){
//		cout<<"Hasil = "<<angka1 + angka2;
//	}else if(input == '-'){
//		cout<<"Hasil = "<<angka1 - angka2;
//	}else if(input == '*'){
//		cout<<"Hasil = "<<angka1 * angka2;
//	}else if(input == '/'){
//		cout<<"Hasil = "<<angka1 / angka2;
//	}else cout<<"Input yang anda masukkan tidak valid";



//switch(input){
//	case '+': cout<<"Hasil = "<<angka1 + angka2;break;
//	case '-': cout<<"Hasil = "<<angka1 - angka2;break;
//	case '*': cout<<"Hasil = "<<angka1 * angka2;break;
//	case '/': cout<<"Hasil = "<<angka1 / angka2;break;
//	default: cout<<"Input yang anda masukkan tidak valid";
//}
//		
// username:
// password :
// username yang diinput != username disimpan || password yang diinput != password yang disimpan => error
// usernam || password tidak valid


string username = "alief"; 
string password = "alief123";
string nama,kode;

cout<<"Masukkan username: ";
cin>>nama;
cout<<"Masukkan Password: ";
cin>>kode;

if(nama == username && kode == password){
	cout<<"username";
}else cout<<"error";




}






