#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v(n + m), v1(m), sol;
	while(v.size() != n) v.pop_back();
	int i = 0, j = 0;
	while(i < n && j < m) {
		if(v[i] < v1[j]) {
			sol.push_back(v[i]);
			i++;
		}
		else if(v[i] > v1[j]) {
			sol.push_back(v1[j]);
			j++;
		}
		else {
			sol.push_back(v[i]);
			sol.push_back(v1[j]);
			i++, j++;
		}
	}
	while(i < n) sol.push_back(v[i]);
	while(j < m) sol.push_back(v1[j]);
	for(auto d : sol) {
		cout << d << " ";
	}
	return 0;
}