#include <iostream>
using namespace std;

// ----------------- Function Templates -----------------

// Addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Subtraction
template <typename T>
T subtract(T a, T b) {
    return a - b;
}

// Multiplication
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

// Division
template <typename T>
T divide(T a, T b) {
    if (b == 0) {
        cout << "Error! Division by zero.\n";
        return 0;
    }
    return a / b;
}

// ----------------- Class Template -----------------
template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayOperations() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add(num1, num2) << endl;
        cout << "Subtraction: " << subtract(num1, num2) << endl;
        cout << "Multiplication: " << multiply(num1, num2) << endl;
        cout << "Division: " << divide(num1, num2) << endl;
    }
};

// ----------------- Main Function -----------------
int main() {
    cout << "--- Generic Calculator ---\n";

    cout << "\nInteger Calculation:" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.displayOperations();

    cout << "\nFloat Calculation:" << endl;
    Calculator<float> floatCalc(10.5f, 2.5f);
    floatCalc.displayOperations();

    cout << "\nDouble Calculation:" << endl;
    Calculator<double> doubleCalc(12.34, 3.56);
    doubleCalc.displayOperations();

    return 0;
}
