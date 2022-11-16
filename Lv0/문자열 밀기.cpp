// 나의 풀이

#include <string>

using namespace std;

int solution(string A, string B){
  for(int i = 0; i < A.length(); i++){
    if (A == B) return i;
    A = A.back() + A;
    A.pop_back();
  }
  return -1;
}


// 다른 사람의 풀이
//#include <string>
//
//using namespace std;
//
//int solution(string A, string B)
//{
//    B += B;
//    return B.find(A);
//}
