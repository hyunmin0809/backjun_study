#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Member {
    int age;
    string name;
};

bool compare(const Member &a, const Member &b) {
    return a.age < b.age;
}

int main() {
    int N;
    cin >> N;

    vector<Member> members(N);

    for (int i = 0; i < N; ++i) {
        cin >> members[i].age >> members[i].name;
    }

    stable_sort(members.begin(), members.end(), compare);

    for (const auto &member : members) {
        cout << member.age << " " << member.name << "\n";
    }

    return 0;
}