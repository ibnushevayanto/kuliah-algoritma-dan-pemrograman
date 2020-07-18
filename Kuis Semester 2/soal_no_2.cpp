#include <iostream>

using namespace std;

void newLine(){
	cout<<endl;
}

struct Arsip{
	int data;
};

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void sortingKebawah(int data[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++)  
        if (data[j] > data[j+1])  
            swap(&data[j], &data[j+1]);  
} 

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++) cout << " " << arr[i] << " "; 
}

int main()
{
	bool run_app = true;
	int perintah, max_jumlah_data, i;
	
	newLine();
	cout<<" Isi maximal jumlah data yang anda inginkan : "; cin>>max_jumlah_data; newLine();
	
	cout<<" ----------MENU PILIHAN----------"; newLine();
    cout<<" 1. Masukan Data"; newLine();
    cout<<" 2. Simpan Data"; newLine();
    cout<<" 3. Baca Data"; newLine();
    cout<<" 4. Tampilkan Data Terkini"; newLine();
    cout<<" 5. Urutkan Data Secara Menaik"; newLine();
    cout<<" 6. Tampilkan Data Terurut"; newLine();
    cout<<" 7. Keluar"; newLine();
    cout<<" --------------------------------"; newLine();
	
	int data[max_jumlah_data], restoreData[max_jumlah_data];
	
	Arsip arsip[max_jumlah_data];
	
	do{ 
        cout<<" Masukkan Perintah : ";cin>>perintah; newLine();
        
        if(perintah == 7 || perintah > 7) run_app = false;
		
		if(perintah == 1){
			
			cout<<" ----------Menu No 1----------"; newLine();newLine();
			
			for(i = 0; i < max_jumlah_data; i++){
				cout<<" Masukkan data ke "<<i + 1<<" : "; cin>>data[i]; newLine();
			}
			
			cout<<" Proses Input Data Berhasil !"; newLine(); newLine();
			cout<<" -----------------------------"; newLine();
			
		} else if(perintah == 2) {
			
			cout<<" ----------Menu No 2----------"; newLine();newLine();
			
			for(i = 0; i < max_jumlah_data; i++){
				arsip[i].data = data[i];
				restoreData[i] = data[i];
			}
	
			cout<<" Proses Pengarsipan Berhasil !"; newLine(); newLine();
			cout<<" -----------------------------"; newLine();
			
		} else if(perintah == 3) {
			
			cout<<" ----------Menu No 3----------"; newLine();newLine();
			
			if (arsip[0].data != data[0]) {
				cout<<" Data belum diarsipkan atau belum diinput mohon dicheck kembali !"; newLine(); newLine();
			} else {
				cout<<" Data sudah berhasil dibaca !";newLine(); newLine();
			}
			
			cout<<" -----------------------------"; newLine();
			
		} else if(perintah == 4) {
			
			cout<<" ----------Menu No 4----------"; newLine(); newLine();
			
			if (arsip[0].data != data[0]) {
				
				cout<<" Data belum diarsipkan atau belum diinput mohon dicheck kembali !"; newLine(); newLine();
				
			} else {
				
				printArray(restoreData, max_jumlah_data); newLine();
				
				cout<<" Data sudah berhasil ditampilkan !";newLine(); newLine();
			}
		
			cout<<" -----------------------------"; newLine();
		} else if(perintah == 5) {
			
			cout<<" ----------Menu No 5----------"; newLine(); newLine();
			
			if (arsip[0].data != data[0]) {
				
				cout<<" Data belum diarsipkan atau belum diinput mohon dicheck kembali !"; newLine(); newLine();
				
			} else {
				
				sortingKebawah(data, max_jumlah_data);
				
				for(i = 0; i < max_jumlah_data; i++){
					arsip[i].data = data[i];
				}
				
				cout<<" Data sudah berhasil diurutkan !";newLine(); newLine();
			}
		
			cout<<" -----------------------------"; newLine();
			
		} else if(perintah == 6) {
			
			cout<<" ----------Menu No 6----------"; newLine(); newLine();
			
			if (arsip[0].data != data[0]) {
				
				cout<<" Data belum diarsipkan atau belum diinput mohon dicheck kembali !"; newLine(); newLine();
				
			} else {
				
				printArray(data, max_jumlah_data); newLine();
				
				cout<<" Berhasil menampilkan data yang sudah diurut !";newLine(); newLine();
			}
		
			cout<<" -----------------------------"; newLine();
			
		}
   
	}while(run_app);
   
   return 0;
}
