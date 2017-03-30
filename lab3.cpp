#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
	vector<int> V;
	int n,i,b,sum=0;
	ifstream inFile("file.in",ios::in);
	inFile >> n;
	for(i=0;i<n;++i){
		inFile >> b;
		V.push_back(b);
	}

	sort(V.begin(),V.end());
	for(i=V.size()-1;i>=0;--i){
		sum+=V[i];
		if(i==V.size()-5)break;
	}
	cout << sum <<endl;
}

