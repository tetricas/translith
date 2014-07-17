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
        if(in[i]=='_')          //при появлении пробела в строке, она разделяется на разные вводы,
            in[i] = ' ';        //в следствии чего, конвертируется только первый

        if(in[i]=='q')
            in[i] = 'й';

        if(in[i]=='w')
            in[i] = 'ц';

        if(in[i]=='e')
            in[i] = 'у';

        if(in[i]=='r')
            in[i] = 'к';

        if(in[i]=='t')
            in[i] = 'е';

        if(in[i]=='y')
            in[i] = 'н';

        if(in[i]=='u')
            in[i] = 'г';

        if(in[i]=='i')
            in[i] = 'ш';

        if(in[i]=='o')
            in[i] = 'щ';

        if(in[i]=='p')
            in[i] = 'з';

        if(in[i]=='[')
            in[i] = 'х';

        if(in[i]==']')
            in[i] = 'ъ';

        if(in[i]=='a')
            in[i] = 'ф';

        if(in[i]=='s')
            in[i] = 'ы';

        if(in[i]=='d')
            in[i] = 'в';

        if(in[i]=='f')
            in[i] = 'а';

        if(in[i]=='g')
            in[i] = 'п';

        if(in[i]=='h')
            in[i] = 'р';

        if(in[i]=='j')
            in[i] = 'о';

        if(in[i]=='k')
            in[i] = 'л';

        if(in[i]=='l')
            in[i] = 'д';

        if(in[i]==';')
            in[i] = 'ж';

        if(in[i]=='z')
            in[i] = 'я';

        if(in[i]=='x')
            in[i] = 'ч';

        if(in[i]=='c')
            in[i] = 'с';

        if(in[i]=='v')
            in[i] = 'м';

        if(in[i]=='b')
            in[i] = 'и';

        if(in[i]=='n')
            in[i] = 'т';

        if(in[i]=='m')
            in[i] = 'ь';

        if(in[i]==',')
            in[i] = 'б';

        if(in[i]=='.')
            in[i] = 'ю';

        if(in[i]=='/')
            in[i] = '.';

        if(in[i]=='&')
            in[i] = '?';

        if(in[i]=='`')
            in[i] = 'ё';

        if(in[i]=='?')
            in[i] = ',';

        /*switch (in[i])
            case 'q':                   не работающий єлемент кода
                in[i] = 'й';            
                break;                  по идее,вместо єтого леса ifов должен
            case 'w':                   біл біть аккуратненький switch
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
                break;*/
    }

    cout << in << endl;

    system("PAUSE");
    return 0;
}
