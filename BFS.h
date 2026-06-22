#include <iostream>
using namespace std;
class Solution1
{
public:
    static void BFS(vector<vector<int>> &isConnected, vector<int> &visit, int cities, int i);
    static int findCircleNum1(vector<vector<int>> &isConnected);
};