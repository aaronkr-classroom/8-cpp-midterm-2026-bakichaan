#include "functions.h"

double calculateAverage(vector<int> grades) {
    int total = 0; // ; 추가

    for (int i = 0; i < grades.size(); i++) { // grads 오타
        total += grades[i]; // 세개 더하기
    }

    //double 추가해서 소수점
    return total / (double)grades.size();
}
