#include <bits/stdc++.h>

using namespace std;

class MyCircularQueue
{
public:
    vector<int> data;
    int start, current, size;

    MyCircularQueue(int k) : data(vector<int>(k)), start(0), current(0), size(0)
    {
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;

        data[current] = value;
        current = (current + 1) % data.size();
        size++;
        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;

        start = (start + 1) % data.size();
        size--;
        return true;
    }

    int Front()
    {
        if (isEmpty())
            return -1;
        return data[start];
    }

    int Rear()
    {
        if (isEmpty())
            return -1;
        return data[(current + data.size() - 1) % data.size()];
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == data.size();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */