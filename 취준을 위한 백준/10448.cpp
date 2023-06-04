#include <iostream>
#include <vector>

using namespace std;

vector<int> eureka;

void caculateTriangle()
{
    int n = 1;
    while (n * (n + 1) / 2 < 1000)
    {
        eureka.push_back(n * (n + 1) / 2);
        n++;
    }
}

bool triangleSum(int total)
{
    for (int i = 0; i < eureka.size(); i++)
    {
        for (int j = 0; j < eureka.size(); j++)
        {
            for (int k = 0; k < eureka.size(); k++)
            {
                if (eureka[i] + eureka[j] + eureka[k] == total)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    caculateTriangle();

    for (int i = 0; i < T; i++)
    {
        int total;
        cin >> total;
        cout << triangleSum(total) << "\n";
    }

    return 0;
}