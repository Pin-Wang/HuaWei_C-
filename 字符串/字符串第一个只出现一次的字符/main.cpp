#include<iostream>
#include<string>
using namespace std;

char FindChar(string str){
	for(int i=0;i<str.length();i++){
		bool flag=false;
		for(int j=0;j<str.length();j++){
			if(i!=j){
				if(str[i]==str[j]){
					flag=true;
				}
			}
		}
		if(flag==false){
			return str[i];
		}
	}
	return '.';
}

int main(){
	string str;
	getline(cin,str);
	cout<<FindChar(str)<<endl;
	return 1;
}