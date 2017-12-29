//https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
#include <iostream>

void find_primes(int n){
    // integer 1 was not a prime
    if(n<=1){
        return;
    }
    bool * flag = new bool[n+1]{false};

    for(int i=2;i<n;i++){
        if(flag[i]==false){
            std::cout<<i<<" ";
        }
        for(int k=i*2;k<n;k+=i){
            flag[k] =  true;
        }
    }

    delete[] flag;
}

int main(int argc, char const *argv[]) {
    find_primes(120);
    return 0;
}
