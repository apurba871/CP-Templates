#include <bits/stdc++.h>

using namespace std;

void func_to_call() {
    for (int i = 0; i < 1000000; ++i);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    auto t1 = std::chrono::high_resolution_clock::now();
    func_to_call();
    auto t2 = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    cout << "Time taken: " << duration << " micro-seconds"<< endl;

    return 0;
}
