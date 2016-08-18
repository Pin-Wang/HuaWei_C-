#include<iostream>
using namespace std;

int maxSubstr(char str1[],char str2[]){
	int max=0;
	int start1;
	int start2;
	int count=0;
	for(int i=0;str1[i]!='\0';i++){
		for(int j=0;str2[j]!='\0';j++){
			start1=i;
			start2=j;
			while(str1[start1]==str2[start2]&&start1<strlen(str1)&&start2<strlen(str2)){
				count++;
				start1++;
				start2++;
			}
			if(count>max){
				max=count;
			}
			count=0;
		}
	}
	return max;
}

int main(){
	char str1[130];
	char str2[130];
	cin>>str1>>str2;
	for(int i=0;str1[i]!='\0';i++){
		str1[i]=tolower(str1[i]);
	}
	for(int i=0;str2[i]!='\0';i++){
		str2[i]=tolower(str2[i]);
	}
	cout<<maxSubstr(str1,str2);
}