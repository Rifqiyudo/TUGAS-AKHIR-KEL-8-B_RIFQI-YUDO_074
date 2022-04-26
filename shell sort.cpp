#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
    int array;
    cout << “Penerapan algoritma Shell Sortn”;
    cout << “Masukkan panjang array: “;cin>>array;
    int arr_sorting[array], a, k,j, i, t;

    cout << “nMasukkan ” << array << ” Data yang akan diurutkan : ” << endl;
    for (i = 0; i < array; i++)
    {
        cout<<“Data ke- “<<i+1<<“: “;
        cin >> arr_sorting[i];
    }
    cout << “nData anda   :”;
    for (i = 0; i < array; i++) {
        cout << “t” << arr_sorting[i];
    }
    for (i = array / 2; i > 0; i = i / 2) {
        for (j = i; j < array; j++) {
            for (k = j – i; k >= 0; k = k – i) {
                if (arr_sorting[k + i] >= arr_sorting[k])
                    break;
                else {

                    t = arr_sorting[k];
                    arr_sorting[k] = arr_sorting[k + i];
                    arr_sorting[k + i] = t;
                }
            }
             cout << “nPengulangan Shell Sort ” << i << ” : ” << j;
            for (a = 0; a < array; a++) {
                cout << “t” << arr_sorting[a];
            }
        }

    }

    cout << “nnData yang telah diurutkan dengan algoritma Shell Sort :n”;
    for (i = 0; i < array; i++) {
        cout << “t” << arr_sorting[i];
    }

    getch();
}
