#include "BFS.h"

void Solution1 ::BFS(vector<vector<int>> &isConnected, vector<int> &visit, int cities, int i)
{
    vector<int> Q(cities);
    int front = 0;
    int rear = 0;
    visit[i] = 1;
    Q[0] = i;
    rear++;
    while (front != rear)
    {
        int node = Q[front++];
        for (int j = 0; j < cities; j++)
        {
            if (isConnected[node][j] == 1 && !visit[j])
            {
                Q[rear++] = j;
                visit[j] = 1;
            }
        }
    }
}

int Solution1 ::findCircleNum1(vector<vector<int>> &isConnected)
{
    int cities = isConnected.size();
    vector<int> visit(cities);
    int provinces = 0;
    for (int i = 0; i < cities; i++)
    {
        if (!visit[i])
        {
            BFS(isConnected, visit, cities, i);
            provinces++;
        }
    }
    return provinces;
}