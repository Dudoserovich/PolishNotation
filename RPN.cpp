#include "pch.h"
#include <iostream>
#include <stack>
#include "Operation.h"
#include "Plus.h"
#include "Minus.h"
#include "Multiply.h"
#include "Mod.h"
#include "Division.h"

using namespace std;

struct oper {
    char sign;
    Operation *operation;
};

const int max_operations = 20;

[[maybe_unused]] Operation *all_operations[max_operations];
oper sign_arr[max_operations];

int signSearch(char a) {
    // обычный линейный поиск
    for (int i = 0; i < max_operations; ++i) {
        if (sign_arr[i].sign == a) {
            return i;
        }
    }
    return -1;
}

int RPN(char *input) {

    // подключение операций
    Plus *plus = new Plus();
    all_operations[0] = plus;
    sign_arr[0].sign = plus->getSign();
    sign_arr[0].operation = plus;

    auto *minus = new Minus();
    all_operations[1] = minus;
    sign_arr[1].sign = minus->getSign();
    sign_arr[1].operation = minus;

    auto *multiply = new Multiply();
    all_operations[2] = multiply;
    sign_arr[2].sign = multiply->getSign();
    sign_arr[2].operation = multiply;

    auto *division = new Division();
    all_operations[3] = division;
    sign_arr[3].sign = division->getSign();
    sign_arr[3].operation = division;

    Mod *op4 = new Mod();
    all_operations[4] = op4;
    sign_arr[4].sign = op4->getSign();
    sign_arr[4].operation = op4;


    stack<char> stack1;
    stack<char> stack2;

    const int N = 200;
    char output[N];
    int j = 0;

    for (j = 0; j < N; ++j) {
        output[j] = 0;
    }

    int i = 0;
    int i_stack = 0;
    int i_output = 0;

    while (input[i] != 0) {
        if (input[i] != ' ') {
            if ((signSearch(input[i]) != -1) || (input[i] == '(') || (input[i] == ')')) {
                if ((i_stack > 0)) {
                    if (((((input[i]) != '(') && (input[i]) != ')')) &&
                        ((((stack1.top()) != '(') && (stack1.top()) != ')')) &&
                        ((sign_arr[signSearch(input[i])].operation->getPriority()) <=
                         (sign_arr[signSearch(stack1.top())]).operation->getPriority())) {

                        output[i_output] = stack1.top();
                        ++i_output;
                        stack1.pop();
                        --i_stack;

                        stack1.push(input[i]);
                        ++i_stack;
                    } else {
                       if (input[i] == ')') {
                            while (stack1.top() != '(') {
                                if ((signSearch(stack1.top()) != -1)) {
                                    output[i_output] = stack1.top();
                                    ++i_output;
                                    stack1.pop();
                                    --i_stack;
                                }
                            }
                            stack1.pop();
                            --i_stack;
                        } else {
                            stack1.push(input[i]);
                            ++i_stack;
                        }
                    }
                } else {
                    stack1.push(input[i]);
                    ++i_stack;
                }
            } else {
                output[i_output] = input[i];
                ++i_output;
            }
        }
        ++i;
    }

    while (i_stack > 0) {
        output[i_output] = stack1.top();
        ++i_output;
        stack1.pop();
        --i_stack;
    }

    i_stack = 0;
    i_output = 0;
    int a;
    int b;
    float c;
    while (output[i_output] != 0) {
        if ((output[i_output] >= 48) && (output[i_output] <= 57)) {
            stack2.push(output[i_output] - 48);
            ++i_stack;
        } else {
            if (i_stack > 1) {
                if ((signSearch(output[i_output]) != -1)) {
                    a = stack2.top();
                    stack2.pop();
                    --i_stack;
                    b = stack2.top();
                    stack2.pop();
                    --i_stack;
                    j = 0;

                    c = sign_arr[signSearch(output[i_output])].operation->result(a, b);
                    stack2.push(c); // тут будут проблем с нецелочисленными числами
                    ++i_stack;
                }
            }
        }
        ++i_output;
    }

    return stack2.top();
}