#include <iostream>
#include <string>
using namespace std;

int main(){
	// string yang akan dites 
	string tes = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis est ante, efficitur." ;
	char vowel[10] = {'a','i','u','e','o','A','I','U','E','O'};
	int jumlah,count = 0;
	int i;
	//menghitung dari tengah ke kanan
	
	for(i = tes.length()/2;i<tes.length();i++){
		switch(tes.at(i)){
			case 'a':count++;break;
			case 'i':count++;break;
			case 'u':count++;break;
			case 'e':count++;break;
			case 'o':count++;break;
			case 'A':count++;break;
			case 'I':count++;break;
			case 'U':count++;break;
			case 'E':count++;break;
			case 'O':count++;break;
		}
	}
	// menghitung dari tengah kekiri
	for(i = tes.length() / 2 -1 ; i >= 0 ; i--){
		switch(tes.at(i)){
			case 'a':jumlah++;break;
			case 'i':jumlah++;break;
			case 'u':jumlah++;break;
			case 'e':jumlah++;break;
			case 'o':jumlah++;break;
			case 'A':jumlah++;break;
			case 'I':jumlah++;break;
			case 'U':jumlah++;break;
			case 'E':jumlah++;break;
			case 'O':jumlah++;break;
		}		
	}
	
	cout<<count<<endl;
	cout<<jumlah<<endl;
	cout << jumlah + count;
	
}

