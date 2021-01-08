#include <iostream>
#include "GeneralMathematics.h"

using namespace std;


int main()
{

    cout << "Factorial of 10 using For Iteration: " << endl;
    cout << fnGMFactorialForIteration(10) << endl;

    cout << "Factorial of 10 using Do Iteration: " << endl;
    cout << fnGMFactorialDoIteration(10) << endl;

    cout << "Factorial of 10 using While Iteration: " << endl;
    cout << fnGMFactorialWhileIteration(10) << endl;

    cout << "Factorial of 10 using Head Recursion: " << endl;
    cout << fnGMFactorialRecursionHead(10) << endl;

    cout << "Factorial of 10 using Tail Recursion: " << endl;
    cout << fnGMFactorialRecursionTail(10) << endl;

    return 0;
}
