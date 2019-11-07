#include "addition.h"

AdditionResult Addition::add() {
    AdditionResult result = AdditionResult{
            numbers.number1 + numbers.number2
    };

    return result;
}