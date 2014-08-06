#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <clocale>

using namespace std;

const char *rus_array = "йцукенгшщзхъфывапролджэячсмитьбю";
const char *eng_array = "qwertyuiop[]asdfghjkl;'zxcvbnm,.";

char GetRusSymbol(char in)
{
	char out = 0;
	char  *pEng = (char *)&eng_array[0];
	char  *pRus = (char *)&rus_array[0];

	while( *pEng)
	{
		if( *pEng == in)
		{
			out = *pRus;
			break;
		}
		else
		{
			pRus++;
            pEng++;
		}
	}
	return out;
}

int main()
{
    setlocale(LC_ALL, "");          //эта строчка даёт возможность CodeBlocks работать с языком системы(русским)

    char in;

    cout << "Введите" << endl;
    cin >> in;

    GetRusSymbol(in);
    
    cout << in << endl;
       
    system("PAUSE");
    return 0;
}
