#include <iostream>
using namespace std;
int pil;
void pilih();

struct dataWarga{
	string nama_90486;
	string tanggalLahir_90486;
	string tempatLahir_90486;
	string agama_90486;
	string jenisKelamin_90486;
	int nik_90486;
  


  dataWarga *prev;
  dataWarga *next;
};

dataWarga *head, *tail, *cur, *newNode, *del;
int maksimalBarang = 5;

void createBarang(string nama_90486, string tanggalLahir_90486, string tempatLahir_90486,string agama_90486, string jenisKelamin_90486, int nik_90486){
  head = new dataWarga();
  head->nama_90486 = nama_90486;
  head->tanggalLahir_90486 = tanggalLahir_90486;
  head->tempatLahir_90486 = tempatLahir_90486;
  head->agama_90486 = agama_90486;
  head->jenisKelamin_90486 = jenisKelamin_90486;
  head->nik_90486 = nik_90486;
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

void pushBarang( string nama_90486, string tanggalLahir_90486, string tempatLahir_90486,string agama_90486, string jenisKelamin_90486, int nik_90486){

  if( isFullBarang() ){
    cout << "Stack Full!!" << endl;
  }else{
    if( isEmptyBarang() ){
      createBarang(nama_90486,tanggalLahir_90486,tempatLahir_90486,agama_90486, jenisKelamin_90486, nik_90486);
    }else{
      newNode = new dataWarga();
      newNode->nama_90486 = nama_90486;
      newNode->tanggalLahir_90486 = tanggalLahir_90486;
      newNode->tempatLahir_90486 = tempatLahir_90486;
      newNode->agama_90486 = agama_90486;
      newNode->jenisKelamin_90486 = jenisKelamin_90486;
      newNode->nik_90486 = nik_90486;
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
    cout << "Data Warga kosong" << endl;
  }else{
    cout << "\n\nList -" << endl;
    cur = tail;
    while( cur != NULL ){
      cout << "Data Warga : " <<cur->nama_90486<< " - " <<cur->tanggalLahir_90486<< " - " <<cur->tempatLahir_90486<< " - " << cur->agama_90486 << " - " << cur->jenisKelamin_90486 << " - " <<cur->nik_90486 << endl;
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
    cout << "Data warga Posisi ke-" << posisi << " : " <<cur->nama_90486<< " - " <<cur->tanggalLahir_90486<< " - " <<cur->tempatLahir_90486<< " - " << cur->agama_90486 << " - " << cur->jenisKelamin_90486 << " - " <<cur->nik_90486<<endl;
  }

}

void changeBarang(string nama_90486, string tanggalLahir_90486, string tempatLahir_90486,string agama_90486, int jenisKelamin_90486, int nik_90486,int posisi){

  if( isEmptyBarang() ){
    cout << "Data Barang kosong" << endl;
  }else{
    int nomor = 1;
    cur = tail;
    while( nomor < posisi ){
      cur = cur->prev;
      nomor++;
    }
    cur->nama_90486 = nama_90486;
    cur->tanggalLahir_90486 = tanggalLahir_90486;
    cur->tempatLahir_90486 = tempatLahir_90486;
    cur->agama_90486 = agama_90486;
    cur->jenisKelamin_90486 = jenisKelamin_90486;
    cur->nik_90486 = nik_90486;
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

	
  pushBarang("budi","20-05-2022","surabaya","islam", "pria",1242424);
  pushBarang("rini","20-05-2022","surabaya","islam", "pria",1242424);
  pushBarang("mia","20-05-2022","surabaya","islam", "pria",1242424);
  pushBarang("boni","20-05-2022","surabaya","islam", "pria",1242424);
  pushBarang("hamzah","20-05-2022","surabaya","islam", "pria",1242424);
  displayBarang();
  pushBarang("qewwe","20-05-2022","surabaya","islam", "pria",1242424);
  
  
  displayBarang();
  cout << "Apakah data barang full ? : " << isFullBarang() << endl;
  cout << "Apakah data barang kosong ? : " << isEmptyBarang() << endl;
  cout << "Jumlah data barang : " << countBarang() << endl;

  popBarang();
  displayBarang();

  peekBarang(3);

}


