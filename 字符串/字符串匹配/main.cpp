#include<iostream>
#include<string>
using namespace std;

int main(){
	string str_s;
	string str_l;
	getline(cin,str_s);
	getline(cin,str_l);
	int length_s=str_s.length();
	for(int i=0;i<length_s;i++){
		if(str_l.find(str_s[i],0)==string::npos){
			cout<<"false";
			return 1;
		}
	}
	cout<<"true";
	return 1;
}