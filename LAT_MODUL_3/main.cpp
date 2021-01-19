#include <iostream>
using namespace std;
int main () {
    int nilai;
        cout << "MASUKKAN SEBUAH BILANGAN BULAT     = ";
        cin >> nilai;
        if (nilai > 0)
            cout << "NILAI YANG ANDA MASUKKAN "
                 << "ADALAH BILANGAN POSITIF ";
        return 0;
}


#include <iostream>
using namespace std;
int main (){
    int bil;
    cout << "Masukkan Bilangan Bulat"
         << "Yang Akan Diperiksa    = ";
    cin >> bil;

        if (bil % 2 == 0){
            cout << bil << " Adalah Genap";
        }
        else {
            cout << bil << " Bilangan Ganjil";
        }
return 0;
}


#include <iostream>
using namespace std;
int main (){
    int bil;
        cout << "Masukkan Bilangan Bulat    = ";
        cin >> bil;

        if (bil >0){
            cout <<bil<< "Adalah Bilangan POSITIF";
        }else if(bil <0){
            cout <<bil<< "Adalah Bilangan NEGATIF";
        }else {
            cout <<bil<< "Anda Memasukkan Bilangan NOL";
        }
return 0;
}


#include <iostream>
using namespace std;
int main(){
    int nohari;

        cout << "Masukan Nomor Hari 1...7   = ";
        cin >> nohari;

    switch (nohari){
        case 1:
            cout << "Hari ke-" <<nohari<< " adalah Minggu";
            break;
        case 2:
            cout<< "Hari ke-" <<nohari<< " adalah Senin";
            break;
        case 3:
            cout<< "Hari ke-" <<nohari<< " adalah Selasa";
            break;
        case 4:
            cout<< "Hari ke-" <<nohari<< " adalah Rabu";
        break;
        case 5:
            cout<< "Hari ke-" <<nohari<< " adalah Kamis";
        break;
        case 6:
            cout<< "Hari ke-" <<nohari<< " adalah Jumat";
        break;
        case 7:
            cout<< "Hari ke-" <<nohari<< " adalah Sabtu";
        break;
        default:
            cout<< "Tidak Ada pilihan untuk hari ke-" <<nohari;
        }
return 0;
}


#include <iostream>
using namespace std;
int main (){
    int suhu;
        cout << "Masukkan Besaran Suhu  : ";
        cin >> suhu;
        //Melakukan Pengecekan suhu dengan percabangan

        if (suhu <= 0){ //jika suhu air yang di masukkan kurag dari 0 aka output akan menghasilkan air akan menjadi es
            cout << "pada suhu " <<suhu<< " derajat celcius, air akan menjadi es ";
        } else if ((suhu >0 )&& (suhu<100)){ //jika besaran suhu yang di masukkan lebih dari 0-100 maka air akan mendidih
            cout << "pada suhu " <<suhu<< " derajat celcius, air akan mendidih ";
        } else {//dan jika besaran suhu yang di masukkan lebih dari 100 maka air akan menguap
            cout << "pada suhu " <<suhu<< " derajat celcius, air akan menguap";
        }
return 0;
}

#include <iostream>
using namespace std;
int main(){
    int suhu;
    cout << "masukkan suhu ruangan  = ";
    cin >> suhu;

    if (suhu <=16){
            cout << "pada suhu " << suhu << " derajat celcius suhu dingin";
        } else if (( suhu >16 )&& (  suhu <36)){
            cout << "pada suhu " << suhu << " derajat celcius suhu normal ";
        } else {
            cout << "pada suhu " << suhu << " derajat celcius suhu panas";
        }
return 0;
}


