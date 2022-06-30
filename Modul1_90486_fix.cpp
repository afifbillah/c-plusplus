#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

main(){
	int i;
	
	struct Tanggal_90486{
	
				int hari_90486;
				int bulan_90486;
				int tahun_90486;
	};
		
	struct Pembeli_90486{
	
			char nama_90486[50];
			char hp_90486[50];
			int harga_90486;
			struct Tanggal_90486 tglbeli_90486;
};
	Pembeli_90486 data_pembeli[5];
	for(i=1; i<=2; i++)
	{
	cout<<"=========================================="<<endl;
	cout<<"\t DATA PEMBELIAN HP"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Nama Pembeli \t\t :";
	cin>>data_pembeli[i].nama_90486;
	cout<<"Merk & Model HP \t :";
	cin>>data_pembeli[i].hp_90486;
	cout<<"Harga HP \t\t :";
	cin>>data_pembeli[i].harga_90486;
	cout<<"Tanggal \t\t :";
	cin>>data_pembeli[i].tglbeli_90486.hari_90486;
	cout<<"bulan \t\t\t :";
	cin>>data_pembeli[i].tglbeli_90486.bulan_90486;
	cout<<"tahun \t\t\t :";
	cin>>data_pembeli[i].tglbeli_90486.tahun_90486;
	}
	
	

	
		cout<<"=========================================="<<endl;
		cout<<"\t DATA PEMBELIAN HP"<<endl;
		cout<<"=========================================="<<endl;
		
		
	
	for(i=1; i<=2; i++)
	{
		cout<<"Nama Pembeli \t\t :"<<data_pembeli[i].nama_90486<<endl;
		cout<<"Merk & Model HP \t :"<<data_pembeli[i].hp_90486<<endl;
		cout<<"Harga HP \t\t :"<<data_pembeli[i].harga_90486<<endl;
		cout<<"Tanggal Pembelian \t :"<<data_pembeli[i].tglbeli_90486.hari_90486<<("-")<<data_pembeli[i].tglbeli_90486.bulan_90486<<("-")<<data_pembeli[i].tglbeli_90486.tahun_90486<<endl;
		cout<<"=========================================="<<endl;
	}
}
