#include <iostream>
#include "poly_array_version.h"
int pause;
using namespace std;
	
int main(){
	poly sample[MAX];
	//设置多项式
	for (int i = 0; i < 10; i++)
	{
		set(sample+i,i,i*3.99);
	}
	cout<<"before change"<<endl;
	display(sample);
	//修改
	cout<<"change"<<endl;
	cout<<endl;
	change(sample,3,999.34);
	display(sample);
	//插入
	cout<<"insert"<<endl;
	insert(sample,3,2.333);
	display(sample);
	//删除
	cout<<"delect"<<endl;
	//godie(sample,3);
	display(sample);
	//排序
	cout<<"sort"<<endl;
	sort(sample);
	display(sample);
	//pause
	cin>>pause;
}