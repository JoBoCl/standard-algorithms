//
//  array-queue.hpp
//  standard-algorithms
//
//  Created by Joshua Clark on 07/08/2016.
//  Copyright © 2016 Joshua Clark. All rights reserved.
//

#ifndef array_queue_hpp
#define array_queue_hpp

#include <stdio.h>

template <class T, int size> class ArrayQueue {
private:
    T storage[size];
    int tail = 0;
    int head = 0;
public:
    T dequeue() {
        if (tail == head) {
            throw;
        }
        return storage[tail++];
    }
    
    void queue(T t) {
        if (head + 1 == tail) {
            throw;
        }
        storage[head++] = t;
    }
    
    bool isEmpty() {
        return tail == head;
    }
    
    bool isFull() {
        
    }
};

#endif /* array_queue_hpp */