#include <iostream>
using namespace std;
int main(){
    int pilih;
    float sisi, jari, tinggi;
    float isi_sisi, luas_lingkaran, isi_silinder;

        cout << "########## M E N U ##########" << endl;
        cout << " 1. Menghitung Isi Kubus " << endl;
        cout << " 2. Menghitung Luas Lingkaran " << endl;
        cout << " 3. Menghitung Isi Silinder " << endl;
        cout << " Pilih Nomor (1-3)  = ";
        cin >> pilih;

        switch (pilih){
        case 1:
            cout << " Masukkan panjang sisi kubus    = ";
            cin >> sisi;
            isi_sisi = sisi * sisi * sisi;
            cout << " Isi kubus = "<<isi_sisi;
            break;
        case 2:
            cout << " Masukan Jari-Jari Lingkaran   = ";
            cin >> jari;
            luas_lingkaran = 3.14 * jari * jari;
            cout << " Luas lingkaran = " << luas_lingkaran;
            break;
        case 3:
            cout << " Masukkan Jari-Jari Lingkaran      = ";
            cin >> jari;
            cout << " Masukkan Tinggi Silinder   = ";
            cin >> tinggi;
            isi_silinder = 3.14 * jari * jari * tinggi;
            cout << " Isi Silinder  = "<< isi_silinder;
            break;
        }
return 0;
}

//TUGAS 1
#include <iostream>
using namespace std;
int main(){
    char vokal;
    cout << "Masukkan Huruf Vokal   : ";
    cin >> vokal;

    if (vokal=='A'||vokal=='a'||vokal=='I'||vokal=='i'||vokal=='U'||vokal=='u'||
             vokal=='E'||vokal=='e'||vokal=='E'||vokal=='O'||vokal=='o'){
    cout << vokal << " Huruf Vokal ";
             }else {
            cout << vokal << " Huruf Konsonan ";
        }
return 0;
}


//TUGAS 2
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a, b;
    float hasil;

        cout << "Masukkan Bilangan Yang Akan DiBagi = ";
        cin >> a;
        cout << "Masukkan bilangan Pembagi  = ";
        cin >> b;
        hasil = a/b;
            if (b > 0){
                cout.precision(3);
                cout << "Hasil Bagi = "<< hasil << endl;
            }else {
                cout<< "Tidak Boleh 0 "<< endl;
                }
return 0;
}



//TUGAS 3
#include<iostream>

using namespace std;
int main(){
    int pilih;
    cout << "---MENU MENGHITUNG BIAYA OPRASI---" <<endl;
    cout << " 1. Hitung Biaya Oprasi Mata "<<endl;
    cout << " 2. Hitung Biaya Oprasi Jantung "<<endl;
    cout << endl;
    cout << " Masukkan Pilihan Anda     : ";
    cin >> pilih;

        if (pilih ==1){
            cout<< "##### Jenis Penyakit Mata #####" <<endl;
            cout<<endl;
            cout<< "1. Katarak "<<endl;
            cout<< "2. Plus/minus "<<endl;
            cout<< "3. Silinder "<<endl;
            cout<<endl;
            cout<< " Masukkan Pilihan Anda      : ";
            cin>>pilih;

                switch(pilih){
                case 1:
                    cout << " Biaya Oprasi Mata Katarak =Rp.7.500.000";
                    break;
                case 2:
                    cout << " Biaya Oprasi Mata Plus/Minus =Rp.5.000.000";
                    break;
                case 3:
                    cout << " Biaya Oprasi Mata Silinder =Rp.4.000.000";
                    break;
                }}
        else if (pilih){
            cout<< "##### Jenis Penyakit Jantung #####" <<endl;
            cout<<endl;
            cout<< " 1. Jantung Koroner "<<endl;
            cout<< " 2. Katup Jantung "<<endl;
            cout<< " 3. Otot jantung "<<endl;
            cout<<endl;
            cout<< " Masukkan Pilihan Anda  = ";
            cin>>pilih;

                switch (pilih){
                case 1:
                    cout << " Biaya Oprasi Jantung Koroner =Rp.500.000";
                    break;
                case 2:
                    cout << " Biaya Oprasi Katup Jantung =Rp.3.500.000";
                    break;
                case 3:
                    cout << " Biaya Oprasi Otot Jantung =Rp.4.500.000";
                    break;
                }}


return 0;
}