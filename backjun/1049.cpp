#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int min_package_price = 1001; 
    int min_single_price = 1001;  

    // 각 브랜드의 패키지 가격과 낱개 가격을 입력받아 최소값을 갱신
    for (int i = 0; i < M; i++) {
        int package_price, single_price;
        cin >> package_price >> single_price;
        min_package_price = min(min_package_price, package_price);
        min_single_price = min(min_single_price, single_price);
    }

    int cost1 = (N / 6 + 1) * min_package_price;
    int cost2 = (N / 6) * min_package_price + (N % 6) * min_single_price;
    int cost3 = N * min_single_price;

    cout << min({cost1, cost2, cost3}) << endl;

    return 0;
}
