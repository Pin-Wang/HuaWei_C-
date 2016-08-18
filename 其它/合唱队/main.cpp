#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int* s=new int[num];
	int* s1=new int[num];
	int* s2=new int[num];
	int pers=0;
	//输入每个人的身高
	for(int i=0;i<num;i++){
		cin>>s[i];
	}

	//以第i个人为最高，左边能排成数顺序的人数
	for(int i=0;i<num;i++){
		//一开始每个初始化为1个人（动态规划）
		s1[i]=1;
		for(int j=0;j<i;j++){
			if(s[j]<s[i]&&s1[j]>=s1[i]){
				s1[i]=s1[j]+1;
			}
		}
	}
	//以第i个人为最高，右边能排成顺序的人数
	for(int i=num-1;i>=0;i--){
		s2[i]=1;
		for(int j=num-1;j>i;j--){
			if(s[j]<s[i]&&s2[j]>=s2[i]){
				s2[i]=s2[j]+1;
			}
		}
	}
	for(int i=0;i<num;i++){
     	int p=s1[i]+s2[i];
		if(p>pers){
			pers=p;
		}
	}
	cout<<num-(pers-1);
}