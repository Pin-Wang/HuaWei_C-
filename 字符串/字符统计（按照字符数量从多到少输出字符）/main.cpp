#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int hash[128]={0};
	int temp[128]={0};
	char c[129]={'\0'};
	int k=0;
	char str[128];
	gets_s(str);
	int length=strlen(str);

	//根据字符对应的ASCLL为索引存储每个字符的个数
	for(int i=0;i<length;i++){
		if(isalnum(str[i])||str[i]==' '){
			hash[str[i]]++;
		}
	}
	
	//将hash复制到temp
	for(int i=0;i<128;i++){
		temp[i]=hash[i];
	}
	//对temp进行排序
	sort(temp,temp+128,greater<int>());
	for(int i=0;i<128;i++){
		if(temp[i]!=temp[i+1]){
			for(int j=0;j<128;j++){
				if(temp[i]==hash[j]&&temp[i]!=0){
					c[k++]=j;
				}
			}
		}
	}

	for(int i=0;i<k;i++){
		cout<<c[i];
	}
    
	return 0;
}