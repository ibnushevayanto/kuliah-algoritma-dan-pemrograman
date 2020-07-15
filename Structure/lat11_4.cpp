#include <iostream>
#include<stdio.h>

using namespace std;

struct Profile
{
	char nama[100];
	char alamat[250];
	char no_telepon[15];
	char jenis_kelamin[2];
};

void endLine(){
	cout<<endl;
}

main()
{
	int jumlah_data;
	bool run_app = true;
	
	cout<< "Iput Maximal Data : "; cin>>jumlah_data; endLine();
	
	Profile data[jumlah_data + 1];
	
	int index = 0;
	
	do{
		cin.getline(data[index].nama, 99);
		cout<< "Masukkan Nama Siswa: "; cin.getline(data[index].nama, 99); endLine();
		cout<< "Masukkan Alamat Siswa: "; cin.getline(data[index].alamat, 249); endLine();
		cout<< "Masukkan No Telepon Siswa: "; cin.getline(data[index].no_telepon, 14); endLine();
		cout<< "Masukkan Jenis Kelamin Siswa: "; cin.getline(data[index].jenis_kelamin, 14); endLine();
		
		endLine();
		
		cout<< "Nama Siswa : "<<data[index].nama; endLine();
		cout<< "Alamat Siswa : "<<data[index].alamat; endLine();
		cout<< "No Telepon Siswa : "<<data[index].no_telepon; endLine();
		cout<< "Jenis Kelamin Siswa : "<<data[index].jenis_kelamin; endLine();
		
		endLine();
		
		cout<<"Mau tambah data lagi [1 (Yes) / 0 (No)]: "; cin>>run_app; endLine();
		endLine();
		
		index++;
	}while(run_app);
	
};
