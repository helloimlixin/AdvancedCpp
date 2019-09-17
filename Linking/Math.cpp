/**
 * If we compile this program, it will result into a Linker error (ld) due to missing
 * of the Entry Point (main function).
 */
#include <iostream>

void Log(const char* message) {
    std::cout << message << std::endl;
}

int Multiply(int a, int b) {
    Log("Multiply");
    return a * b;
}
