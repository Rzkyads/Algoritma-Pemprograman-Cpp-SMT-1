/*
//SEQUENTIAL SEARCH
#include <iostream>

using namespace std;

int sequential_search(int data[], int n, int k)
{
    int posisi, i, ketemu;
        if (n<=0)
            posisi = -1;
        else{
            ketemu =0;
            i =1;
            while((i< n-1) && !ketemu){
                if (data[i] == k){
                    posisi =i;
                    ketemu =1;
                }else {
                    i++;
                }
                if (!ketemu) {
                    posisi =-1;
                }
            }
        }
        return posisi;

}//END OF SEQUENTIAL SEARCH
int main()
{
    int n = 7;
    int data [] = {1, 0, 3, 2, 5, 7, 9};
    int k = 3;

    int posisi = sequential_search(data, n, k);
    if (posisi!=-1)
    {
        cout << "Kunci "<< k << " Ditemukan Pada posisi indeks ke- " << posisi << endl;
    }else
    {
        cout << "Kunci "<< k << " Tidak ditemukan"<<endl;
    }
    return 0;
}


//FUNGSI BINARY SEARCH
#include <iostream>

using namespace std;

int function_binary_search (int data[], int n, int k)
{
    int atas, bawah, tengah, posisi;
    bool ada;

    ada     = false;
    bawah   = 0;
    atas    = n -1;
    posisi  = -1;

    while (bawah <= atas)
    {
        tengah = (atas + bawah)/2;
        if (k == data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (k < data[tengah]) atas =tengah -1;
        else if (k < data[tengah]) atas =tengah +1;
    }
    return posisi;
}
int main()
{
    int n = 7;
    int data [] = {0, 1, 2, 3, 5, 7, 9};
    int k = 3;

    int posisi = function_binary_search (data, n, k);
    if (posisi!=-1)
    {
        cout << "Kunci "<< k << " Ditemukan Pada posisi indeks ke- " << posisi << endl;
    }else
    {
        cout << "Kunci "<< k << " Tidak ditemukan"<<endl;
    }
    return 0;
}


//LATIHAN 1
#include <iostream>
using namespace std;

int sequential_search(double data[], int n, double k)
{
    int posisi, i, ketemu;
    if (n <=0)
        posisi = 1;
    else
    {
        ketemu =0;
        i=1;
        while ((i < n )&& ! ketemu)
        {
            if (data[i] == k)
            {
                posisi =i;
                ketemu =1;
            }
            else
            {
                i++;
            }
            if (!ketemu)
            {
                posisi =-1;
            }
        }
        
    }
    return posisi;
    
}

int main()
{
    int n   =7;
    double data[] = {1.3, 0.9, 3.2, 2.1, 5.8, 7.7, 9.2};
    double k    = 0.9;

    int posisi  = sequential_search(data, n, k);
    cout<< "\n\n";
    if (posisi != -1)
    {
        cout << "Kunci "<< k << " ditemukan pada posisi indeks "<< posisi <<endl;
    }
    else
    {
        cout << "kunci "<< k << " ditemukan pada posisi indeks "<< posisi<<endl;
    }
    cout<< "\n\n";
    return 0;
}



//LATIHAN 2
#include <iostream>
using namespace std;
int function_binary_search (char data[], int n, char k)
{
    int atas, bawah, tengah, posisi;
    //bool ada;

    //ada     = false;
    bawah   = 0;
    atas    = n-1;
    posisi  = -1;

    while (bawah <= atas)
    {
        tengah =(atas + bawah)/2;
        if(k== data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (k < data[tengah]) atas = tengah-1;
        else if (k > data[tengah]) bawah = tengah +1;  
    
        }
        return posisi;
}

int main(int argc, char const *argv[])
{
    int n       = 7;
    char data[] = { 'a','b','c','e','g','h','j' };
    char k      = 'c';

    int posisi = function_binary_search(data, n, k);
    cout<< "\n\n";
    if (posisi !=-1)
    {
        cout << "Kunci " << k<< " Ditemukan pada indeks- "<< posisi<<endl;
    }
    else
    {
        cout << "Kunci " << k<< " Tidak ditemukan "<<endl;
    }
    cout<< "\n\n";
    return 0;
}



//TUGAS 1
#include <iostream>
using namespace std;

int sequential_search(string data[], int n, string k)
{
    int posisi, i, ketemu;
    if (n <=0)
        posisi = -1;
    else
    {
        ketemu =0;
        i=0;
        while ((i < n-1 )&& ! ketemu)
        {
            if (data[i] == k)
            {
                posisi =i;
                ketemu =1;
            }
            else
            {
                i++;
            }
            if (!ketemu)
            {
                posisi =-1;
            }
        }
        
    }
    return posisi;
    
}

int main()
{
    int n   =10;
    string data[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    string k    = "R 999 RT";

    int posisi  = sequential_search(data, n, k);
    cout << "\n";
    cout << "NAMA   : RIZKY ADE SATRIYA\n";
    cout << "NIM    : 20102158\n";
    cout << "\n\n";
    if (posisi != -1)
    {
        cout << "Kunci "<< k << " ditemukan pada posisi indeks "<< posisi <<endl;
    }
    else
    {
        cout << "kunci "<< k << " ditemukan pada posisi indeks "<< posisi<<endl;
    }
    cout<< "\n\n";
    return 0;
}


//TUGAS 2
#include <iostream>
using namespace std;
int function_binary_search (int data[], int n, int k)
{
    int atas, bawah, tengah, posisi;
    //bool ada;

    //ada     = false;
    bawah   = 0;
    atas    = n-1;
    posisi  = -1;

    while (bawah <= atas)
    {
        tengah =(atas + bawah)/2;
        if(k== data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (k < data[tengah]) atas = tengah-1;
        else if (k > data[tengah]) bawah = tengah +1;  
    
        }
        return posisi;
}

int main(int argc, char const *argv[])
{
    int n       = 13;
    int data[] = { 12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013};
    int k      = 12102011;

    int posisi = function_binary_search(data, n, k);
    cout << "\n";
    cout << "NAMA   : RIZKY ADE SATRIYA\n";
    cout << "NIM    : 20102158\n";
    cout << "\n\n";
    if (posisi !=-1)
    {
        cout << "Kunci " << k<< " Ditemukan pada indeks- "<< posisi<<endl;
    }
    else
    {
        cout << "Kunci " << k<< " Tidak ditemukan "<<endl;
    }
    cout << "\n\n";
    return 0;
}


*/

