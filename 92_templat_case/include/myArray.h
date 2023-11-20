#pragma once
#include <iostream>
using namespace std;

template <class T>
class myArray
{
private:
    T *pAddress;
    int m_size;
    int m_capacity;

public:
    myArray(int capacity)
    {
        cout << "Parameter construct call of MyArray" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[this->m_capacity];
    }

    myArray(const myArray &arr)
    {
        cout << "Copy construct call of MyArray" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;

        this->pAddress = new T[arr.m_capacity];
        for (int i = 0; i < this->m_size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    myArray &operator=(const myArray &arr)
    {
        cout << "operator= call of MyArray" << endl;
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_capacity = 0;
            this->m_size = 0;
        }

        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];
        for (int i = 0; i < this->m_size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    void Push_Back(const T &val)
    {
        if (this->m_capacity == this->m_size)
        {
            return;
        }
        this->pAddress[this->m_size] = val;
        this->m_size++;
    }

    void Pop_Back()
    {
        if (this->m_size == 0)
        {
            return;
        }
        this->m_size--;
    }

    T &operator[](int index)
    {
        return this->pAddress[index];
    }

    int getCapacity()
    {
        return this->m_capacity;
    }

    int getSize()
    {
        return this->m_size;
    }

    ~myArray()
    {
        cout << "Deconstruct call of MyArray" << endl;
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }
};