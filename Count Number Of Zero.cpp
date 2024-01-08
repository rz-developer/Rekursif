#include<iostream>
using namespace std;
int nol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        nol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"===============Menghitung Jumlah Angka Nol================"<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"Masukkan Angka Yang Diingikan";
    cin>>n;
    cout<<"Banyak Jumlah Nol dalam Angka Tersebut Ialah: "<<nol(n);
}

