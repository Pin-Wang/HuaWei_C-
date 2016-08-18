#include<iostream>
//#include<string>
using namespace std;

int calcCapital(char str[]){
	int count=0;
	if(strlen(str)==0)
		return 0;
	for(int i=0;i< strlen(str);i++){
		if(str[i]>='A'&&str[i]<='Z'){
			count++;
		}
	}
	return count;
}

int main1(){
	char str[128];
	gets(str);
	cout<<calcCapital(str);
	return 1;
}
