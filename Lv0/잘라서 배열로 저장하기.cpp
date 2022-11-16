#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for (int i = 0; i < my_str.length(); i+=n){
        answer.push_back(my_str.substr(i, n));
    }
    
    return answer;
}

// substr에서 n이 배열길이보다 길면 에러가 생길줄 알고 푼 처음 풀이

//#include <string>
//#include <vector>

//using namespace std;

//vector<string> solution(string my_str, int n){
//  vector<string> answer;
//  
//  while (my_str.length() > n) {
//    answer.pushback(my_str.substr(0, n));
//    my_str.erase(0, n);
//  }
//  answer.push_back(my_str);
//  
//  return answer;
//}
