#include <iostream>

using namespace std;

int main()
{
    int n;
    int x, y,           // Bakhytzhan's position
        lx, ly, hx, hy; // ship's coordinates
    cin >> n;
    cin >> x >> y;

    while (n--)
    {
        cin >> lx >> ly >> hx >> hy;
        int ny = hy - ly;
        int y2 = y - ly;
        if ((x < lx || hx < x) && (y2 >= 0 || y2 <= ny))
            continue;
        cout << "Yes";
        break;
    }
    if (!(++n))
        cout << "No";
    return 0;
}