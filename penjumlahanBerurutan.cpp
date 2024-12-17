#include <iostream>
using namespace std;

int main() 
{
    int n, jumlah;
    cout << "=====Program Penjumlahan Berurutan=====\n";
    while (true){
        cout << "Mulai? (y/n) ";
        char mulai = tolower(getchar());
        if (mulai == 'y')
        {
            cout << "Masukkan nilai ke-n: ";
            cin >> n;
            jumlah = 0;
            for (int i = 1; i <= n; i++)
            {
                jumlah += i;
                cout << i;
                if (i < n) {
                cout << " + ";
                }else if (i == n)
                {
                    cout << " = " << jumlah << endl;
                }
            } 
        }else if (mulai == 'n')
        {
            system("cls");
            break;
        }else
        {
            cout << "Input tidak valid\n";
        }
        getchar();
    }
    
    return 0;
}