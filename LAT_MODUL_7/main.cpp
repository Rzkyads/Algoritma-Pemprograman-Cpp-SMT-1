#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

 int data [10] = {2,5,8,12,16,23,28,56,72,91};
 int cari;

 void selection_sort(){
     int temp, min, i, j;
     for (i=0; i<10; i++){
        min =i;
        for (j =1+1; j<10; j++){
            if (data[j]<data[min]){
                min =j;
            }
        }
        temp = data[i];
        data[i]= data[min];
        data[min]= temp;
     }
 }

 void binary_search(){
     //sercing
     int awal, akhir, tengah, b_flag = 0;
     awal = 0;
     akhir = 10;
     while (b_flag == 0 && awal <akhir){
        tengah = (awal + akhir )/2;
        if (data[tengah]== cari){
            b_flag =1;
            break;
        }else if (data[tengah]<cari)
            awal = tengah +1;
        else
            akhir =  tengah -1;
     }
     if(b_flag == 1)
        cout << "\nData ditemukan pada indek ke- "<< tengah <<endl;
     else
         cout << "\nData tidak ditemukan\n";
     }


 int main(){
     cout << "\nData    = "<<endl;
     for (int x = 0;x<10;x++)
        cout << setw(5)<<data[x];
     cout << endl;

     cout << "Masukkan daya yang dicari = "<<endl;
     cin >> cari;
     cout << "Data diurutkan    = ";
     selection_sort();
     for (int x=0; x<10; x++)
        cout << setw(5)<<data[x];
     cout << endl;
     binary_search();
 return 0;
}



//INSERTION SORT
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int lenght){
    int i, j, tmp;

    for (i=0; i<lenght; i++){
        j =i;
        while (j>0 && arr[j-1] > arr[j]){
            tmp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=tmp;
            j--;
        }//END OF WHILE LOOP
    }//END OF FOR LOOP
}

void print_array(int a[], int lenght){
    for (int i=0; i<lenght; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
    int lenght =6;
    int a[lenght]= {22, 10, 15, 3, 8, 2};

    cout << "Sebelum di urutkan\n\n";
    print_array(a, lenght);

    cout << "setelah di urutkan\n\n";
    insertion_sort(a, lenght);
    print_array(a, lenght);

return 0;
}



//BUBBLE SORT
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int lenght)
{
    bool not_sorted =  true;
    int j=0, tmp;

    while (not_sorted)
    {
        not_sorted = false;
        j++;
        for (int i=0; i<lenght-j; i++)
        {
            if (arr[i]>arr[i+1])
            {
                tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
                not_sorted=true;
            }//END OF IF
        }//END OF FOR LOOP
    }//END OF WHILE
}//END OF BUBBLE SHORT

