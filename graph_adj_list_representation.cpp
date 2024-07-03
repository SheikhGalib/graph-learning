#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    cin >> n >> m;

    /* Graph
       1
      / \
     2   3
    */
    vector<int> graph[n];
    //if weighted then 
    //vector<pair<int,int>> graph[n];
    // 1 -> 2,3
    // 2 -> 1
    // 3 -> 1
    // ....
    // n -> ....

    // Space complexity : O(V+E)
    // Time complexity : O(N)

    // taking input of edges (who is connected to whom)
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1); // only if graph is undirected


        // IF WEIGHTED GRAPH THEN 
        // int v1, v2, wt;
        // cin >> v1 >> v2 >> wt;
        // graph[v1].push_back({v2, wt});
        // graph[v2].push_back({v1, wt});

    }

    // Extra: checking if two two vertices are connected or not
    // given i , j
    // if unweighted then
    // for (int child : graph[i])
    // {
    //     if (child == j)
    //     {
    //         // then they are connected
    //     }
    // }

    // If weighted graph
    // for (pair<int,int> child : graph[i])
    // {
    //     if (child.first == j)
    //     {
    //         // connected and the weight is 
    //         // child.second
    //     }
    // }
}