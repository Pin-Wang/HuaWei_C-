#include<iostream>
#include<set>
using namespace std;

int main(){
	int n;
	cin>>n;
	int* weight=new int[n];
	//�洢��ͬ�������
	set<int> result_set;
	int* num=new int[n];
	//��������
	for(int i=0;i<n;i++){
		cin>>weight[i];
	}
	//����ÿ�����������
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	result_set.insert(0);
	int sum=0;
	//�洢�м��������
	set<int> temp_set;
	for(int i=0;i<n;i++){
		//�õ�����set�Ŀ�ʼ�ͽ���������
		set<int>::iterator itb=result_set.begin();
		set<int>::iterator ite=result_set.end();
		//�������set
		for(set<int>::iterator it=itb;it!=ite;it++){
			sum=*it;
			for(int j=0;j<=num[i];j++){
				int rw=j*weight[i]+sum;
				temp_set.insert(rw);
			}	
		}
		result_set.insert(temp_set.begin(),temp_set.end());
	}
	cout<<static_cast<int>(result_set.size());
	/*for(set<int>::iterator p=result_set.begin();p!=result_set.end();p++){
		cout<<*p<<" ";
	}*/

	return 1;
}