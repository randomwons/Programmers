#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling){
  int answer = 0;
  vector<string> words{"aya", "ye", "woo", "ma"};
  
  for(string bab : babbling){
    int num = bab.length();
    for(string word : words){
      if (bab.find(word+word) != string::npos) continue;
      while (bab.find(word) != string::npos){
        num -= word.length();
        bab.replace(bab.find(word), word.length(), " ");
      }
    }
    if (num == 0) answer += 1;
  }
}
       
