#include<iostream>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "");
    const int SIZE = 11; 
    int arr[SIZE];
    int n;

    cout << "������� ������ ������� (�� ������ " << SIZE << "): ";
    cin >> n;
    cout << "������� �������� �������: " << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "������� [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "������ � ������� �������: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "������ � �������� �������: ";
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
    cout << "����� ��������� �������: " << sum << endl;
    double average = (double)sum / n;
    cout << "������� �������������� ��������� �������: " << average << endl;
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
    cout << "����������� �������� � �������: " << minVal << endl;
    cout << "������������ �������� � �������: " << maxVal << endl;
}