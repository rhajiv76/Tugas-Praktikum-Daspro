#include <iostream>
using namespace std;
int main(){
	int y,z;
	cout<<"masukkan input          : ";
	cin>>y;
	cout<<"berapa jumlah input      : ";
	cin>>z;
	do{
		cout<<y<<"+"<<y<<"="<<y*y<<endl;
		y++;
	}
	while(y<=z);
}
