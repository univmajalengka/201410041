#include<iostream>
using namespace std;
int main()
{
    cout<<"Tugas Membuat Kalkulator Sederhana" << endl;
        
	cout<<"Pilih Menu : "<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
        
    int  a,b, menu;
	float c,d,e,f;
     
    //masukan pemilihan operasi
    cout <<"Pilih/Masukan Operasi :  ";
	cin>>menu;
     //keluaran hasil  pemilihan operasi
cout <<"Anda Memilih Operasi : " << menu;
	if(menu==1){
//Pertambahan
cout<<"\n\n Ini adalah Operasi pertambahan(+)" << endl;
cout <<"Masukan nilai pertama : ";
		cin>>a;
cout <<"Masukan nilai kedua : ";
		cin>>b;
//operasi pertambahan
		c=a+b;
		cout<<"hasil >>"<<a<<"+"<< b <<"="<<c;
		}else if(menu==2){
//pengurangan
cout<<"\n\nIni adalah Operasi Pengurangan (-)" << endl;
cout <<"Masukan nilai pertama : ";
		cin>>a;
cout <<"Masukan nilai kedua : ";
		cin>>b;
//proses pengurangan 
		c=a-b;
//keluaran
			cout<<"hasil >>"<<a<<"-"<< b << "=" << c;
	}else if(menu==3){
//pengurangan
cout<<"\n\nIni adalah Operasi Pengurangan (*)" << endl;
cout <<"Masukan nilai pertama : ";
		cin>>a;
cout <<"Masukan nilai kedua : ";
		cin>>b;
//proses perkalian 
		c=a*b;
//keluaran
			cout<<"hasil >>"<<a<<"*"<< b << "=" << c;
	}else if(menu==4){
//pembagian
cout<<"\n\nIni adalah Operasi Pembagian (/)" << endl;
cout <<"Masukan nilai pertama : ";
		cin>>d;
cout <<"Masukan nilai kedua : ";
		cin>>e;
//proses pembagian
		c=d/e;
//keluaran
			cout<<"hasil >>"<<d<<"/"<< e << "=" << c;
		}else if(menu==5){
//Hasil Bagi
cout<<"\n\nIni adalah Operasi Hasil Bagi (%)" << endl;
cout <<"Masukan nilai pertama : ";
		cin>>a;
cout <<"Masukan nilai kedua : ";
		cin>>b;
//proses Hasil Bagi 
		c=a%b;
//keluaran
			cout<<"hasil >>"<<a<<"%"<< b << "=" << c;
			}else{
			cout<<"\nMenu Tidak Ada";
		}
		return false;
	}
