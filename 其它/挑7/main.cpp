#include<iostream>
using namespace std;

int main(){
	int n;
	int count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		//7�ı���
		if(i%7==0)
			count++;
		//��λ��7������
		else if(i%10==7)
			count++;
		//ʮλ��7������
		else if((i%100)/10==7)
			count++;
		//��λ��7������
		else if((i%1000)/100==7)
			count++;
		//ǧλ��7������
		else if((i%10000)/1000==7)
			count++;
		//��λ��7������
		else if(i/10000==7)
			count++;
	}
	cout<<count;

	return 0;
}