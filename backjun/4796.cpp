#include <iostream>
using namespace std;

int main() {
    int L, P, V;
    int case_num = 1;
    
    while (true) {
        cin >> L >> P >> V;
        
        if (L == 0 && P == 0 && V == 0) break;
        
        int full_periods = V / P;
        int remaining_days = V % P;
        int max_days = full_periods * L + min(remaining_days, L);
        
        cout << "Case " << case_num << ": " << max_days << endl;
        case_num++;
    }
    
    return 0;
}
