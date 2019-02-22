#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "myArray.h"

myArray::myArray() : size(20)
{
    A = new int[size];
}

myArray::myArray(int s, int iv) : size(s)
{
    A = new int[size];
    for(int i = 0; i < size; i++){
        A[i] = iv;
    }
}

myArray::myArray(const myArray& rhs): size(rhs.size), A{nullptr}
{
    A = new int[size];
    for (int k = 0; k < size; ++k)
        A[k] = rhs.A[k];
}

myArray& myArray::operator=(const myArray &rhs)
{
    if(this != &rhs){
        size = rhs.size;
        std::copy(rhs.A, rhs.A+size, A);

    }
    return *this;
}

myArray::~myArray()
{
    delete [] A;
} 

int & myArray::operator[] (const int i)
{
    return A[i];
}

double myArray::average()
{
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += A[i];
    }
    return sum / size;
}

int myArray::max()
{
    int max=0;
    for (int i = 0; i < size; i++){
        if(max < A[i])
            max = i;
    }
    return max;
}

int myArray::min()
{
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (A[i] < min)
            min = i;
    }
    return min;
}

int myArray::getSize()
{
    return size;
}

myArray fibonacci(int n)
{
    myArray arr ;

    for(int i = 0; i < n;i++){
        if ( i == 0 ) arr[i] = 0;
        else if ( i == 1 ) arr[i] = 1;
        else arr[i] = arr[i -1] + arr[i -2];
    }

    return arr;

}

void rand(myArray *ma)
{
    for(int i =0; i<ma->getSize();i++)
    {
        (*ma)[i] = std::rand() % ma->getSize();
    }

}