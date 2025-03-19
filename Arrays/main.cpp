#include<iostream>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "");
    const int SIZE = 11; 
    int arr[SIZE];
    int n;

    cout << "Введите размер массива (не больше " << SIZE << "): ";
    cin >> n;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Элемент [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Массив в обычном порядке: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Массив в обратном порядке: ";
    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i) 
    {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;
    double average = (double)sum / n;
    cout << "Среднее арифметическое элементов массива: " << average << endl;
    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i) 
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) 
        {
            maxVal = arr[i];
        }
    }
    cout << "Минимальное значение в массиве: " << minVal << endl;
    cout << "Максимальное значение в массиве: " << maxVal << endl;
}