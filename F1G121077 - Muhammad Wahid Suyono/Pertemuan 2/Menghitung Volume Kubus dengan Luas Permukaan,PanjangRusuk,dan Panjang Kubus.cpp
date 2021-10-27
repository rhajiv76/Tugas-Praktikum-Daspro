#include <iostream>
#include <math.h>
using namespace std;

float H_luasPer(float s);
float H_Volume (float s);
float H_Total (float s) ;
float s, luasPer, Volume, panjangTotalRusuk ;


int main() {
	system("color 2");
	cout<<"Masukkan panjang rusuk kubus s : " ;
	cin>>s;
	luasPer = H_luasPer(s) ;
	Volume = H_Volume(s) ;
	panjangTotalRusuk = H_Total (s) ;
	cout<<"===================================================" <<endl
	<<endl;
	cout<<" Luas Permukaan kubus dengan Panjang Kubus s 	    :"<<s<<", Adalah " <<luasPer <<endl
	<<endl;
	cout<<" Volume Kubus dengan panjang Rusuk s 		    :"<<s<<", Adalah " <<Volume <<endl
	<<endl;
	cout<<" Panjang total Rusuk kubus dengan Panjang Rusuk s   :"<<s<<", Adalah " <<panjangTotalRusuk <<endl
	<<endl;
	}

	float H_luasPer(float s)
	{
		luasPer = 6*s*s;
		return(luasPer);
	}
	float H_Volume (float s)
	{	
		Volume = s*s*s;
		return(Volume);
	}
	float H_Total (float s) 
	{	panjangTotalRusuk = 12*s;
		return(panjangTotalRusuk);
	}
	
 
