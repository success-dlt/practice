#include "DFS.h"
int main()
{
    vector<vector<int>> test = {{1, 0, 0, 1}, {1, 1, 0, 1}, {1, 0, 1, 1}, {0, 0, 0, 1}};

    int result = Solution::findCircleNum(test);
    cout << result << endl;

    return 0;
}