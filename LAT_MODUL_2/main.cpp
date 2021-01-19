#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Baris tanpa endl.";
    cout << "Manipulator endl";
    cout << dec << 10 << endl;
    cout << hex << 10 << endl;
    cout << oct << 10 << endl;

    cout << setiosflags(ios::fixed);
    cout << setprecision (4) << 123.98765456 << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int bilangan; //deklarasi sebuah variabel int = bilangan
    char karakter; //char = karakter
    string kata; //string = kata

    cout << "MASUKKAN BILANGAN  :";
    cin >> bilangan;
    cout << "MASUKKAN KARAKTER  :";
    cin >> karakter;
    cout << "MASUKKAN KATA      :";
    cin >> kata;

    cout <<  endl <<"DATA YANG ANDA MASUKKAN ADALAH"<< endl;
    cout << bilangan << endl;
    cout << karakter << endl;
    cout << kata << endl;
    return 0;
}


//LATIHAN GETCH/GETCHE
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    char karakter;

    cout << "MASUKKAN SEBUAH KARAKTER   :";
    karakter = getch(); //getch user menampilkan sebuah data tapi tdk terlihat
    cout << endl << "hasil fungsi getch =" << karakter << endl;

    cout << "MASUKKAN SEBUAH KARATER    :";
    karakter = getche(); //getche user input data akan terlihat
    cout << endl << "hasil fungsi getche =" << karakter << endl;

    return 0;

}

//Tugas 1
#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(){
    int bil;
    char karakter;
    string kata;

    cout << "MASUKKAN BILANGAN  :";
    cin >> bil;
    cout << "MASUKKAN KARAKTER  :";
    cin >> karakter;
    cout << "MASUKKAN KATA      :";
    cin >> kata;

    cout << endl <<"DATA YANG ANDA MASUKKAN ADALAH"<< endl;
    cout << "BILANGAN       =" <<bil << endl;
    cout << "KARAKTER       =" <<karakter << endl;
    cout << "KATA           =" <<kata << endl;

    return 0;
}

//Tugas 2
#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(){
    int bil;
    char karakter;
    string kata;
    float bil2;

    cout << "MASUKKAN BILANGAN  :";
    cin >> bil;
    cout << "MASUKKAN KARAKTER  :";
    cin >> karakter;
    cout << "MASUKKAN KATA      :";
    cin >> kata;


    cout << endl <<"DATA YANG ANDA MASUKKAN ADALAH"<< endl;
    cout << "BILANGAN       =" <<bil << endl;
    cout << "HEXADECIMAL    =" <<hex << bil << endl;
    cout << "KARAKTER       =" <<karakter << endl;
    cout << "KATA           =" <<kata << endl;

    return 0;
}

//Tugas 3
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float bil;

    cout <<"MASUKKAN ANGKA  =";
    cin >> bil;

    cout << setiosflags(ios::fixed);
    cout << setprecision (2) <<bil<< endl;
    return 0;
}

//LATIHAN MENGUKUR SUHU
#include <iostream>
 using namespace std;

    int main (){
        float celcius;
        float fahrenheit;

        cout << "MASUKKAN SUHU CELCIUS  = ";
        cin >>celcius;

            fahrenheit = 9/5 * celcius + 32;

            cout << "SUHU DALAM FAHRENHEIT = " << fahrenheit << endl;

    return 0;
    }
*/
//MENGITUNG SUHU C KE R
#include <iostream>
using namespace std;

    int main(){
        float C;
        float R;

            cout << " MASUKKAN SUHU DALAM CELSIUS =";
            cin >> C;

                R = 4 * C/5;

                cout << " SUHU DALAM REAMUR =" << R << endl;
return 0;
    }

//MENGHITUNG LUAS DAN KELILING LINGKARAN
//RUMUS LUAS L=phi*d2/4 =phi*r2
//RUMUS KELILING K=phi*d = 2*phi*r
#include <iostream>
#include <conio.h>

using namespace std;
int main (){
    float phi = 3.14;
    int r;
    float k;
    float l;

        cout << "MASUKKAN PANJANG JARI-JARI = ";
        cin >> r;

        k = 2 * r * phi;
        cout << "KELILING LINGKARAN ADALAH  = "<< k << endl;
        l = phi * r * r;
        cout << "LUAS LINGKARAN ADALAH      = "<< l;

return 0;

}
*/
