#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	
	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	
	cout<<"TOKO AYAM"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Beli Ayam: ";
	cin>>jum_beli; 
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Jenis Ayam Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Jenis Ayam : ";
		cin>>nama_barang[i]; 
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; 
		
		cout<<"Harga       : ";
		cin>>harga[i]; 
		
		sub_tot[i]=jumlah[i]*harga[i]; 
		tot+=sub_tot[i]; 
	}
	
	cout<<endl;
	cout<<"STRUK WARUNG AYAM PAK JOKO"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; 
	}
	cout<<"---------------------------------------------------------"<<endl;

	if (tot>=45000){
		diskon=0.10*tot;
	} else if (tot>=20000){
		diskon=0.05;
	}else if (tot>=15000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	cout<<"Dikon        : Rp."<<diskon<<endl; 
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar; 
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl;
	
	
	
	
}
