#include<iostream>
#include<string>
using namespace std;

double GC_Ratio(string str){
	int length=str.length();
	int count=0;
	for(int i=0;i<length;i++){
		if(str[i]=='G'||str[i]=='C'){
			count++;
		}
	}
	return (double)count/length;
}

int main(){
    string str;
	int n;
	getline(cin,str);
	cin>>n;
	double cg_ratio=0;
	int j=0;
	int length=str.length()-n;
	for(int i=0;i<length;i++){
		string substring=str.substr(i,n);
		if(GC_Ratio(substring)>cg_ratio){
			cg_ratio=GC_Ratio(substring);
			j=i;
		}
	}
	cout<<str.substr(j,n)<<endl;
	return 1;
}