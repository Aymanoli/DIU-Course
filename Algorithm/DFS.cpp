#include<iostream>
#include<vector>
using namespace std;

void DFS(char node, vector<bool> &visited, vector<char> adj[]) {
	visited[node] = 1;
	cout << node << " ";
	for (auto it : adj[node]) {
		if (!visited[it])
			DFS(it, visited, adj);
	}
}

int main() {
	int node, edge;
	cin >> node >> edge;
	vector<bool> visited(200, false);
	vector<char> adj[200];
	cin.ignore();
	while (edge--) {
		char x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cin.ignore();
	cout << "Starting node: ";
	char start;
	cin >> start;
	DFS(start, visited, adj);
	cout << endl;
}
