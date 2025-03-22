#include<iostream>

using namespace std;

//#define DOUBLESYS
#define SIXTEEN

void main() 
{
    setlocale(LC_ALL, "");
#ifdef DOUBLESYS
    int n;
    cout << "¬ведите целое число: ";
    cin >> n;
    int maxsize[32];
    int i = 0;
    while (n > 0)
    {
        maxsize[i] = n % 2; 
        n /= 2;                  
        i++;
    }
    cout << "ƒвоичное число: ";
    for (int j = i - 1; j >= 0; --j) 
    {
        cout << maxsize[j];
    }
    cout << endl;
#endif DOUBLESYS

#ifdef SIXTEEN
    int n;
    cout << "¬ведите целое число: ";
    cin >> n;
    char maxsize[32];
    int i = 0;
    while (n > 0) 
    {
        int remainder = n % 16;
        char hexDigit;

        if (remainder < 10)
        {
            hexDigit = remainder + '0';
        }
        else {
            hexDigit = remainder - 10 + 'A';
        }

        maxsize[i] = hexDigit;
        n /= 16;
        i++;
    }
    maxsize[i] = '\0'; 
    cout << "Ўестнадцатеричное число: ";
    for (int j = i - 1; j >= 0; --j) 
    {
        cout << maxsize[j];
    }
    cout << endl;
#endif SIXTEEN
}