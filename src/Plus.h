#pragma once

class Plus : public Operation {

public:

    Plus() {
        setSign('+');
        setPriority(1);
    };

    float result(int a, int b) override {
        return a + b;
    }

};