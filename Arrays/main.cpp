#include<iostream>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "");
    const int SIZE = 11; 
    int arr[SIZE]
    int size;

    cout << "������� ������ ������� (�� ������ " << SIZE << "): ";
    cin >> size;
    cout << "������� �������� �������: " << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "������� [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "������ � ������� �������: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "������ � �������� �������: ";
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < size; ++i) 
    {
        sum += arr[i];
    }
    cout << "����� ��������� �������: " << sum << endl;
    double average = (double)sum / size;
    cout << "������� �������������� ��������� �������: " << average << endl;
    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) 
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
    cout << "����������� �������� � �������: " << minVal << endl;
    cout << "������������ �������� � �������: " << maxVal << endl;
}