#include <iostream>
using namespace std;
class Solution
{
public:
    static void DFS(vector<vector<int>> &isConnected, vector<int> &visit, int cities, int i);
    static int findCircleNum(vector<vector<int>> &isConnected);
};