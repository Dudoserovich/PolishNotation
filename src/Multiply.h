#pragma once

class Multiply : public Operation {

public:

    Multiply() {
        setSign('*');
        setPriority(2);
    };

    float result(int a, int b) override {
        return a * b;
    }

protected:

};