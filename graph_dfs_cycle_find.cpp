#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

vector <int> graph[N];

bool visited[N];

bool dfs(int vertex, int parent) // Modified for cycle detection
{
    visited[vertex] = true;
    // child-parent relation.
    // if during traversal a child node is found pre-visited and not the parent then cycle exists.
    bool isLoopExists = false;

    for (int child : graph[vertex])
    {
        if (visited[child] && child == parent) continue;
        if (visited[child])   return true;

        isLoopExists |= dfs(child, vertex);
    }

    return isLoopExists; 
}
int main()
{
    cout << "DFS - Finding cycle in Graph\n";

}