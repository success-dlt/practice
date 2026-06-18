#include <iostream>
using namespace std;
class Solution
{
public:
    static void DFS(vector<vector<int>> &isConnected, vector<int> &visit, int cities, int i)
    {
        for (int j = 0; j < cities; j++)
        {
            if (isConnected[i][j] == 1 && visit[j] == 0)
            {
                visit[j] = 1;
                DFS(isConnected, visit, cities, j);
            }
        }
    }
    static int findCircleNum(vector<vector<int>> &isConnected)
    {
        int cities = isConnected.size();
        vector<int> visit;
        visit.resize(cities);
        int provinces = 0;
        for (int i = 0; i < cities; i++)
        {
            if (visit[i] == 0)
            {
                DFS(isConnected, visit, cities, i);
                provinces++;
            }
        }
        return provinces;
    }
};
int main()
{
    vector<vector<int>> test = {{1, 0, 0}, {1, 1, 0}, {0, 1, 1}};
    int result = Solution::findCircleNum(test);
    cout << result << endl;

    return 0;
}