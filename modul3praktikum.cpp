#include <iostream>
using namespace std;
void pilih();

struct dataBarang{
	string namaPembeli_90486;
	string tanggalPembeli_90486;
	string merkHp_90486;
	string namaBarang_90486;
	int hargaBarang_90486;
	string salesBarang_90486;
  


  dataBarang *prev;
  dataBarang *next;
};

dataBarang *head, *tail, *cur, *newNode, *del;
int maksimalBarang = 5;

void createBarang(string namaPembeli_90486, string tanggalPembeli_90486, string merkHp_90486,string namaBarang_90486, int hargaBarang_90486, string salesBarang_90486){
  head = new dataBarang();
  head->namaPembeli_90486 = namaPembeli_90486;
  head->tanggalPembeli_90486 = tanggalPembeli_90486;
  head->merkHp_90486 = merkHp_90486;
  head->namaBarang_90486 = namaBarang_90486;
  head->hargaBarang_90486 = hargaBarang_90486;
  head->salesBarang_90486 = salesBarang_90486;
  head->prev = NULL;
  head->next = NULL;
  tail = head;
}

int countBarang()
{
  if( head == NULL ){
    return 0;
  }else{
    int banyak = 0;
    cur = head;
    while( cur != NULL ){
      cur = cur->next;
      banyak++;
    }
    return banyak;
  }
}


bool isFullBarang()
{
  if( countBarang() == maksimalBarang ){
    return true;
  }else{
    return false;
  }
}

bool isEmptyBarang()
{
  if( countBarang() == 0 ){
    return true;
  }else{
    return false;
  }
}

void pushBarang( string namaPembeli_90486, string tanggalPembeli_90486, string merkHp_90486,string namaBarang_90486, int hargaBarang_90486, string salesBarang_90486){

  if( isFullBarang() ){
    cout << "Stack Full!!" << endl;
  }else{
    if( isEmptyBarang() ){
      createBarang(namaPembeli_90486,tanggalPembeli_90486,merkHp_90486,namaBarang_90486, hargaBarang_90486, salesBarang_90486);
    }else{
      newNode = new dataBarang();
      newNode->namaPembeli_90486 = namaPembeli_90486;
      newNode->tanggalPembeli_90486 = tanggalPembeli_90486;
      newNode->merkHp_90486 = merkHp_90486;
      newNode->namaBarang_90486 = namaBarang_90486;
      newNode->hargaBarang_90486 = hargaBarang_90486;
      newNode->salesBarang_90486 = salesBarang_90486;
      newNode->prev = tail;
      tail->next = newNode;
      newNode->next = NULL;
      tail = newNode;
    }
  }

}

void popBarang()
{
  del = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete del;
}


void displayBarang()
{
  if( isEmptyBarang() ){
    cout << "Data Barang kosong" << endl;
  }else{
    cout << "\n\nList -" << endl;
    cur = tail;
    while( cur != NULL ){
      cout << "Data Barang : " <<cur->namaPembeli_90486<< " - " <<cur->tanggalPembeli_90486<< " - " <<cur->merkHp_90486<< " - " << cur->namaBarang_90486 << " - Rp." << cur->hargaBarang_90486 << " - " <<cur->salesBarang_90486 << endl;
      cur = cur->prev;
    }
  }
}

void peekBarang(int posisi){

  if( isEmptyBarang() ){
    cout << "Data Barang kosong" << endl;
  }else{
    int nomor = 1;
    cur = tail;
    while( nomor < posisi ){
      cur = cur->prev;
      nomor++;
    }
    cout << "Data Barang Posisi ke-" << posisi << " : " <<cur->namaPembeli_90486<< " - " <<cur->tanggalPembeli_90486<< " - " <<cur->merkHp_90486<< " - " << cur->namaBarang_90486 << " - Rp." << cur->hargaBarang_90486 << " - " <<cur->salesBarang_90486<<endl;
  }

}

void changeBarang(string namaPembeli_90486, string tanggalPembeli_90486, string merkHp_90486,string namaBarang_90486, int hargaBarang_90486, string salesBarang_90486,int posisi){

  if( isEmptyBarang() ){
    cout << "Data Barang kosong" << endl;
  }else{
    int nomor = 1;
    cur = tail;
    while( nomor < posisi ){
      cur = cur->prev;
      nomor++;
    }
    cur->namaPembeli_90486 = namaPembeli_90486;
    cur->tanggalPembeli_90486 = tanggalPembeli_90486;
    cur->merkHp_90486 = merkHp_90486;
    cur->namaBarang_90486 = namaBarang_90486;
    cur->hargaBarang_90486 = hargaBarang_90486;
    cur->salesBarang_90486 = salesBarang_90486;
  }

}

int Menu() {
	int Pilihan;
	cout << "== Stack Double link list =="<< endl;
	cout << "Menu :"<< endl;
	cout << endl;
	cout << "1. Memasukkan data\n"
		<< "2. menghapus data\n"
		<< "3. keluar\n";
	cout << "Masukkan pilihan anda :";
	cin >> Pilihan;
	return Pilihan;
}

int main(){

	
  pushBarang("budi","20-05-2022","samsung","samsung A03", 500000,"Agus");
  pushBarang("rini","20-05-2022","samsung","samsung A04", 600000,"Agus");
  pushBarang("mia","20-05-2022","samsung","samsung A05", 700000,"Agus");
  pushBarang("boni","20-05-2022","samsung","samsung A06", 800000,"Agus");
  pushBarang("hamzah","20-05-2022","samsung","samsung A07", 900000,"Agus");
  displayBarang();
  pushBarang("badruz","20-05-2022","samsung","samsung A08", 1000000,"Agus");
  
  
  displayBarang();
  cout << "Apakah data barang full ? : " << isFullBarang() << endl;
  cout << "Apakah data barang kosong ? : " << isEmptyBarang() << endl;
  cout << "Jumlah data barang : " << countBarang() << endl;

  popBarang();
  displayBarang();

  peekBarang(3);

}


