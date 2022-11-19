#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power){
    int answer = 0;

    for(int n = 1; n <= number; n++){
        int count = 0;
        for(int i = 1; i*i <= n; i++){
            if (i*i == n) count++;
            else if (n % i == 0) count += 2;
            if (count > limit){
                count = power;
                break;
            }
        }
        answer += count;
    }

    return answer;
}