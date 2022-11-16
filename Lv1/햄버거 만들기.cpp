#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    if (score.size() < m) return 0;
    int answer = 0;
    sort(score.begin(), score.end());

    for(int i = 0; i < score.size() / m; i++){
        answer += *(score.end() - i*m - 1 - (m-1)) * m;
    }

    return answer;
}
