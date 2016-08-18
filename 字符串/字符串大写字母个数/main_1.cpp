#include<iostream>
#include<string>
using namespace std;

int calcCapital(string str){
	int count=0;
	if(str.length()==0)
		return 0;
	for(int i=0;i< str.length();i++){
		if(str.at(i)>='A'&&str.at(i)<='Z'){
			count++;
		}
	}
	return count;
}

int main(){
	string str;
	getline(cin,str);
	cout<<calcCapital(str);
	return 1;
}
