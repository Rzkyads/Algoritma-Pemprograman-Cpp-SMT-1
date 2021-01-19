#include <iostream>

using namespace std;

int main()
{
    int a, Hasil;
    cout << "Masukkan Angka :   ";cin>>a;
    do{
        cout << Hasil <<endl;
        Hasil=a/2;
        a++;
    }
    while(a<=10);
    return 0;
}
