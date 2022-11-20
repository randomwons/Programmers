#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (a % b == 0) return 0;
    return gcd(b, a % b);
}

int solution(int n){
    return n > 6 ? n / gcd(n, 6) : n / gcd(6, n);
}