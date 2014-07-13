#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    char in[100];

    cout << "Введите" << endl;
    cin >> in;

    for(int i=0; i<=100; i++)
    {
        switch (in[i])
            case 'q':
                in[i] = 'й';
                break;
            case 'w':
                in[i] = 'ц';
                break;
            case 'e':
                in[i] = 'у';
                break;
            case 'r':
                in[i] = 'к';
                break;
            case 't':
                in[i] = 'е';
                break;
            case 'y':
                in[i] = 'н';
                break;
            default:
                cout << "Ошибка";
                break;
    }

    cout << in;

    return 0;
}
