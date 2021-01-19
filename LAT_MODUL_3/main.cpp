/*#include <iostream>
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

#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

const int diskon = 25000;
int main(){
	char nama[50], menu[20], ukuran[20],kembali;
	int hargamart, kode, kode2, banyak, hargaukr, hargaitm, bonus,
        bayar, kurang, kembalian, total;
	bool saldo;

	do{
		system("CLS");
        cout<<"\t=================_Selamat Datang_=================="<<endl;
        cout<<"\t               Martabakku Seleraku                 "<<endl;
        cout<<"\t===========Jl.Cempaka No.5, Purwokerto============="<<endl;
        cout<<"\t=================CP: 085723676232=================="<<endl;

        cout<<"\tNama Pemesan     : ";cin>>nama;
        cout<<""<<endl;


        cout<<"\t========================================================"<<endl;
        cout<<"\t  Menu Martabak :               |   Harga/Size :        "<<endl;
        cout<<"\t================================|======================="<<endl;
        cout<<"\t| [1] Martabak Kacang Cokelat   |   Regular Rp.15.000  |"<<endl;
        cout<<"\t|                               |   Jumbo   Rp.20.000  |"<<endl;
        cout<<"\t|-------------------------------|----------------------|"<<endl;
        cout<<"\t| [2] Martabak Susu Keju        |   Regular Rp.15.000  |"<<endl;
        cout<<"\t|                               |   Jumbo   Rp.20.000  |"<<endl;
        cout<<"\t|-------------------------------|----------------------|"<<endl;
        cout<<"\t| [3] Martabak Bluberry         |   Regular Rp.13.500  |"<<endl;
        cout<<"\t|                               |   Jumbo   Rp.18.500  |"<<endl;
        cout<<"\t|-------------------------------|----------------------|"<<endl;
        cout<<"\t| [4] Martabak Nanas            |   Regular Rp.13.500  |"<<endl;
        cout<<"\t|                               |   Jumbo   Rp.18.500  |"<<endl;
        cout<<"\t|-------------------------------|----------------------|"<<endl;
        cout<<"\t| [5] Martabak Telor            |   Regular Rp.13.000  |"<<endl;
        cout<<"\t|                               |   Jumbo   Rp.18.000  |"<<endl;
        cout<<"\t========================================================"<<endl;

        cout<<"\t(Pilih Menu Berdasarkan Nomor)"<<endl;
        cout<<"\tSilahkan Pilih Makanan anda : "; cin >> kode;


		switch (kode){
        case 1: strcpy (menu,"Martabak Kacang Cokelat"); hargamart=15000;
                break;
        case 2: strcpy (menu,"Martabak Susu Keju"); hargamart=15000;
                break;
        case 3: strcpy (menu,"Martabak Bluberry"); hargamart=13500;
                break;
        case 4: strcpy (menu,"Martabak Nanas"); hargamart=13500;
                break;
        case 5: strcpy (menu,"Martabak Telor"); hargamart=13000;
                break;
        default : cout<<"Maaf, kode yang Anda masukkan tidak tersedia"<<endl;
                  goto ulang;
        }


        cout<<"\t======================"<<endl;
        cout<<"\t|    Jenis Ukuran    |"<<endl;
        cout<<"\t======================"<<endl;
        cout<<"\t|    [1] Regular     |"<<endl;
        cout<<"\t|    [2] Jumbo       |"<<endl;
        cout<<"\t======================"<<endl;

        cout<<"\tPilih Jenis Ukuran (1-2)    : ";
        cin>>kode2;
        cout<<""<<endl;
        cout<<"\tMasukkan Banyaknya pesanan  : ";
        cin>>banyak;
        cout<<""<<endl;

        switch (kode2){
        case 1: strcpy (ukuran,"Regular"); hargaukr=0;
                break;
        case 2: strcpy (ukuran,"Jumbo"); hargaukr=5000;
                break;
        default : cout<<"Maaf, kode yang Anda masukkan tidak tersedia"<<endl;
                  goto ulang;
        }
        cout<<"\tAnda memilih "<<menu<<endl;
		cout<<"\tJenis ukuran "<<ukuran<<endl;
		cout<<"\n\n";


        hargaitm = hargamart+hargaukr;
        total = hargaitm*banyak;
		cout<<"\t===================================="<<endl;
		cout<<"\t        Martabakku Seleraku         "<<endl;
		cout<<"\t===================================="<<endl;
		cout<<"\tNama Pemesan   : "<<nama       <<endl;
		cout<<"\tMenu Makanan   : "<<menu       <<endl;
		cout<<"\tJenis Ukuran   : "<<ukuran     <<endl;
		cout<<"\tHarga / Item   : "<<hargaitm   <<endl;
		cout<<"\tBanyak Pesanan : "<<banyak     <<endl;
		cout<<"\tTotal          : "<<total      <<endl;
		if(banyak>3){
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "\t# Anda mendapatkan diskon Potongan Harga : Rp " << diskon <<" #"<< endl;
			cout << "\tTotal Pembayaran Menjadi  : Rp "<< total << endl;
		}

		cout << "\t------------------------------------------------------" << endl;
		cout << "\tMasukkan Jumlah Yang Anda Bayarkan : Rp."; 		cin>>bayar;
		cout << endl;

		while (saldo=bayar<total){
			cout << "\tSaldo anda kurang, Silahkan bayar lagi : Rp. "; cin>>kurang;
			bayar+=kurang;
		};

		kembalian=bayar-total;
		cout << "\tJumlah yang anda bayar \t\t\t Rp. " << bayar<<endl;
		cout << "\tkembalian \t\t\t\t Rp. "     << kembalian <<endl;
		cout << "\t##################################################"<<endl;

		ulang:
			cout<<"		  [Y = ya / T = tidak]               "<<endl;
			cout<< "\tApakah anda ingin memesan lagi ? [Y/T]  =  "; cin>>kembali;
		}while (kembali=='Y'||kembali=='y');
		cout << endl;
		cout << "\tTerima Kasih Telah Berkunjung di *Martabakku Seleraku*     "<<endl;
		cout << "\t	         * Selamat Menikmati *                          "<<endl;

		return 0;
	}

*/





