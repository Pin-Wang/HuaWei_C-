#include<iostream>
using namespace std;

int main(){
	char str[130];
	gets_s(str);
	int length=strlen(str);
	int count=0; 
	for(int i=0;i<length;i++){
		if(str[i]>=0&&str[i]<=127){
			bool flag=false;
			for(int j=i+1;j<length;j++){
				if(str[i]==str[j]){
					flag=true;
				}
			}
			if(!flag){
				count++;
			}
		}
	}
	cout<<count;

	return 1;
}