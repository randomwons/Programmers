#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (a % b == 0) return b;
    else return(gcd(b, a % b));
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    
    int num3 = num1 * num2;
    int denum3 = denum1*num2 + denum2*num1;
    int d = denum3 > num3 ? gcd(denum3, num3) : gcd(num3, denum3);
    
    vector<int> answer = {denum3 / d, num3 / d};
    return answer;
}