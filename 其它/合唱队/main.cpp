#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int* s=new int[num];
	int* s1=new int[num];
	int* s2=new int[num];
	int pers=0;
	//����ÿ���˵����
	for(int i=0;i<num;i++){
		cin>>s[i];
	}

	//�Ե�i����Ϊ��ߣ�������ų���˳�������
	for(int i=0;i<num;i++){
		//һ��ʼÿ����ʼ��Ϊ1���ˣ���̬�滮��
		s1[i]=1;
		for(int j=0;j<i;j++){
			if(s[j]<s[i]&&s1[j]>=s1[i]){
				s1[i]=s1[j]+1;
			}
		}
	}
	//�Ե�i����Ϊ��ߣ��ұ����ų�˳�������
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