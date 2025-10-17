#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void greedyColoring(vector<vector<int>>& graph, int V) {
    vector<int> result(V, -1);     // result[i] = color assigned to vertex i
    vector<bool> available(V, false); // available[i] = availability of color i

    // Assign the first color to the first course
    result[0] = 0;

    // Assign colors to remaining vertices
    for (int u = 1; u < V; u++) {
        // Mark colors of adjacent vertices as unavailable
        fill(available.begin(), available.end(), false);
        for (int i = 0; i < V; i++) {
            if (graph[u][i] && result[i] != -1)
                available[result[i]] = true;
        }

        // Find the first available color
        int cr;
        for (cr = 0; cr < V; cr++) {
            if (!available[cr])
                break;
        }

        result[u] = cr; // Assign found color
    }

   
    cout << "\nExam Schedule (Course : Time Slot)\n";
    cout << "----------------------------------\n";
    for (int u = 0; u < V; u++)
        cout << "Course " << u + 1 << " --> Slot " << result[u] + 1 << endl;

    int totalSlots = *max_element(result.begin(), result.end()) + 1;
    cout << "\nMinimum number of time slots required: " << totalSlots << endl;
}

int main() {
    int V, E;
    cout << "Enter number of courses (vertices): ";
    cin >> V;

    // Create an adjacency matrix
    vector<vector<int>> graph(V, vector<int>(V, 0));

    cout << "Enter number of student conflicts (edges): ";
    cin >> E;

    cout << "Enter each conflict as: course1 course2\n";
    cout << "(Means these two courses share students and cannot have same slot)\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u - 1][v - 1] = 1;
        graph[v - 1][u - 1] = 1;
    }

    greedyColoring(graph, V);

    return 0;
}
