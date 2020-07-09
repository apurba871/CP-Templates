long long recursive_euclidean_gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return recursive_euclidean_gcd(b, a % b);
}


long long iterative_euclidean_gcd(long long a, long long b) {
    while (b > 0) {
        long long c = b;
        b = a % b;
        a = c;
    }
    return a;
}
