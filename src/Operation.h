#pragma once

class Operation {
    char sign = 0;
    unsigned short int priority = 0;
public:

    virtual float result(int a, int b) {
        return -1;
    }

    [[nodiscard]] char getSign() const {
        return sign;
    }

    void setSign(char a) {
        sign = a;
    }

    [[nodiscard]] unsigned short int getPriority() const {
        return priority;
    }

    void setPriority(unsigned short int prior) {
        priority = prior;
    }

};