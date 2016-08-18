#include<iostream>
#include<set>
using namespace std;

int main(){
	int n;
	cin>>n;
	int* weight=new int[n];
	//存储不同重量结果
	set<int> result_set;
	int* num=new int[n];
	//输入重量
	for(int i=0;i<n;i++){
		cin>>weight[i];
	}
	//输入每个砝码的数量
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	result_set.insert(0);
	int sum=0;
	//存储中间重量结果
	set<int> temp_set;
	for(int i=0;i<n;i++){
		//得到最终set的开始和结束迭代器
		set<int>::iterator itb=result_set.begin();
		set<int>::iterator ite=result_set.end();
		//遍历结果set
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