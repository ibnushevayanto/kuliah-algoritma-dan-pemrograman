#include <iostream>

using namespace std;

void newLine(){
	cout<<"\n";
}

int main(){
	char nama[50], kelas[10], hobi[30];
	
	cout<<"Masukkan Nama : ";
	cin.getline(nama, 50);
	newLine();
	
	cout<<"Masukkan Kelas : ";
	cin.getline(kelas, 10);
	newLine();
	
	cout<<"Masukkan Hobi : ";
	cin.getline(hobi, 30);
	newLine();
	
	cout<<"Halo Nama Saya Adalah "<<nama<<", Saya Dari Kelas "<<kelas<<", Dan Hobi Saya Adalah "<<hobi;
	
}