//TUGAS 3
#include <iostream>
using namespace std;

void bubble_sort(int data[], int n)
{
    bool not_sorted = true;
    int j=0;
    int tmp;

    while (not_sorted)
    {
        not_sorted =false;
        j++;
        for(int i=0; i<n-j; i++)
        {
            if (data[i] > data[i+1])
            {
                tmp =data[i];
                data[i]=data[i+1];
                data[i+1]=tmp;
                not_sorted =true;
            }
        }
    }
    
}

void print_array (int data[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}

int function_binary_search(int data[], int n, int k)
{
    int atas, bawah, tengah, posisi;
    bool ada;

    ada = false;
    bawah = 0;
    atas = n-1;
    posisi = -1;

    while (bawah <= atas)
    {
        tengah =(atas + bawah)/2;
        if(k== data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (k < data[tengah]) atas = tengah-1;
        else if (k > data[tengah]) bawah = tengah+1;
        
    }
    return posisi;
    
}
 
int main(int argc, char const *argv[])
{
    int n =10;
    int data[] = {21, 61, 28, 73, 44, 68, 37, 52, 75, 75};
    int k = 71;
    cout << "\n";
    cout << "NAMA   : RIZKY ADE SATRIYA\n";
    cout << "NIM    : 20102158\n";
    cout << "\n\n";
    cout << "Data yang ada  = "<<endl;
    print_array(data, n);

    bubble_sort(data, n);
    cout << "Data Yang Sudah Urut   = "<<endl; 
    print_array(data, n);
    cout << "\n";
    
    int posisi = function_binary_search(data, n, k);
    if (posisi !=-1)
    {
        cout << "Kunci " << k<< " Ditemukan pada indeks ke- "<< posisi<<endl;
    }
    else
    {
        cout << "Kunci " << k<< " Tidak Ditemukan"<< endl;
    }
    cout << "\n\n";
    return 0;
}
