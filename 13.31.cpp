#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adjacencyList;

    Graph(int vertices) : vertices(vertices), adjacencyList(vertices) {}

    void addEdge(int from, int to) {
        adjacencyList[from].push_back(to);
    }

    void DFS(int startVertex) {
        vector<bool> visited(vertices, false);
        stack<int> stack;

        stack.push(startVertex);
        visited[startVertex] = true;

        cout << "DFS starting from vertex " << startVertex << ": ";

        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();
            cout << currentVertex << " ";

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    stack.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }

        cout << endl;
    }
};

int main() {
    
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

  
    graph.DFS(0);

    return 0;
}
