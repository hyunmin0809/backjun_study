#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string numberToWords(int number) {
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string str = "";

    while (number >= 10) {
        str = words[number%10] + " " + str;
        number /= 10;
    }

    str = words[number] + " " + str;

    return str;
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<pair<string, int>> numWords;

    for (int i = M; i <= N; ++i) {
        numWords.push_back({numberToWords(i), i});
    }

    sort(numWords.begin(), numWords.end());

    int count = 0;
    for (const auto& nw : numWords) {
        if (count > 0 && count % 10 == 0) {
            cout << "\n";
        }
        cout << nw.second << " ";
        count++;
    }

    return 0;
}