
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(char node, vector<bool> &visited, vector<char> adj[]) {
	visited[node] = 1;
	queue<char> qu;
	qu.push(node);
	while (!qu.empty()) {
		char tmp_node = qu.front();
		qu.pop();
		visited[tmp_node] = 1;
		cout << tmp_node << " ";
		for (auto it : adj[tmp_node]) {
			if (!visited[it])
			{
				qu.push(it);
			}
		}
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
	BFS(start, visited, adj);
	cout << endl;
}
