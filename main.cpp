#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    char *input;
    cout << "Введите выражение: " << endl;
    cin.getline(input, 200);
    cout << "Результат: " << endl << RPN(input) << endl << endl;
}

