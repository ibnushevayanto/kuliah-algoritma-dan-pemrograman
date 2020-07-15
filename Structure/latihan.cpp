#include <iostream>

using namespace std;

struct penduduk
{
	char nama[50];
	int umur;
} ibnu, firman;

void newLine(){
	cout<<"\n";
}

int main(){
	cout<<" ======= Penduduk Pertama =======";
	newLine();
	
	cout<<" Nama : ";
	cin.getline(ibnu.nama, 50);
	newLine();
	
	cout<<" Umur : ";
	cin>>ibnu.umur;
	newLine();
	
	cout<<" ======= Penduduk Pertama =======";
	newLine();
	cout<<" Nama : "<<ibnu.nama;
	newLine();
	cout<<" Umur : "<<ibnu.umur;
	
	return 0;
}
