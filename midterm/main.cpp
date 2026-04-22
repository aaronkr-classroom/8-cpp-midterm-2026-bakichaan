#include <iostream>
#include <iomanip>
#include <vector>

#include "functions.h"

using namespace std;

int main() {
    int st;
    cout << "Enter number of students: ";
    cin >> st;

    vector<Student> students(st);

    for (int i = 0; i < st; i++) {
        cout << "\n== Student " << i + 1 << " ==" << endl;
        cout << "Enter name: ";
        cin >> students[i].name;

        cout << "Enter 3 scores: ";
        for (int j = 0; j < 3; j++) {
            int sc;
            cin >> sc;
            students[i].sc.push_back(sc);
        }

        students[i].avg = calculateAverage(students[i].sc);
    }



    cout << "\n--- Grade Summary ---" << endl;
    cout << fixed << setprecision(1);                //소수점 안보이는 상황, chat gpt 활용 ⚠️ 수정하면 좋은 부분
                                                      /* 소수점 출력 제대로 하려면
                                                     cout << fixed << setprecision(2);

                                                     👉 지금 setprecision(2)만 쓰면 전체 자릿수 기준이라 이상하게 나올 수 있음*/


    for (int i = 0; i < st; i++) {
        cout << students[i].name << ": " << students[i].avg;

        //  Excellent 출력
        if (students[i].avg >= 90.0) {
            cout << " Excellent";
        }
        cout << endl;
    }

    return 0;
}
