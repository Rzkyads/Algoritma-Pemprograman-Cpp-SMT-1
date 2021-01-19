/*
//LATIHAN 1
#include <iostream>
using namespace std;
int main(){
    cout << "PENGULANGAN MENAIK"<<endl;
    for (int c=0; c<5;c++)
    {
        cout<<c+1<<endl;
    }
    cout << "PENGULANGAN MENURUN"<<endl;
    for (int j=5; j>0;j--)
    {
        cout<<j<<endl;
    }
    return 0;
}


//LATIHAN 2
#include <iostream>
using namespace std;
int main()
{
    int j=10;
    int k;
    while (j >=1){
        k=1;
        while(k<=j){
            cout <<k*j<< "  " ;
            k++;
        }
        cout <<'\n';
        j--;
    }
    return 0;
}



//LATIHAN 3
#include<iostream>

using namespace std;
int main(){
    int bil;
    long f =1;//f=faktorial
    cout << "MASUKKAN BILANGAN YANG AKAN DI HITUNG  :   ";
    cin>>bil;
    int c = bil;
    cout<<c<< "! = ";
    while (c >=1){//c= angka akan menurun sampe dengan = 1
        f *=c;//faktorial kali c
        if (c != 1){ //if c sama dengan 1
        cout<<c<<" x ";
    }else{
        cout<<c<< " = ";
    }
    c--;
    }
    cout<<f;
    return 0;
}


//LATIHAN 4
#include<iostream>
using namespace std;
int main()
{
    int bil1, bil2, sisa;
    cout << "MASUKKAN BILANGAN PERTAMA  :   ";
    cin >> bil1;
    cout << "MASUKKAN BILANGAN KEDUA    :   ";
    cin >> bil2;
    if (bil1 < bil2){
        int temp = bil1;
        bil1 = bil2;
        bil2 = temp;

    }do{
        sisa = bil1 % bil2;
        bil1 = bil2;
        bil2 = sisa;
    }while(sisa !=0);
    cout << "\nFaktor persekutuan terbesar  =   "<<bil1;
    return 0;
}


//TUGAS 1
#include <iostream>
using namespace std;
int main(){
    int bil;
    long p=0;//

    cout << " Masukkan Bilangan Yang Akan di hitung     : ";
    cin>>bil;
    int c=bil; //hasil C = bilangan yang di inputkan
    cout <<c<<"=";
    while (c >=1){
        p += c;
        if (c != 1){
            cout <<c<< "+";
        }else {
         cout <<c<< "=";
         }
         c--;
    }
cout<<p;
return 0;
}


//TUGAS 2
#include<iostream>
using namespace std;
int main(){
    int a, b, pangkat;
    cout << "MASUKKAN BILANGAN  :   "; cin >> a;
    cout << "MASUKKAN PENCACAH  :   "; cin >> b;

    pangkat = 1;
    int i=1;

    while(!(i>b)){
        pangkat *=a;
        i=i+1;
    }
    cout << "HASIL  =   " <<pangkat;
return 0;
}
*/

//TUGAS 3
#include<iostream>
using namespace std;
int main(){
    int bil1, bil2;
    int hasil;

    cout << "MASUKKAN BILANGAN 1    =   "; cin>> bil1;
    cout << "MASUKKAN BILANGAN 2    =   "; cin>> bil2;

    if (bil1 > bil2){
        int temp = bil1;
        bil1 = bil2;
        bil2 = temp;
    }
    do {
            hasil += bil1;
    }while (hasil % bil2 !=0);
    cout << "KPK   = "<<hasil;
return 0;
}

