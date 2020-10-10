thm>
using namespace std;
int main() {
	int n,b,x,y,ma=1,z;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;
		vector<int> v;
		for(int j=0;j<b;j++){
			cin>>x>>y;
			v.push_back(y-x);
		}
        int t=v.size();
        for(int k=0;k<t;k++){
            z=count(v.begin(),v.end(),v[k]);
            if(z>ma){
                ma=z;
            }
        }
        cout<<ma;
        

	}
	return 0;
}