#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

const int diskon = 10000;
int main(){
    string nama;
	char menu[20], ukuran[20],lanjut, kembali;
	int  hargamart, kode, kode2, banyak, hargaukr, hargaitm, bonus,
         bayar, kurang, kembalian, total;
	bool saldo;

        awal:
		system("CLS");
        cout<<"  ================_Selamat Datang di_================"<<endl;
        cout<<"                    _King Martabak_                  "<<endl;
        cout<<"             Jl.Cempaka No.5, Purwokerto             "<<endl;
        cout<<"  ============= == CP: 085722537755 == =============="<<endl;
        cout<<"  ---------------------------------------------------"<<endl;
        cout<<"\n  Nama Pemesan     : ";
        getline(cin, nama);
        cout<<""<<endl;


        cout<<"  ========================================================"<<endl;
        cout<<"  | Menu Martabak :               |   Harga/Size :       |"<<endl;
        cout<<"  ================================|======================="<<endl;
        cout<<"  | [1] Martabak Kacang Cokelat   |   Regular Rp.15.000  |"<<endl;
        cout<<"  |                               |   Jumbo   Rp.20.000  |"<<endl;
        cout<<"  |-------------------------------|----------------------|"<<endl;
        cout<<"  | [2] Martabak Susu Keju        |   Regular Rp.15.000  |"<<endl;
        cout<<"  |                               |   Jumbo   Rp.20.000  |"<<endl;
        cout<<"  |-------------------------------|----------------------|"<<endl;
        cout<<"  | [3] Martabak Bluberry         |   Regular Rp.13.500  |"<<endl;
        cout<<"  |                               |   Jumbo   Rp.18.500  |"<<endl;
        cout<<"  |-------------------------------|----------------------|"<<endl;
        cout<<"  | [4] Martabak Nanas            |   Regular Rp.13.500  |"<<endl;
        cout<<"  |                               |   Jumbo   Rp.18.500  |"<<endl;
        cout<<"  |-------------------------------|----------------------|"<<endl;
        cout<<"  | [5] Martabak Telor            |   Regular Rp.13.000  |"<<endl;
        cout<<"  |                               |   Jumbo   Rp.18.000  |"<<endl;
        cout<<"  ========================================================"<<endl;

        cout<<"\n  *Pilih Menu Berdasarkan Nomor*"<<endl;
        cout<<"  Masukkan Menu Pilihan Anda [1-5] : ";
        cin>>kode;
        cout<<endl;

		switch (kode){
        case 1: strcpy (menu,"Martabak Kacang Cokelat"); hargamart=15000;
                break;
        case 2: strcpy (menu,"Martabak Susu Keju"); hargamart=15000;
                break;
        case 3: strcpy (menu,"Martabak Bluberry"); hargamart=13500;
                break;
        case 4: strcpy (menu,"Martabak Nanas"); hargamart=13500;
                break;
        case 5: strcpy (menu,"Martabak Telor"); hargamart=13000;
                break;
        default : cout<<"  *Maaf, kode yang Anda masukkan tidak tersedia*"<<endl;
                  goto ulang;
        }


        cout<<"  ======================"<<endl;
        cout<<"  |    Jenis Ukuran    |"<<endl;
        cout<<"  ======================"<<endl;
        cout<<"  |    [1] Regular     |"<<endl;
        cout<<"  |    [2] Jumbo       |"<<endl;
        cout<<"  ======================\n"<<endl;

        cout<<"  Pilih Jenis Ukuran [1-2]    : ";
        cin>>kode2;

        switch (kode2){
        case 1: strcpy (ukuran,"Regular"); hargaukr=0;
                break;
        case 2: strcpy (ukuran,"Jumbo"); hargaukr=5000;
                break;
        default : cout<<"\n  *Maaf, kode yang Anda masukkan tidak tersedia*"<<endl;
                  goto ulang;
        }

        cout<<"  Masukkan Banyaknya Pesanan  : ";
        cin>>banyak;
        cout<<endl;


        cout<<"  Anda memilih ("<<menu<<")"<<endl;
		cout<<"  Jenis ukuran ("<<ukuran<<")"<<endl;
		cout<<"  Banyak pesanan Anda adalah ("<<banyak<<")"<<endl;
		cout<<endl;
        cout<<"  	  [Y = ya / T = tidak]            "<<endl;
        cout<<"  Lanjutkan proses pemesanan ? [Y/T] : ";cin>>lanjut;
        cout<<endl;
        if (lanjut=='Y'||lanjut=='y')
            goto tengah;
        else
            goto akhir;


        tengah:
        hargaitm = hargamart+hargaukr;
        total = hargaitm*banyak;
        system("CLS");
		cout<<"  ====================================================="<<endl;
		cout<<"                    _King Martabak_                    "<<endl;
		cout<<"  ----------- Jl.Cempaka No.5, Purwokerto -------------"<<endl;
        cout<<"                   CP: 085722537755                    "<<endl;
		cout<<"  ====================================================="<<endl;
		cout<<"  Nama Pemesan             :    "<<nama       <<endl;
		cout<<"  Menu Martabak            :    "<<menu       <<endl;
		cout<<"  Jenis Ukuran             :    "<<ukuran     <<endl;
		cout<<"  Harga / Item             :    "<<hargaitm   <<endl;
		cout<<"  Banyak Pesanan           :    "<<banyak     <<endl;
		cout<<"  Total Harga              :    "<<total      <<endl;

		if(banyak>3){
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "  # Anda mendapatkan potongan harga sebesar Rp." << diskon <<"  #"<<endl;
			cout << "  Total Harga menjadi      : Rp "<< total <<endl;
		}

		cout<<"  -----------------------------------------------------" <<endl;
		cout<<"  Masukkan jumlah yang Anda bayarkan      : Rp."; 		cin>>bayar;
		cout<<endl;

		while (saldo=bayar<total){
            cout<<"  Saldo kurang, silahkan tambahkan lagi   : Rp."; cin>>kurang;
        cout<<"  -----------------------------------------------------" <<endl;
			bayar+=kurang;
		}
        kembalian=bayar-total;
		cout<<"  Jumlah yang Anda bayar                  : Rp." << bayar<<endl;
		cout<<"  Kembalian                               : Rp." << kembalian <<endl;
		cout<<"  #####################################################"<<endl;

		ulang:
			cout<<"\n	  [Y = ya / T = tidak]                "<<endl;
			cout<<"  Apakah Anda ingin memesan lagi ? [Y/T] : "; cin>>kembali;
			cout<<endl;
		if(kembali=='Y'||kembali=='y')
            goto awal;
        else
            goto akhir;

		akhir:
		cout<<"  # Terima Kasih Telah Berkunjung ke  *King Martabak* #"<<endl;
		cout<<"  	       # *Sampai Jumpa Lagi* #                    "<<endl;
		cout<<"  ====================================================="<<endl;

		return 0;
	}

