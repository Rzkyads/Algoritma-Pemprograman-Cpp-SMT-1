/*//TUGAS 2
#include <iostream>

using namespace std;
void luas_lingkaran(int jari, float*Luas, float phi = 3.14)
{
    *Luas= phi*jari*jari;
}
int main()
{
    int r;
    float l;
    cout << "Masukkan jari jari = ";
    cin >> r;
    luas_lingkaran(r,&l);
    cout << "Luas Lingkaran adalah  = "<<l;
return 0;
}

#include <iostream>
using namespace std;
void hitung_nilai_rata2(float *rata)
{
    int i;
    float bil, ttl=0;
    do {
        cout << "masukkan bilangan  = ";cin >> bil;
        ttl = ttl + bil;
        i++;
    }while (bil != 9999);
    cout << "total = "<< ttl - 9999 << endl;
    *rata= (ttl -9999)/(i-1);
    cout << "Rata-rata  = "<< *rata << endl;
}
int main()
{
    float rata;
    hitung_nilai_rata2(&rata);
    return 0;
}

//TUGAS 2
#include <iostream>
using namespace std;
int luas_lingkaran(int jari, float*Luas)
{
    *Luas= 3.14*jari*jari;
}
int main()
{
    int r;
    float l;
    cout << "Masukkan jari jari = ";
    cin >> r;
    luas_lingkaran(r,&l);
    cout << "Luas Lingkaran adalah  = "<<l;
return 0;
}*/
//TUGAS 3
#include <iostream>
#include <math.h>
using namespace std;
float p;
int fungsi_penjumlahan (float a, float b){
return (a+b);
}
int fungsi_pengurangan (float a, float b){
return (a-b);
}
int fungsi_pembagian (float a, float b){
return (a/b);
}
int fungsi_perkalian (float a, float b){
return (a*b);
}
int fungsi_pangkat (float a, float b){
return pow (a,b);
}
int masukkan;
int main(){
int pilih;
char ulang;
    do{
    cout << "\tKALKULATOR" << endl;
    cout << "\t1. PENJUMLAN" << endl;
    cout << "\t2. PEGURANGAN" << endl;
    cout << "\t3. PEMBAGIAN" << endl;
    cout << "\t4. PERKALIAN" << endl;
    cout << "\t5. PANGKAT" << endl;
    cout << "\tMASUKKAN PILIHAN = ";cin >> pilih;
    switch(pilih){
    case 1:
        float a1, b1;
        cout << "\tMasukkan Bilangan Ke-1 = ";cin>>a1;
        cout << "\tMasukkan Bilangan Ke-2 = ";cin>>b1;
        cout << "\tHasil Dari Penjumlahan = " << fungsi_penjumlahan(a1, b1) << endl;
        break;
    case 2:
        float a2, b2;
        cout << "\tMasukkan Bilangan Ke-1 = ";cin>>a2;
        cout << "\tMasukkan Bilangan Ke-2 = ";cin>>b2;
        cout << "\tHasil Dari Pengurangan = " << fungsi_pengurangan(a2, b2) << endl;
        break;
    case 3:
        float a3, b3;
        cout << "\tMasukkan Bilangan Ke-1 = ";cin>>a3;
        cout << "\tMasukkan Bilangan Ke-2 = ";cin>>b3;
        cout << "\tHasil Dari Pembagian = " << fungsi_pembagian(a3, b3) << endl;
        break;
    case 4:
        float a4, b4;
        cout << "\tMasukkan Bilangan Ke-1 = ";cin>>a4;
        cout << "\tMasukkan Bilangan Ke-2 = ";cin>>b4;
        cout << "\tHasil Dari Perkalian = " <<fungsi_perkalian(a4, b4) << endl;
        break;
    case 5:
        float a5, b5;
        cout << "\tMasukkan Bilangan Ke-1 = ";cin>>a5;
        cout << "\tMasukkan Bilangan Ke-2 = ";cin>>b5;
        cout << "\tHasil Dari Pangkat = " <<fungsi_pangkat(a5, b5) << endl;
        break;
    default : cout << "\tMaaf Tidak Ada Pilihan \n";
    goto ulang;
    }
    ulang:
        cout << "\tApakah Ingin Mnegulangi lagi??"<<endl;
        cout << "\tKetik Y/ y Untuk mengulangi Dan T/t Untuk Mengakhiri    = ";
        cin >> ulang;
    }while (ulang == 'Y' || ulang == 'y');
    cout << endl;
    cout << "\tTerimakasih"<<endl;
return 0;
}
/*
//TUGAS 1
#include <iostream>
using namespace std;
char Hitung_ganji_genap(char bilangan)
{
    if (bilangan%2 == 0){
        cout << bilangan << " Merupakan Bilangan Genap";
    }else {
        cout << bilangan << " Merupakan Bilangan Ganjil";
    }}
int main(){
char bil;
    cout << "Masukkan Angka = ";
    cin >> bil;
    Hitung_ganji_genap(bil);
return 0;
}


//fungsi
#include <iostream>
using namespace std;
int s;
int hitung_keliling (int s){
    return 4*s;
    }
int hitung_luas (int s){
    return s*s;
    }
int masukkan;
int main (){
    cout << "\tMasukkan Panjang Sisi  = ";cin >> s;
    cout << "\tKeliling   : "<< hitung_keliling(s) << endl;
    cout << "\tLuas       : "<< hitung_luas(s) << endl;
return 0;
}



//prosedur
#include <iostream>
using namespace std;
int s;
void keliling_luas_persegi (int s){
    int luas = 4*s;
    int keliling = s*s;
    cout << "Keliling   : "<< luas << endl;
    cout << "Sisi       : "<< luas << endl;
}
int masukan;
int main (){
    cout << "Masukkan panjang sisi  = "; cin >> s;
    keliling_luas_persegi(s);

return 0;
}



#include <iostream>
using namespace std;
int bil1, bil2;
void banding (int a, int b){
    if (a > b){
        cout << a;
    }else if (a == b){
        cout << " TIDAK ADA ";
    }else{
        cout << b;
    }}
int main(){
    cout << "Masukkan bilangan 1    = "; cin >> bil1;
    cout << "Masukkan bilangan 2    = "; cin >> bil2;
    cout << "Bilangan yang lebih besar adalah   = ";
    banding (bil1, bil2);
return 0;
}

*/
