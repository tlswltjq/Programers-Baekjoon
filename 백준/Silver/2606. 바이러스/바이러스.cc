#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m;
    int count = 1;

    cin >> n >> m;

    vector<vector<int>> computer(n + 1);
    vector<bool> visited(n + 1, false);
    queue<int> virus;
    virus.push(1);
    visited[1] = true;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        computer[a].push_back(b);
        computer[b].push_back(a);
    }

    while (!virus.empty()) {
        int now = virus.front();
        virus.pop();

        for (int i = 0; i < computer[now].size(); i++) {
            int next = computer[now][i];
            if (!visited[next]) {
                virus.push(next);
                visited[next] = true;
                count++;
            }
        }
    }

    cout << count - 1 << endl;

    return 0;
}
