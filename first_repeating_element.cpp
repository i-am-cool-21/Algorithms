#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


void first_repeat(int ar[],int n){
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		if(m.find(ar[i]) == m.end()){
			m[ar[i]] = 1;
		}
		else{
			m[ar[i]]++;
		}
	}
	int e = -1;
	for(auto& it:m){
		if(it.second == 2){
			e = it.first;
			break;
		}
	}
	if(e==-1){
		cout<<e<<endl;
		return;
	}
	for(int i=0;i<n;i++){
		if(ar[i]==e){
			cout<<e<<" "<<i+1<<endl;
			break;
		}
	}
}

int main()
{
	init_code();
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	first_repeat(ar,n);
    return 0;
}
