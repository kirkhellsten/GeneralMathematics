#ifndef GENERALMATHEMATICS_H_INCLUDED
#define GENERALMATHEMATICS_H_INCLUDED

unsigned int fnGMfactorialRecursionHead(unsigned int n);

// Factorial coded using for loop, finding the series of products from n to 1
// Do not need to compute some number N times 1 since equals N, thus condition i > 1 used,
// in the case n = 0 factorial initially set to 1, this handles 0! = 1
unsigned int fnGMFactorialForIteration(unsigned int n) {
    unsigned int factorial = 1;
    for (unsigned int i = n; i > 1; --i) {
        factorial *= i;
    }
    return factorial;
}

// Factorial coded using do loop
// Same loop condition applies as seen in for loop iteration except on n
unsigned int fnGMFactorialDoIteration(unsigned int n) {
    unsigned int factorial = 1;
    do {
        factorial *= n;
        --n;
    } while (n > 1);
    return factorial;
}

// Factorial coded using while loop
// Same loop condition applies as seen in for loop iteration except on n
unsigned int fnGMFactorialWhileIteration(unsigned int n) {
    unsigned int factorial = 1;
    while (n > 1) {
        factorial *= n;
        --n;
    };
    return factorial;
}

// Factorial coded using head recursion
unsigned int fnGMFactorialRecursionHead(unsigned int n) {
    if (n == 1) {
        return n;
    } else {
        return n * fnGMFactorialRecursionHead(n - 1);
    }
}

// Factorial coded using tail recursion
// runningTotal set to default value 1, this handles in case n <= 1
unsigned int fnGMFactorialRecursionTail(unsigned int n, unsigned int runningTotal = 1) {
    if (n <= 1) {
        return runningTotal;
    } else {
        return fnGMFactorialRecursionTail(n - 1, n * runningTotal);
    }
}

#endif // GENERALMATHEMATICS_H_INCLUDED
