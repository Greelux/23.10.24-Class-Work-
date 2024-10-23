#include <iostream>
#include <ctime> 
#include "config.h"

using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int array[ARRAY_SIZE];

#ifdef TEST_MODE
    srand(time(nullptr)));
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = rand() % 10 + 1; 
    }
    cout << "Test Mode: ";
#else
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = i + 1;
    }
    cout << "Normal Mode: ";
#endif

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}

