#include <vector>
#include <string>

using namespace std;

int solution(vector<string> babbling) {

  int answer = 0;
  vector<string> words{"aya", "ye", "woo", "ma"};
  
  for(int i = 0; i < babbling.size(); i++){
    int num = babbling[i].length(); 
    for (int j = 0; j < words.size(); j++) {
      if (babbling[i].find(words[j]) != -1) num -= words[j].length();
    }
    if (num == 0) answer += 1;
  }
  return answer;
}

// 옹알이 길이가 찾은 단어들의 길이의 합과 같으면 말할 수 있다.
