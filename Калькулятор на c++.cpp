// Калькулятор на c++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include<Windows.h>
#include<math.h>
#include "Калькулятор на c++.h"
using namespace std;
int main()
{   
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");
    string dest;
    cout << "Чтобы начать напишите \"go\"\nДля выхода напишите \"quit\"." << endl;
    cin >> dest;
    while (dest == "go" || dest != "quit")
    {
        string operation;
        cout << "Введите операцию: ";
        cin >> operation;
        if (operation == "+")
        {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a + b << endl;
        }
        else if (operation == "-") {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a - b << endl;
        }
        else if (operation == "/") {
            double a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a / b << endl;
        }
        else if (operation == "*") {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a * b << endl;
        }
        else if (operation == "**") {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << pow(a, b) << endl;
        }
        else if (operation == "coren") {
            float a;
            auto b = 0.5;
            cout << "Введите первое число: ";
            cin >> a;
            cout << pow(a, b) << endl;
        }
        else if (operation == "fact") {
            int number;
            int factorial = 1;
            cin >> number;
            for (int i = 1; i <= number; ++i) {
                factorial *= i;
            }
            cout << "Факториал от числа равен: " << factorial << endl;
        }
        else if (operation == "%") {
            double a;
            cout << "Введите  число: ";
            cin >> a;
            cout << "Процент от числа равен: " << a / 100 << endl;
        }
    }
       
    return 0;
}

