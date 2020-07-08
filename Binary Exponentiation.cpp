long long recursive_binary_exponentiation(long long base, long long exp) {
    if (exp == 0)
        return 1;
    long long res = recursive_binary_exponentiation(base, exp / 2);
    if (exp & 1) //if exp is odd
        return res * res * base;
    else
        return res * res;
}

long long iterative_binary_exponentiation(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1)
            res *= base;
        base *= base;
        exp >>= 1; //exp /= 2
    }
    return res;
}
