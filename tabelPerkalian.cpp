#include <iostream>
using namespace std;

int main()
{
    int a;
    while (true)
    {
        cout << "Cari Tabel Perkalian? (y/n): ";
        char respon = tolower(getchar());
        cout << endl;
        if (respon == 'y')
        {
            cout << "=========Tabel Perkalian=========\n";
            cout << "Tampilkan Tabel Perkalian: ";
            cin >> a;
            for (int j = 1; j <= 20; j++)
            {
                cout << a << " * " << j << " = " << a * j << endl;
            }
        }else if (respon == 'n')
        {
            system("cls");
            break;
        }else 
        {
            cout << "Masukkan 'y' atau 'n'" << endl;
        }
        getchar();
    }
    return 0;
}