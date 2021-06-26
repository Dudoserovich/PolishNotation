#pragma once

class Mod : public Operation {

public:

    Mod() {
        setSign('%');
        setPriority(2);
    };

    float result(int a, int b) override {
        if (b != 0) {
            return (a % b);
        } else {
            std::cout << "Нельзя взять остаток от деления на ноль!"<< std::endl;
            return a % 1;
        }
    }

};