#pragma once

class Division : public Operation {

public:

    Division() {
        setSign('/');
        setPriority(2);
    };

    float result(int a, int b) override {
        if (b != 0) {
            return float(float(a) / float(b));
        } else {
            std::cout << "Произошло деление на ноль!" << std::endl;
            return a;
        }
    }

};