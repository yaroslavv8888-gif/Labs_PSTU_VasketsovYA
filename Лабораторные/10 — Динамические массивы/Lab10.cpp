#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int* Form(int n)
{
    int* M = new int[n];
    for(int i = 0; i < n; ++i)
        M[i] = rand() % 100 - 49;
    return M;
}

void Print(const int* M, int n)
{
    for(int i = 0; i < n; ++i)
        cout << setw(4) << M[i] << " ";
    cout << endl;
}

void Delete(int*& M)
{
    delete[] M;
    M = nullptr;
}

void Change(int*& M, int& n, int nom, int pos, const int* A, int K)
{
    for(int i = nom - 1; i < n - 1; ++i)
        M[i] = M[i + 1];
    --n;

    int* B = new int[n + K];
    for(int i = 0; i < pos - 1; ++i)
        B[i] = M[i];
    for(int i = 0; i < K; ++i)
        B[pos - 1 + i] = A[i];
    for(int i = pos - 1; i < n; ++i)
        B[i + K] = M[i];

    Delete(M);
    M = B;
    n += K;
}

int main()
{
    int n;
    cout << "Введи размер массива ";
    if(!(cin >> n) || n <= 0)
        return 1;

    int* M = Form(n);
    cout << "Массив до" << endl;
    Print(M, n);

    int nom, pos, K;
    cout << "Введи номер элемента для удаления ";
    if(!(cin >> nom) || nom < 1 || nom > n)
    {
        cout << "Неверный номер элемента" << endl;
        Delete(M);
        return 1;
    }

    cout << "Введи номер позиции вставки после удаления ";
    if(!(cin >> pos) || pos < 1 || pos > n)
    {
        cout << "Неверная позиция вставки" << endl;
        Delete(M);
        return 1;
    }

    cout << "Введи количество новых элементов ";
    if(!(cin >> K) || K <= 0)
    {
        cout << "Количество элементов должно быть больше нуля" << endl;
        Delete(M);
        return 1;
    }

    int* A = new int[K];
    cout << "Введи новые элементы" << endl;
    for(int i = 0; i < K; ++i)
    {
        if(!(cin >> A[i]))
        {
            cout << "Нужно ввести целые числа" << endl;
            Delete(A);
            Delete(M);
            return 1;
        }
    }

    Change(M, n, nom, pos, A, K);
    cout << "Массив после" << endl;
    Print(M, n);

    Delete(A);
    Delete(M);
    return 0;
}

