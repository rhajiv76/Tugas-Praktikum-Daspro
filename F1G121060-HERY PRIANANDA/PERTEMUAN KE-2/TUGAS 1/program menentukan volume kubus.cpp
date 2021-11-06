#include <iostream>

using namespace std;

int main(){

cout<<"Nama         = hery priananda"<<endl;
cout<<"NIM          = F1G121060"<<endl;
cout<<"Jurusan      = Ilmu Komputer"<<endl;
cout<<"Fakultas     = FMIPA"<<endl;
cout<<endl;

    float l, r;
    const float phi=3.14;

    cout<<"masukkan panjang jari-jari lingkaran (cm)= ";cin>>r;
    l=phi*r*r;

    cout<<endl;
    cout<<"===================================="<<endl;
    cout<<"Diketahui jari-jari lingkaran = "<<r<<"cm"<<endl;
    cout<<"Diketahui phi                 = 3.14"<<endl;
    cout<<"===================================="<<endl;
    cout<<endl;

    cout<<"Luas lingkaran               = phi*r^2"<<endl;
    cout<<"Luas lingkaran               = "<<l<<"cm^2"<<endl;

    return 0;

}
