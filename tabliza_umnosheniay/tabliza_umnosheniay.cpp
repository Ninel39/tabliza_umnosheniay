// tabliza_umnosheniay.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int k;//вводит число
    cin >> k;//выводим это число
    if (k == 0)
        cout << "Ошибка";//если введут 0
    for (int i = 1; i <= 10; i++)// задаем условие
    {
        cout << k << "*" << i << "=" << k * i << endl;//резултат умножения всех чисел от 1 до 10 
    }

}
