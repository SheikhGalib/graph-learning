#include <bits/stdc++.h>
using namespace std;

const int N = 1e5; // maximum vertex

vector <int> graph[N]; 

bool visited[N]; // initialized with false (0) by default 

// If we wanted to store the connected components also
vector < vector <int> > connected_components;
vector <int> current_connected_components;

void dfs(int vertex)
{
    visited[vertex] = true;
    //cout << vertex << " ";

    // If wanting to store the connected components as well
    //current_connected_components.push_back(vertex);

    for (int child : graph[vertex])
    {
        if (visited[child]) continue;

        dfs(child);
    }
}

int main()
{
    cout << "\t\t DFS - (Use cases) \n---> 1. Connected components \t 2. Finding a loop in a graph\n";

    cout << "Connected componendts problem: (link) https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/ \n";

    int n, e;

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    int count_of_connected_components = 0; 
    // Here we are counting how many times dfs is running. each time a dfs runs it absorbs its corresponding connected component 
    // in a forest of graph.

    for (int i = 1; i <= n; i++)
    {
        if (visited[i]) continue;

        dfs(i);
        count_of_connected_components++;
    }

    cout << count_of_connected_components << endl;

    // What if we also want to store the connected components.
    // then there should be some modification made to dfs.
    // for (int i = 1; i <= n; i++)
    // {
    //     if (visited[i]) continue;

    //     current_connected_components.clear();

    //     dfs(i); // modified dfs that updates current_connected_components to the newly absorved connected component in the forest

    //     connected_components.push_back(current_connected_components);

    //     count_of_connected_components++;
    // }

    // // Printing the connected components

    // cout << connected_components.size() << endl;
    // for (auto c_cc : connected_components)
    // {
    //     for (int vertex : c_cc)
    //     {
    //         cout << vertex << " ";
    //     }
    //     cout << endl;
    // }

}

/*
INPUT 

8 5
1 2
2 3
2 4
3 5
6 7

*/