void print_array(int a[], int lenght){
    for (int i=0; i<lenght; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
        int lenght =6;
    int a[lenght]= {22, 10, 15, 3, 8, 2};

    cout << "Sebelum di urutkan\n";
    print_array(a, lenght);

    cout << "setelah di urutkan\n";
    bubble_sort(a, lenght);
    print_array(a, lenght);

return 0;}



*
//SELECTION SORT
#include <iostream>
using namespace std;

void selectionSort(int arr[], int lenght)
{
    int pos_min, temp;
    for (int i=0; i<lenght-1; i++){
        pos_min = i;
        for (int j=i+1; j<lenght; j++){
            if (arr[j] << arr[pos_min])
            pos_min=j;
        }
        if (pos_min !=i){
            temp = arr[i];
            arr[i]=arr[pos_min];
            arr[pos_min]=temp;
        }
    }
}

void print_array(int a[], int lenght){
    for (int i=0; i<lenght; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}


int main(){
    int lenght =6;
    int a[lenght]= {22, 10, 15, 3, 8, 2};

    cout << "Sebelum di urutkan\n";
    print_array(a, lenght);

    cout << "setelah di urutkan\n";
    selectionSort(a, lenght);
    print_array(a, lenght);

return 0;}




//LATIHAN 1
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int lenght)
{
    bool not_sorted = true;
    int j=0;
    double tmp;

    while(not_sorted)
    {
        not_sorted =false;
        j++;
        for(int i=0; i<lenght-j; i++)
        {
            if (arr[i] > arr[i+1])
            {
                tmp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= tmp;
                not_sorted = true;
            }//END OF IF
        }//END OF for
    }//END OF WHILE
}//END OF BUBLESORT

void print_array(double a[], int lenght){
    for (int i=0; i<lenght; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
int lenght = 5;
double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

cout << "URUTAN SEBELUM SORTING : \n";
print_array(a, lenght);

bubble_sort(a, lenght);

cout << "URUTA SETELAH SORTING  :\n";
print_array(a, lenght);

return 0;}




//LATIHAN 2

#include <iostream>

using namespace std;

//buat tampilan proses urutan
void print_array(char arr[], int panjang);

void insertion_sort(char arr[], int length)
{
    int i, j;
    char tmp;

    for (i =1; i<length; i++)
    {
        j=i;
        while (j>0 && arr[j-1] < arr[j])
        {
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
            print_array(arr, length);//tampilan proses pengurutan
        }
    }
}

void print_array(char arr[], int length)
{
    for (int i=0; i<length; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    char length=6;
    char arr[length]={'c','f','a','z','d','p'};

    cout<< "Urutan karakter sebelum sorting: "<<endl;
    print_array(arr, length);

    cout<< "\nUrutan karakter setelah sorting : "<<endl;
    insertion_sort(arr, length);
    print_array(arr, length);

return 0;
}





//TUGAS 1

#include <iostream>

using namespace std;

void print_array(float arr[], int panjang);

void selecsort(float arr[], int lenght){
    int pos_min;
    float tmp;
    for(int i=0; i<lenght; i++){
        pos_min = i;
        for (int j=i+1; j<lenght; j++){
            if (arr[j]>arr[pos_min])
                pos_min=j;
        }
        if (pos_min !=i){
            tmp =arr[i];
            arr[i]=arr[pos_min];
            arr[pos_min]=tmp;
        }
    }

}

void print_array(float arr[], int length)
{
    for (int i=0; i<length; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int length=5;
    float arr[length]={3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "NIM    : 20102158" << endl;
    cout << "NAMA   : RIZKY ADE SATRIYA\n\n";

    cout<< "Urutan karakter sebelum sorting: "<<endl;
    print_array(arr, length);

    cout<< "\nUrutan karakter setelah sorting : "<<endl;
    selecsort(arr, length);
    print_array(arr, length);
}




//TUGAS 3
#include<iostream>
using namespace std;
void bubbleSort_ascending(char arr[], int n){
    bool not_sorted2111= true;
	int j=0;
	char tmp;

	while (not_sorted2111){
		not_sorted2111 = false;
		j++;
		for(int i = 0; i< n-j; i++){
			if (arr[i] > arr[i+1]){
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				not_sorted2111 = true;
			}
		}
	}
}

void bubbleSort_descending(char huruf[], int n) {
    bool not_sorted2111= true;
	int j=0;
	char tmp;

	while (not_sorted2111){
		not_sorted2111 = false;
		j++;
		for(int i = 0; i< n-j; i++){
			if (huruf[i] < huruf[i+1]){
				tmp = huruf[i];
				huruf[i] = huruf[i+1];
				huruf[i+1] = tmp;
				not_sorted2111 = true;
			}
		}
	}
}

void printArray(char data[], int n) {
	for (int i = 0; i < n; i++) {
        cout<<data[i]<<" ";
    }
	cout<<endl;
}


int main(){
    int n;
    cout << "NIM    : 20102158" << endl;
    cout << "NAMA   : RIZKY ADE SATRIYA\n\n";
    cout<<"Input(n) : ";cin>>n;
    char data[n];

    for (int i = 0; i < n; i++)
    {
    cout<<"Karakter elemen ke-"<<i+1<<" = ";
    cin>>data[i];
    }cout<<endl;

    cout<<"Urutan karakter sebelum sorting : "<<endl;
    printArray(data, n);

    cout<<"\nUrutan karakter sesudah ascending sorting : "<<endl;
    bubbleSort_ascending(data, n);
    printArray(data, n);

    cout<<"\nUrutan karakter sesudah descending sorting : "<<endl;
    bubbleSort_descending(data, n);
    printArray(data, n);

return 0;
}


//TUGAS 2
#include <iostream>
using namespace std;

void bubble_sort(string arr[], int lenght){
    bool not_sorted = true;
    int j=0;
    string tmp;

    while(not_sorted){
        not_sorted =false;
        j++;
        for(int i=0; i<lenght-j; i++){
            if (arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= tmp;
                not_sorted = true;
            }//END OF IF
        }//END OF for
    }//END OF WHILE
}//END OF BUBLESORT

void print_array(string a[], int lenght){
    for (int i=0; i<lenght; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
int lenght = 10;
string arr[lenght] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

cout << "NIM    : 20102158" << endl;
cout << "NAMA   : RIZKY ADE SATRIYA\n\n";

cout << "URUTAN SEBELUM SORTING : \n\n";
print_array(arr, lenght);

bubble_sort(arr, lenght);

cout << "\n";
cout << "URUTA SETELAH SORTING  :\n\n";
print_array(arr, lenght);

return 0;}



