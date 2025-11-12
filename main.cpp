#include <bits/stdc++.h>

bool isPrime(int num)
{
    if(num <= 1) return false;
    if(num > 2 && num%2==0) return false;
    int lim = (int)(sqrt(num));

    for(int i=3; i<=lim; i+=2){
        if(num%i==0) return false;
    }

    return true;
}

int main() {
    // Ensure basic IO streams are usable
    if (!std::cin.good() || !std::cout.good()) {
        return 1; // non-zero on I/O failure
    }

    int a;
    std::cin >> a;
    std::cout << isPrime(a) << std::endl;

    return 0;
}
