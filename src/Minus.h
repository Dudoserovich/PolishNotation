#pragma once

class Minus : public Operation {

public:

    Minus() {
        this->setSign('-');
        this->setPriority(1);
    };

    float result(int a, int b) override {
        return a - b;
    }

};