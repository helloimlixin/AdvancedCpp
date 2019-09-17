//
//  Math.cpp
//  Linking
//
//  This will result in a Linker error during Building with the main methodÇ.
//
//  Created by Xin Li on 9/17/19.
//  Copyright © 2019 Xin Li. All rights reserved.
//

#include <iostream>

void Log(const char* message);

int Multiply(int a, int b) {
    Log("Multiply");
    return a * b;
}

// Here we have the entry point for the linker to work, note that
// the entry point does not need to be a main function.
int main() {
    std::cout << Multiply(5, 8) << std::endl;
//    std::cin.get(); // a simple code to make sure that the console does not close immediately.
}
