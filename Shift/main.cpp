#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
    const int SIZE = 10;
    int arr[SIZE] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    int shifts;
    cout << "¬ведите количество сдвигов влево: ";
    cin >> shifts;

    shifts = shifts % SIZE;
    if (shifts < 0) 
    {
        shifts = shifts + SIZE;
    }
    for (int i = 0; i <= shifts; ++i) 
    {
        for (int j = 0; j < SIZE; ++j) 
        {
            cout << arr[j] << "\t";
        }
        cout << endl;

        if (i < shifts) 
        {
            int temp = arr[0];
            for (int j = 0; j < SIZE - 1; ++j) 
            {
                arr[j] = arr[j + 1];
            }
            arr[SIZE - 1] = temp;
        }
    }
}