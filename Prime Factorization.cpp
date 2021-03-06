void prime_factorize(long long n) {
    long long ctr;
    for (long long i = 2; i <= sqrt(n); i++) {
        ctr = 0;
        while (n % i == 0) {
            n = n / i;
            ctr++;
        }
        if (ctr > 0)
            cout << i << "^" << ctr << endl;
        if (n == 1)
            break;
    }
    if (n > 1)
        cout << n << "^" << 1 << endl;
}
