//
// Created by hpf on 18-5-3.
//

#include "Queue.h"
#include <iostream>
#include <cassert>

template<class T>
class LoopQueue : public Queue<T> {
public:
    LoopQueue() {
        data = new T[10];
        front = 0;
        tail = 0;
        capacity = 10;
    }

    LoopQueue(int capacity) {
        data = new T[capacity];
        front = 0;
        tail = 0;
        this->capacity = capacity;
    }

    ~LoopQueue() {
        delete[] data;
        data = nullptr;
    }

    bool isEmpty() {
        return front == tail;
    }

    int getSize() {
        return (tail + capacity - front) % capacity;
    }

    int getCapacity() {
        return capacity;
    }

    void enqueue(T e) {
        if ((tail + 1) % capacity == front) {
            resize(capacity * 2);
        }
        data[tail] = e;
        tail = (tail + 1) % capacity;
    }

    T getFront() {
        assert(front != tail);
        return data[front];
    }

    T dequeue() {
        assert(front != tail);
        T ret = data[front];
        front = (front + 1) % capacity;
        if (getSize() == capacity / 4 && capacity / 2 != 0) {
            resize(capacity / 2);
        }
        return ret;
    }

    /**
     * ��ӡ���������Ԫ��
     */
    void print() {
        std::cout << "Queue: size = " << getSize() << ", capacity = " << capacity << std::endl;
        std::cout << "front [";
        for (int i = front; i != tail; i = (i + 1) % capacity) {
            std::cout << data[i];
            if ((i + 1) % capacity != tail) {
                std::cout << ", ";
            }
        }
        std::cout << "] tail" << std::endl;
    }

private:
    T* data;
    int front, tail;
    int capacity;

    void resize(int newCapacity) {
        T* newData = new T[newCapacity + 1];
        for (int i = 0; i < getSize(); ++i) {
            newData[i] = data[(i + front) % capacity];
        }
        data = newData;
        tail = getSize();
        front = 0;
        capacity = newCapacity;
    }

};