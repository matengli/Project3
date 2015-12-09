

#define MAX 15
//单项式
class poly{
public:
	int x;
	double a;
 poly::poly();
};
//函数部分	
	//输出
	void display(poly* sample );
	//设置单项式
	void set(poly* poly_s,int x,double a);
	//查找
	poly* search(poly* sample,int x);
	//插入
	void insert(poly* sample,int x,double a);
	//删除
	void godie(poly*sample,int x);
	//修改(按指数查找)
	void change(poly*  sample,int x,double a);
	//排序
	void sort(poly* sample);
//以下是范例测试程序
	/*
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
	godie(sample,3);
	display(sample);
	//排序
	cout<<"sort"<<endl;
	sort(sample);
	display(sample);
}
*/