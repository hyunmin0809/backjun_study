#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int day, month, year;
};

bool isYounger(const Student &a, const Student &b) {
    if (a.year != b.year)
        return a.year > b.year;
    if (a.month != b.month)
        return a.month > b.month;
    return a.day > b.day;
}

bool isOlder(const Student &a, const Student &b) {
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].day >> students[i].month >> students[i].year;
    }

    Student youngest = students[0];
    Student oldest = students[0];

    for (int i = 1; i < n; ++i) {
        if (isYounger(students[i], youngest)) {
            youngest = students[i];
        }
        if (isOlder(students[i], oldest)) {
            oldest = students[i];
        }
    }

    cout << youngest.name << "\n";
    cout << oldest.name << "\n";

    return 0;
}