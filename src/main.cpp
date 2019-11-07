#include <division.h>
#include <addition.h>

static const char *const USAGE = "Usage:\n\tcalculator <operation> <number1> <number2>\n\nDescription:\n\tComputes the result of calculator operations,\n\tand reports back the result.\n";

int main(int argc, const char *argv[]) {
    Fraction f;

    // ensure the correct number of parameters are used.
    if (argc < 4) {
        std::cout << USAGE;
        return 1;
    }

    std::string arg1 = std::string(argv[1]);
    if (arg1 == "division") {
        f.numerator = atoll(argv[2]);
        f.denominator = atoll(argv[3]);

        Division d = Division(f);
        try {
            DivisionResult r = d.divide();

            std::cout << "Division : " << f.numerator << " / " << f.denominator << " = " << r.division << "\n";
            std::cout << "Remainder: " << f.numerator << " % " << f.denominator << " = " << r.remainder << "\n";
        } catch (DivisionByZero) {
            std::cout << "Can not divide by zero, Homer. Sober up!\n";
        }
    } else if (arg1 == "addition") {
        std::cout << "Let's add things together!" << std::endl;
    } else {
        std::cout << USAGE;
        return 1;
    }

    return 0;
}
