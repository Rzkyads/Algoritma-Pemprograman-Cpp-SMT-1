/*
//ARRAY 1 DIMENSI
#include <iostream>

using namespace std;

int main()
{
    int TabInt [10];
    int i;
    for (i=0; i<10; i++){
        TabInt[i]=i*1;
    }
    for (i=0; i<10; i++){
        cout << TabInt [i]<<endl;
    }
        return 0;
}


//ARRAY MULTIDIMENSI
#include <iostream>
using namespace std;
int main()
{
    int matriks [2][4] = {{1,2,3,4},{9,8,7,5}};
    int baris, kolom;
    for (baris=0; baris<2; baris++){
        for(kolom=0; kolom<4; kolom++)
    {
        cout << matriks [baris][kolom]<< "  ";
    }
    cout << endl;
    }
return 0;



//LATIHAN 1
#include<iostream>
using namespace std;
    string bln[]= {"JANUARI","FEBUARI","MARET","APRL","MEI","JUNI","JULI","AGUSTUS",
                    "SEPTEMBER","OKTOBER","NOVEMBER","DESEMBER"};
    int masukan;
    int main(){
    cout << "Masukkan Nomor Bulan   = ";
    cin >> masukan;
    cout << "Bulan Yang Anda Masukkan Adalah    = " <<bln[masukan-1];
return 0;
}


//LATIHAN 2
#include<iostream>
using namespace std;
string daftar_mahasiswa[40];
string nama;
int jml_mahasiswa, i;

int main(){

    cout << "Masukkan Jumlah Mahasiswa Yamg Akan Disimpan =  ";
    cin >> jml_mahasiswa;

    for (i=0; i<jml_mahasiswa; i++){
        cout << "Masukkan Nama Mahasiswa    = ";
        cin >> nama;
        daftar_mahasiswa[i]=nama;
    }
    cout << "Nama Mahasiswa Yang Sudah Anda Simpan Adalah   = "<<endl;
    for (i=0; i<jml_mahasiswa; i++){
        cout << daftar_mahasiswa[i] <<endl;
    }
return 0;
}
*/
//LATIHAN 3
#include<iostream>
using namespace std;
int daftar_bil[10] = {5,3,6,8,4,22,56,78,2,7};

int main(){
    int indeks;
    int maks = 0;
    for (indeks=0; indeks<10; indeks++){
        if(daftar_bil[indeks] > maks ){
            maks = daftar_bil[indeks];
        }
    }
    cout << "Nilai Maksimum  = "<<maks;

return 0;}

/*
#include <iostream>
using namespace std;
int A[3][5]={{2,2,3,4,5},{1,2,3,4,5},{2,9,4,6,7}};
int B[3][5]={{6,8,7,4,5},{3,7,4,5,9},{1,2,3,4,5}};
int C[3][5];
char x,y;

int main (){
    cout << "Matriks A  = " <<endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=4; y++){
            cout << A[x][y] << "    ";
        }
        cout << endl;
    }
    cout << endl << "Matriks B  = " <<endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=4; y++){
            cout << B[x][y] << "    ";
        }
        cout << endl;
    }
    cout << endl << "Matriks Penjumlahan    = " <<endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=4; y++){
            C [x][y]= A [x][y] + B [x][y];
            cout << A [x][y] << " + " << B [x][y] << " = " << C[x][y]<< "   ";
        }
        cout << endl;
    }

return 0;
}

//TUGAS 1
#include <iostream>
using namespace std;
int dafbil[5];
int main(){
    for(int i=0; i<5; i++){
        cout << "Masukkan Nilai ke-"<< i+1 << "=";
        cin >> dafbil[i];
    }
    cout << "Bilangan Ganjil Adalah     = "<< endl;
    for (int i=0; i<5; i++){
        if (dafbil[i] % 2 == 1){
            cout << dafbil[i]<<endl;
        }
    }
return 0;
}





// TUGAS 3
#include <iostream>
using namespace std;

int main(){
    int no[5]= {1,2,3,4,5};
    int masukan;
    cout << "Masukkan Bilangan   = ";
    cin >> masukan;
    cout << "Bilangan yang tersimpan diurutan array    = " <<no[masukan-1];
return 0;
}




//TUGAS 4

#include <iostream>
using namespace std;
int A [3][3] = {{2,4,6}, {3,5,7}, {2,5,8}};
int B [3][3] = {{1,3,5}, {2,9,5}, {4,5,6}};
int C [3][3];
int x,y;

int main(){
    cout << "Matriks A  = "<<endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=2; y++){
            cout << A [x][y]<< "    ";
        }
        cout << endl;
    }
    cout << endl << "Matriks B  = "<<endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=2; y++){
            cout << B [x][y]<< "    ";
        }
        cout << endl;
    }
    cout << endl << "Matriks Penjumlahan    = "<<endl;
    for (x=0; x<=2; x++){
        for (y=0; y<=2; y++){
                C[x][y] = A [x][y] + B [x][y];
                cout << A[x][y] << "+" << B[x][y] << "="<< C[x][y]<< "  ";
        }
        cout << endl;
    }
    cout << endl << "Matriks Pengurangan    = "<<endl;
    for (x=0; x<3; x++){
        for (y=0; y<3; y++){
            C[x][y] = A [x][y] - B [x][y];
            cout << A[x][y] << "-" << B[x][y] << "="<< C[x][y]<< "  ";
        }
        cout << endl;
    }

return 0;
}
*/
//TUGAS 2
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    int daftar[10], nomor, minim, maks, bil, ulg;
    float total=0, rata;
    char pilih, ulang;

    do{
        cout << "\t######  MENU    #####   " <<endl;
        cout << "\t1. Input Array         " <<endl;
        cout << "\t2. Tampil Array        " <<endl;
        cout << "\t3. Cari Nilai Minimum  " <<endl;
        cout << "\t4. Cari Nilai Maksimum " <<endl;
        cout << "\t5. Hitung Rata-Rata    " <<endl;
        cout << "\tMasukkan Pilihan      = ";cin>>nomor;

            switch(nomor){
            case 1:
                for (int i=0; i<10; i++){
                    cout << "\tMasukkan Data ke- " << i+1 << " = ";
                    cin >> bil;
                    daftar[i] = bil;
                };
                break;
            case 2:
                for (int i=0; i<10; i++){
                    cout << "\tData ke-" << i+1 << " = " << daftar[i] << endl;
                };
                break;
            case 3:
                minim = daftar[0];
                for (int i=0; i<10; i++){
                    if (minim > daftar[i]){
                        minim = daftar[i];
                    }}
                    cout << "\tData Minimal Adalah    = "<< minim;
                    cout << endl;
                break;
            case 4:
                maks = daftar[0];
                for (int i=0; i<10; i++){
                    if (daftar[i] > maks){
                        maks = daftar[i];
                    }}
                    cout << "\tData Maksimum Adalah  = "<< maks;
                    cout << endl;
                break;
            case 5:
                for(int i=0; i<10; i++ ){
                    rata = rata + daftar[i];
                }rata=rata/10;
                cout << "\tRata-Rata Data Adalah  = "<<rata<< endl;
                cout << endl;
                break;

            default : cout << "\tMaaf Data Yang Anda Inputkan Tidak Tersedia " << endl;
               goto ulang;}

        ulang:
        cout << "\tApakah Anda Ingin Mencoba lagi?? "<<endl;
        cout << "\tKetik Y / y untuk mengulang Ketik T / t Untuk selesai    = ";
        cin >>ulang;
        }while (ulang == 'Y' || ulang == 'y');
        cout << endl;
        cout << "\tTerimakasih"<<endl;
return 0;
}



