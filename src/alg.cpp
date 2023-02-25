// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>


bool checkPrime(uint64_t value) {
    bool x = true;
    if (value == 2)
        return x;
    for (int q = 2; q < sqrt(value) + 1; q++) {
        if (value % q == 0)
            x = false;
        }
        return x;
}

uint64_t nPrime(uint64_t n) {
    int c = 1, shet = 0;
    while (true) {
        bool x = true;
        c++;
        if (c != 2) {
            for (int q = 2; q < sqrt(c) + 1; q++) {
                if (c % q == 0)
                    x = false;
            }
        }
        //std::cout << x;
        if (x == true)
            shet++;
        if (shet == n)
            return c;
    }
}

uint64_t nextPrime(uint64_t value) {
    int c = value;
    if (value < 2)
        return 2;
    while (true) {
        bool x = true;
        c++;
        for (int q = 2; q < sqrt(c) + 1; q++) {
            if (c % q == 0)
                x = false;
        }
        if (x == true)
            return c;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 2;
    if (hbound < 3)
        return 0;
    for (int q = 2; q < hbound; q++) {
        bool x = true;
        for (int w = 2; w < sqrt(q) + 1; w++) {
            if (q % w == 0)
                x = false;
        }
        if (x == true) {
            sum += q;
        }
        //std::cout << q << " " << sum << std::endl;
    }
    return sum;
}
