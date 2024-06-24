#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> cur_count(4, 0);
vector<int> min_count(4);

void countAlp(char remove_char, char add_char) {
    // 이전 문자를 제거
    switch (remove_char) {
        case 'A':
            cur_count[0]--;
            break;
        case 'C':
            cur_count[1]--;
            break;
        case 'G':
            cur_count[2]--;
            break;
        case 'T':
            cur_count[3]--;
            break;
    }
    // 새로운 문자를 추가
    switch (add_char) {
        case 'A':
            cur_count[0]++;
            break;
        case 'C':
            cur_count[1]++;
            break;
        case 'G':
            cur_count[2]++;
            break;
        case 'T':
            cur_count[3]++;
            break;
    }
}

int checkPwd() { // 조건을 만족하면 1, 그렇지 않으면 0을 반환
    for (int i = 0; i < 4; i++) {
        if (cur_count[i] < min_count[i]) { // 각 문자가 최소 개수 이상인지 확인
            return 0;
        }
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int S, P, total = 0; // S: DNA 문자열 길이, P: 비밀번호로 사용할 문자열 길이
    string dna;
    cin >> S >> P;
    cin >> dna;
    for (int i = 0; i < 4; i++) {
        cin >> min_count[i]; // 각 문자의 최소 개수를 입력받음
    }

    // 초기 윈도우 설정
    for (int i = 0; i < P; i++) {
        switch (dna[i]) {
            case 'A':
                cur_count[0]++;
                break;
            case 'C':
                cur_count[1]++;
                break;
            case 'G':
                cur_count[2]++;
                break;
            case 'T':
                cur_count[3]++;
                break;
        }
    }

    // 첫 번째 부분 문자열이 조건을 만족하는지 확인
    total += checkPwd();

    // 슬라이딩 윈도우 기법으로 문자열을 탐색
    for (int start = 1, end = P; end < S; start++, end++) {
        countAlp(dna[start - 1], dna[end]);
        total += checkPwd();
    }

    cout << total; // 조건을 만족하는 부분 문자열의 개수를 출력

    return 0;
}