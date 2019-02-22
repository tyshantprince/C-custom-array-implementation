//============================================================================
// Name        : Asg1.cpp
// Author      : Chung-Chih Li
// Version     :
// Copyright   : Your copyright notice
// Description : Created on: Jan 28, 2019
//============================================================================

#include <iostream>
#include "myArray.h"
using namespace std;

/*
 * This function should be defined in myArray.cpp
 * This function will return a myArray that contains first n Fibonacci numbers.
 */
myArray fibonacci(int n);

/*
 * This function will take a pointer of myArray and replace every entry with a random
 * integer between 0 and the size of the myArray pointed by na in the argument.
 *
 */
 void rand(myArray *ma);


void test(myArray a) {
    cout <<  endl;
    for (int i = 0; i< a.getSize(); i++) {
        cout <<  a[i] << " ";
    }
    cout << endl;
    cout << "size=" << a.getSize() << " ";
    cout << "max=a["<< a.max() << "]=" << a[a.max()] << " ";
    cout << "min=a["<< a.min() << "]=" << a[a.min()] << " ";
    cout << "average=" << a.average() << endl;

}

 void test() {
 	myArray a = fibonacci(20);
 	cout << "20 Fibonacci numbers:" << endl;
 	test(a);
 	rand(&a);
 	test(a);
 	myArray b,c;
 	b = c = a;
 	rand(&a);
 	test(a);
 	test(b);
 	test(c);

 }


int main() {

    test();


    return 0;
}
