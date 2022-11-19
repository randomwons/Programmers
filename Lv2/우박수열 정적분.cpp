#include <string>
#include <vector>

using namespace std;

vector<int> collatz(int k){
    vector<int> y{k};
    while (k != 1){
        if (k % 2 == 0) k /= 2;
        else k = 3 * k + 1;
        y.push_back(k);
    }
    return y;
}

double integral(const vector<int>& y, const vector<int>& range){

    int a = range[0];
    int b = y.size() + range[1] - 1;
    if (b < a) return -1.0;
    double area = 0;

    for(int i = a; i < b; i++){
        area += (double)(y[i]+y[i+1])/2.0;
    }
    return area;
}

vector<double> solution(int k, vector<vector<int>> ranges){
    vector<double> answer;
    vector<int> y = collatz(k);

    for(vector<int> range : ranges){
        answer.push_back(integral(y, range));
    }

    return answer;
}