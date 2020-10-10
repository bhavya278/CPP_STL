
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n,a,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		vector<int> v;
		for(int j=0;j<a;j++){
			cin>>c;
            v.push_back(c);
		}
		next_permutation(v.begin(),v.end());
		for(int x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}

