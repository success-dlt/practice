#include "DFS.h"
#include "BFS.h"
int main()
{
    vector<vector<int>> test = {{1, 1, 0, 1, 0}, {0, 1, 0, 1, 0}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 0}, {1, 1, 1, 0, 1}};

    int result = Solution::findCircleNum(test);
    int result1 = Solution1::findCircleNum1(test);
    cout << result << endl;
    cout << result1 << endl;

    return 0;
}