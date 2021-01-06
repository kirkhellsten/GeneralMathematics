#include <iostream>
#include "GeneralMathematics.h"

using namespace std;


int main()
{

    cout << "Factorial of 10 using For Iteration: " << endl;
    cout << gm_factorial_for_iteration(10) << endl;

    cout << "Factorial of 10 using Do Iteration: " << endl;
    cout << gm_factorial_do_iteration(10) << endl;

    cout << "Factorial of 10 using While Iteration: " << endl;
    cout << gm_factorial_while_iteration(10) << endl;

    cout << "Factorial of 10 using Head Recursion: " << endl;
    cout << gm_factorial_recursion_head(10) << endl;

    cout << "Factorial of 10 using Tail Recursion: " << endl;
    cout << gm_factorial_recursion_tail(10) << endl;

    return 0;
}
