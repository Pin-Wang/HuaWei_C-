#include<iostream>
#include<string>
#include<vector>
using namespace std;

//将ip装进vector里面去
vector<string> split(string ip){
	int len=ip.size();
	int k=0;
	vector<string> vec;
	for(int i=0;i<len;i++){
		if(ip[i]=='.'){
			string temp(ip.begin()+k,ip.begin()+i);		
			vec.push_back(temp);
			k=i+1;
		}
	}
	vec.push_back(string(ip.begin()+k,ip.begin()+ip.size()));
	return vec;
}

int main(){
	string ip;
	getline(cin,ip);
	vector<string> v=split(ip);
	//如果v的size（）不是4返回false
	if(v.size()!=4){
		cout<<"NO";
		return 0;
	}
	
	for(int i=0;i<v.size();i++){
		//如果有""返回false
		if(v[i]==""){
			cout<<"NO";
			return 1;
		}
		//如果有不在0~9之间的返回false
		for(int j=0;j<v[i].size();j++){
			if(!(v[i][j]>='0'&&v[i][j]<='9')){
				cout<<"NO";
				return 1;
			}
		}
		//每个数字不在0~255之间则返回false
		int intv=atoi(v[i].c_str());
		if(!(intv>=0&&intv<=255)){
			cout<<"NO";
			return 1;
		}
	}
	/*for(vector<string>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}*/
	cout<<"YES";
	return 1;
}