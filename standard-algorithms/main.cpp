//
//  main.cpp
//  standard-algorithms
//
//  Created by Joshua Clark on 07/08/2016.
//  Copyright © 2016 Joshua Clark. All rights reserved.
//

#include <iostream>
#include "array-stack.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    ArrayStack<int, 4> testStack;
    
    testStack.push(1);
    std::cout << "Pushed 1\n";
    if (testStack.pop() == 1) {
        std::cout << "Popped 1\n";
    } else {
        std::cout << "Error, bad pop\n";
    }

    return 0;
}
