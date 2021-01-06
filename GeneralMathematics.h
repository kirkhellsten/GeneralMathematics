#ifndef GENERALMATHEMATICS_H_INCLUDED
#define GENERALMATHEMATICS_H_INCLUDED

unsigned int gm_factorial_recursion_head(unsigned int pN);

// Factorial coded using for loop, finding the series of products from pN to 1
// Do not need to compute some number N times 1 since equals N, thus condition i > 1 used,
// in the case pN = 0 ret variable initially set to 1, this handles 0! = 1
unsigned int gm_factorial_for_iteration(unsigned int pN) {
    unsigned int ret = 1;
    for (unsigned int i = pN; i > 1; --i) {
        ret *= i;
    }
    return ret;
}

// Factorial coded using do loop
// Same loop condition applies as seen in for loop iteration except on pN variable
unsigned int gm_factorial_do_iteration(unsigned int pN) {
    unsigned int ret = 1;
    do {
        ret *= pN;
        --pN;
    } while (pN > 1);
    return ret;
}

// Factorial coded using while loop
// Same loop condition applies as seen in for loop iteration except on pN variable
unsigned int gm_factorial_while_iteration(unsigned int pN) {
    unsigned int ret = 1;
    while (pN > 1) {
        ret *= pN;
        --pN;
    };
    return ret;
}

// Factorial coded using head recursion
unsigned int gm_factorial_recursion_head(unsigned int pN) {
    if (pN == 1) {
        return pN;
    } else {
        return pN * gm_factorial_recursion_head(pN - 1);
    }
}

// Factorial coded using tail recursion
// pRunningTotal set to default value 1, this handles in case pN <= 2
unsigned int gm_factorial_recursion_tail(unsigned int pN, unsigned int pRunningTotal = 1) {
    if (pN <= 1) {
        return pRunningTotal;
    } else {
        return gm_factorial_recursion_tail(pN - 1, pN * pRunningTotal);
    }
}

#endif // GENERALMATHEMATICS_H_INCLUDED
