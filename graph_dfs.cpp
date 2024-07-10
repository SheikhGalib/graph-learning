#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector <int> graph[N];
bool visited[N]; // intialized with false by default

void dfs(int vertex);

int main()
{

  cout<< "DFS - depth first search\n";
      
  /*   Graph  (not using this graph though)
                  ___1____
                /    \   \
              2       3   4
            / | \     |
          5   6   7   8
              |
              9
      
  */
    
  int n, m;

  cin >> n >> m; // n - verticies , m - edges

  

  for (int i = 0; i < m; i++)
  {
    int v1, v2;
    cin >> v1 >> v2;

    graph[v1].push_back(v2);
    graph[v2].push_back(v1);


  }

  cout << "Enter node: ";
  int node;
  cin >> node;

  dfs(node);

  // Time Complexity: O(V + E)


}
void dfs(int vertex)
{
  /*
    Take action on vertex after entering the vertex
  */ 
  visited[vertex] = true;

  cout << vertex << " ";

  for (int child : graph[vertex])
  {
    /*
      Take action on child before entering the child node
    */
    if (visited[child]) continue;
    
    dfs(child);

    // This is also correct
    // if (!visited[child])
    //   dfs(child);

    /*
      Take action on child after exiting child node
    */
  }

  /*
    Take action on vertex before exiting the vertex
  */

}

/*
INPUT- graph

6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6

*/