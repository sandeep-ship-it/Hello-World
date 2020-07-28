#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	freopen("alchemy_input.txt", "r", stdin);
	freopen("alchemy_out.txt", "w", stdout);
	int T;
	cin>>T;
	int a = 1;
	while(a<=T){
		int arr[2] = {0, 0};
		int n;
		cin>>n;
		bool flag = 0;
		string st;
		cin>>st;
		for(int i=0;i<st.size();i++){
			arr[st[i]-65]++;
		}
		if(abs(arr[0]-arr[1])<=1) flag = 1;
		else flag = 0;
		cout<<"Case #"<<a<<": ";
		if(flag) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
		
		a++;
	}
	return 0;
}

