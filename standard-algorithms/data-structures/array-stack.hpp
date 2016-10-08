//
//  array-stack.hpp
//  standard-algorithms
//
//  Created by Joshua Clark on 07/08/2016.
//  Copyright © 2016 Joshua Clark. All rights reserved.
//

#ifndef array_stack_hpp
#define array_stack_hpp

#include <stdio.h>

template <class T, int size> class ArrayStack {
private:
    T storage[size];
    int head;
    
public :
    ArrayStack() {
        head = 0;
    }
    T pop() {
        if (!isEmpty()) {
            return storage[--head];
        }
        throw;
    }
    void push(T t) {
        if (!isFull()) {
            storage[head++] = t;
            return;
        }
        throw;
    }
    bool isEmpty() {
        return head == 0;
    }
    bool isFull() {
        return head == size;
    }
};

#endif /* array_stack_hpp */
