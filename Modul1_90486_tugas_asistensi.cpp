#include <iostream>
#include <string>


using namespace std;

main(){
	int i,x;
	
	struct Tanggal_lahir_90486{
	
				int hari_90486;
				int bulan_90486;
				int tahun_90486;
	};
		
	struct Warga_90486{
	
			int nik_90486;
			char nama_90486[50];
			char agama_90486[50];
			struct Tanggal_lahir_90486 tgl_90486;
};
	Warga_90486 data_warga[5];
	
cout<<"==============================="<<endl;
cout<<"==== Bank Data Warga RT 4 ====="<<endl;
cout<<"==============================="<<endl;
  cout<<endl;
	cout<< "Masukkan Jumlah Data = ";
	cin>>x;
	cout << endl;
	for(i=0; i<x; i++)
	{
	cout<<"=========================================="<<endl;
	cout<<"\t DATA Warga RT 4"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Nik Warga \t :";
	cin>>data_warga[i].nik_90486;
	cout<<"Nama Warga \t :";
	cin>>data_warga[i].nama_90486;
	cout<<"Agama \t\t :";
	cin>>data_warga[i].agama_90486;
	cout<<"Tanggal Lahir \t :";
	cin>>data_warga[i].tgl_90486.hari_90486;
	cout<<"bulan Lahir\t :";
	cin>>data_warga[i].tgl_90486.bulan_90486;
	cout<<"tahun Lahir \t :";
	cin>>data_warga[i].tgl_90486.tahun_90486;
	}
	
	

	
		cout<<"=========================================="<<endl;
		cout<<"\t  DATA Warga RT 4"<<endl;
		cout<<"=========================================="<<endl;
		
		
	
	for(i=0; i<x; i++)
	{
		cout<<"Nik warga \t :"<<data_warga[i].nik_90486<<endl;
		cout<<"Nama Warga\t :"<<data_warga[i].nama_90486<<endl;
		cout<<"Agama\t\t :"<<data_warga[i].agama_90486<<endl;
		cout<<"Tanggal lahir \t :"<<data_warga[i].tgl_90486.hari_90486<<("-")<<data_warga[i].tgl_90486.bulan_90486<<("-")<<data_warga[i].tgl_90486.tahun_90486<<endl;
		cout<<"=========================================="<<endl;
	}
}

