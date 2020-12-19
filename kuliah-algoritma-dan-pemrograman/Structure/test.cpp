#include<iostream>
#include<iomanip>

using namespace std;

//struct profile
//{
//	char name[50];
//	wchar_t alamat;
//	bool jenis_kelamin;
//	char telepon[15];
//}

main(){
	bool run_app = true;
	int jumlah_array = 0;
	int arr_profile[jumlah_array];
	
	do{
		cout<<"Masukkan Angka : "; cin >> arr_profile[jumlah_array]; cout<<"\n";
		cout<<arr_profile[jumlah_array]<<"\n";
		cout<<"Again ? : "; cin>>run_app;
	}while(run_app);
}
