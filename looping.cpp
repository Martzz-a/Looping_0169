#include <iostream>
#include <ctime>
using namespace std;

int main (){
    int x;

    cout << "PERULANGAN FOR" << endl;

    // Perulangan dengan FOR
    // mencetak tulisan sebanyak 5 kali
    for (int i = 0; i <= 4; i++)
    {
        cout << "Teknologi Informasi UMY " << i << endl;
    }
    
    cout << endl;

    // untuk mendapatkan urutan angka acak yang berbeda
    srand(time(0));

    cout << "PERULANGAN WHILE" << endl;

    // Perulangan dengan WHILE
    x = 1 + rand()%10;

    while (x <= 5)
    {
        cout << "Bilangan acak = " << x << endl;
        x = rand()%10;
    }
    
    cout << "Bilangan acak while yang terakhir = " << x << endl;
    cout << endl;

    cout << "PERULANGAN DO...WHILE" << endl;

}