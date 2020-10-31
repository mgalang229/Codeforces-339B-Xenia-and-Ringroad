#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int a[m];
	for(int i=0; i<m; ++i)
		cin >> a[i];
	int tmp=a[0]-1;
	for(int i=0; i<m-1; ++i) {
		if(a[i]>a[i+1])
			tmp+=(n-(a[i]-a[i+1]));
		else
			tmp+=(a[i+1]-a[i]);
	}
	cout << tmp << "\n";
}
