const int MAXN = 86028121; // 5 million-th prime number

//Use either vector< bool > or bitset
//vector< bool > is faster by ~1.065614804 times in gcc 5.1.0

vector< bool > is_prime(MAXN + 1, false);
//bitset< MAXN + 1 > is_prime;
vector< int > p; //Vector to store all primes

void sieve() {
    is_prime[0] = is_prime[1] = 1;

    int n = MAXN;
    //cout << "sieving" << endl;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (!is_prime[i]) {
            for (int j = i*i; j <= n; j += i)
                is_prime[j] = 1;
        }
    }
    //cout << "sieved" << endl;

    //To find k th prime number
    for (int i = 2; i <= MAXN; ++i)
        if (!is_prime[i])
            p.push_back(i);
}
