//https://en.wikipedia.org/wiki/Euclidean_algorithm
#include <iostream>
#include <cassert>

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    int rem = a%b;
    return gcd(b,rem);
}


int main(int argc, char const *argv[]) {
    assert(gcd(10,5)==5);
    assert(gcd(18,8)==2);
    assert(gcd(2,12)==2);
    assert(gcd(1,1)==1);
    return 0;
}
