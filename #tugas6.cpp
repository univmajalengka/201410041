#include<iostream>
using namespace std;
int main()
{
int j1, m1, d1, j2, m2, d2, j3, m3, d3, sm, td1, td2, td3;

cout<<"Membuat program billing warnet" << endl;
cout<<"==========================================" << endl;
cout<<"Masukan Waktu Awal Main di bawah : " << endl;
cout<<"Masukan Jam : " ;
cin>>j1;
cout<<"Masukan Menit : " ;
cin>>m1;
cout<<"Masukan Detik : " ;
cin>>d1;
cout<<"Masukan Waktu Akhir Main di Bawah :" << endl;
cout<<"Masukan Jam : " ;
cin>>j2;
cout<<"Masukan Menit : " ;
cin>>m2;
cout<<"Masukan Detik : " ;
cin>>d2; 
td1 = j1 * 3600 + m1 * 60 + d1;
td2 = j2 * 3600 + m2 * 60 + d2;
td3 = td2 - td1;
j3 = td3 / 3600;
sm = td3 % 3600;
m3 = sm / 60;
d3 = sm % 60;
cout<<"Anda Bermain Selama :" << j3 << "jam" << " : " << " menit " <<" : " << d3 <<" detik";
return 0;
}


