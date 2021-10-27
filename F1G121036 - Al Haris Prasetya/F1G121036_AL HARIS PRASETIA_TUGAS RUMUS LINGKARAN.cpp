//mencari luas lingkaran
#include<iostream>
using namespace std;
int main()
{
	float phi,r,rr,luas;
	//phi x r^2
	//phi = 3.14 
	phi=3.14;
	cout<<"nilai jarijari = ";
	cin>>r;
	rr=r*r;
	cout<<"jari jari^2 = "<<rr<<"cm"<<endl;
	luas=phi*rr;
	cout<<"luas lingkaran adalah "<<luas<<"cm^2";
	
	return 0;
	
}

