#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Graph representation ---> ADJACENCY MATRIX\n";
    int n, m; // n - no. of verticies , m - no. of edges
    cin >> n >> m;

    int graph[n+1][n+1]; // making a V x V matrix and n+1 is because instead of 0, we are starting with 1

    // If we don't declare the graph as global variable 
    // then we need to make all the other elements zero.

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            graph[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) // taking input of edges
    {
        int v1, v2; 
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1; // this will be added if the graph is undirected.
    
        // IF GRAPH IS WEIGHTED
        // int v1, v2 , wt; 
        // cin >> v1 >> v2;
        // graph[v1][v2] = wt;
        // graph[v2][v1] = wt;
    }

    // space complexity : O(n^2)
    // time complexity to find edges or weight : O(1)
}

// input
// 6 9
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 4 6
// 5 6