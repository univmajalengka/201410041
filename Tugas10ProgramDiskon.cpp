//Membuat Program Menghitung Diskon Metode CASE
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Masukan Total Nilai Belanjaan Anda : ";
	cin>>x;
	switch(x){
		case 0 ... 24999 : cout<<"Anda Mendapatkan Diskon Sebesar 0%"; break;
		case 25000 ... 49999 : cout<<"Anda Mendapatkan Diskon Sebesar 10%"; break;
		case 50000 ... 99999 : cout<<"Anda Mendapatkan Diskon Sebesar 12.5%"; break;
		case 100000 ... 1000000000 : cout<<"Anda Mendapatkan Diskon Sebesar 15%"; break;
		default: cout<<"Anda Belum Belanja Hari Ini !!!";
	}
	return 0;
}

