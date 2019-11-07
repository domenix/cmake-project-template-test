#ifndef CMAKE_ADDITION_H
#define CMAKE_ADDITION_H

#include <iostream>
#include <stdexcept>

using namespace std;

struct Numbers {
    long long number1;
    long long number2;
};

struct AdditionResult {
    long long addition;

    friend bool operator==(const AdditionResult &lhs, const AdditionResult &rhs) {
        return lhs.addition == rhs.addition;
    }
};

class Addition {
public:
    explicit Addition(Numbers numbers) {
        this->numbers = numbers;
    }

    ~Addition() {
    };

    AdditionResult add();

protected:
    Numbers       numbers;
    AdditionResult result;
};

#endif //CMAKE_ADDITION_H
