#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    vector<int> sc;
    double avg;
};

double calculateAverage(vector<int> grades);

#endif
// calculateAverage 함수
// functions.cpp -> functions.h -> main.cpp
/*결론부터 말하면 👉 가능합니다. 그리고 그게 C++에서 표준적인 구조예요.
다만 표현을 조금 바로잡아야 합니다.

👉 헤더파일이 cpp를 “불러오는 게 아니라”
👉 헤더는 선언만 제공하고, cpp는 따로 컴파일되어 링크되는 구조입니다.

✔️ 올바른 흐름 (중요)
main.cpp → average.h 포함
average.cpp → average.h 포함
(컴파일 시 둘을 같이 묶음)

👉 헤더는 “연결 다리” 역할만 합니다.

✔️ 왜 이렇게 하냐
main.cpp는 함수 내용을 몰라도 됨 (선언만 알면 됨)
실제 구현은 average.cpp에 있음
컴파일러가 나중에 둘을 링크해서 하나로 만듦*/

/*1️⃣ 
average.h (헤더 파일)
#ifndef AVERAGE_H
#define AVERAGE_H

#include <vector>

double calculateAverage(const std::vector<int>& v);

#endif*/
