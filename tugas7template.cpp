#include <iostream>
using namespace std;

class Kendaraan{
	private:
		//TO DO <buat atribut> 
	public:
		//TO DO 
		string getNama(){
			//TO DO <buat isi fungsi> 
		}
		virtual int getBiaya(int jarak){
			//TO DO <buat isi fungsi>
		}
};

class Motor : public Kendaraan{
	public:
		int getBiaya(int jarak){
			//TO DO <buat isi fungsi>
		}
};

class Mobil : public Kendaraan{
	public:
		int getBiaya(int jarak){
			//TO DO <buat isi fungsi>
		}
};

class Pesawat : public Kendaraan{
	public:
		int getBiaya(int jarak){
			//TO DO <buat isi fungsi>
		}
};

class Person{
	public:
		//TO DO <buat atribut>
	public:
		string pergi(string asal, string tujuan, int jarak){
			//TO DO <buat isi fungsi>
		}	
		string getNama(){
			//TO DO <buat isi fungsi>
		}
		void setKendaraan(Kendaraan kendaraan){
			//TO DO <buat isi fungsi>
		}
};

int main(){
	Person p;
	cout << "silahkan masukan nama: ";
	getline(cin,p.nama);
	cout << "silahkan masukkan kendaraan: ";
	string merek;
	cin >> merek; 
	cin.get();
	p.kendaraan = new Kendaraan(merek);
	string asal, tujuan;
	int jarak;
	cout << "silahkan masukkan posisi awal: ";
	getline(cin,asal);
	cout << "silahkan masukkan posisi tujuan: ";
	getline(cin,tujuan);
	cout << "silahkan masukkan jarak: ";
	cin >> jarak;
	cin.get();
	string tampilkanHasil = p.pergi(asal,tujuan,jarak);
	cout << tampilkanHasil;
}
