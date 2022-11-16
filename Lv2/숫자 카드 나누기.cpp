#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// array의 수를 전부 나눌 수 있는 수 List
vector<int> divideAll(vector<int> array){
    vector<int> divides;

    int min = *min_element(array.begin(), array.end());
    for(int i = 2; i < min; i++){
        bool isDivide = true;
        for(int j = 0; j <array.size(); j++){
            if (array[j] % i != 0) {
                isDivide = false;
                break;
            }
        }
        if (isDivide) divides.push_back(i);
    }

    return divides;
}

// array를 전부 나눌 수 없는 값들의 최대값
int dividesNo(vector<int> array, vector<int> divides){
    int max = 0;
    for(int divide : divides){
        bool isDivide = false;
        for(int v : array){
            if (v % divide == 0){
                isDivide = true;
                break;
            }
        }
        if (!isDivide){
            if (max < divide) max = divide;
        }
    }
    return max;
}

int solution(vector<int> arrayA, vector<int> arrayB){
    // A를 전부 나눌 수 있는 List
    vector<int> dividesAllA = divideAll(arrayA);
    // B를 전부 나눌 수 있는 List
    vector<int> dividesAllB = divideAll(arrayB);

    // A를 전부 나눌 수 있는 List중 B를 전부 나눌 수 없는 수의 최대값
    int a = dividesNo(arrayB, dividesAllA);
    // B를 전부 나눌 수 있는 List중 A를 전부 나눌 수 없는 수의 최대값
    int b = dividesNo(arrayA, dividesAllB);

    return (a > b) ? a : b;
}
