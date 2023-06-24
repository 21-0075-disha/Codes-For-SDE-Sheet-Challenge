#include <bits/stdc++.h>

 

int modularExponentiation(int x, int n, int m) {

    if (m == 1) {

        return 0; // Invalid case, as all numbers are congruent to 0 modulo 1

    }

 

    int res = 1 % m;

    x = x % m;

 

    while (n > 0) {

        if (n & 1) {

            res = static_cast<long long>(res) * x % m;

        }

        x = static_cast<long long>(x) * x % m;

        n >>= 1;

    }

 

    return res;

}
