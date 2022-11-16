#include <string>
#include <vector>


string solution(vector<int> food){
  string answer = "0";
  
  for(int i = food.size() - 1; i > 0; i--){
    for(int j = 0; j <food[i]/2; j++) {
      answer.insert(0, to_string(i));
      answer.push_back(to_string(i));
    }
  }
  return answer;
}
