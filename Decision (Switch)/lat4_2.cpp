#include <iostream>
using namespace std;

main()
{
    string kode;
    int parseKode, keliling, luas;
    
    cout<<"==========================================\n";
    cout<<"Kode S [Untuk Menghitung Luas Dan Kelililing Segitiga]\nKode P [Untuk Menghitung Luas Dan Keliling Persegi Panjang]\nKode L [Untuk Menghitung Luas Dan Keliling Lingkaran]\n\nPilih Kode : ";
	cin>>kode;
	cout<<"==========================================\n";
	
	parseKode = (kode == "S" || kode == "s") ? 1 : (kode == "P" || kode == "p") ? 2 : (kode == "L" || kode == "l") ? 3 : 0;
	
   switch(parseKode){
   	case 1:
   		cout<<"Anda Memilih Perhitungan Untuk Seigitiga Silahkan Input Data Yang Diperlukan \n\n";
   		int alas, simi, tinggi;
   		
   		cout<<"Input Alas : ";
   		cin>>alas;
   		cout<<"Input Sisi Miring : ";
   		cin>>simi;
   		cout<<"Input Tinggi : ";
   		cin>>tinggi;
   		
   		keliling = alas + simi + tinggi;
   		
   		luas = (1 * alas * tinggi) / 2;
   		
   		cout<<"\n========== Hasil ===========\n\n";
   		cout<<"Luas Dari Segitiga Adalah : "<<luas<<"\n";
   		cout<<"Keliling Dari Segitiga Adalah : "<<keliling;
   		
   		break;
   	
   	case 2:
   		cout<<"Anda Memilih Perhitungan Untuk Persegi Panjang Silahkan Input Data Yang Diperlukan \n\n";
   		int panjang, lebar;
   		
   		cout<<"Input Panjang : ";
   		cin>>panjang;
   		cout<<"Input Lebar : ";
   		cin>>lebar;
   		
   		keliling = 2 * (panjang + lebar);
   		
   		luas = panjang * lebar;
   		
   		cout<<"\n========== Hasil ===========\n\n";
   		cout<<"Luas Dari Persegi Panjang Adalah : "<<luas<<"\n";
   		cout<<"Keliling Dari Persegi Panjang Adalah : "<<keliling;
   		
   		break;
   	
	case 3:
		cout<<"Anda Memilih Perhitungan Untuk Lingkaran Silahkan Input Data Yang Diperlukan \n\n";
   		int jariJari, diameter;
   		cout<<"Input Jari Jari : ";
   		cin>>jariJari;
   		
   		diameter = 2 * jariJari;
   		
   		if (jariJari % 7 == 0) { 
		   keliling = 22 * (diameter / 7);
		   luas = 22 * (jariJari ^ 2 / 7);
		}else{
			keliling = 3.14 * diameter;
			luas = 3.14 * (jariJari ^ 2);
		} 
   		
   		cout<<"\n========== Hasil ===========\n\n";
   		cout<<"Luas Dari Lingkaran Adalah : "<<luas<<"\n";
   		cout<<"Keliling Dari Lingkaran Adalah : "<<keliling;
   		
   		break;
		
	default: 
		cout<<"Kode Salah";
		break;			
	}
    
}
