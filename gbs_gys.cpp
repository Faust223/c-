#include<iostream>
#include<cstdio> 
using namespace std;
int max_gys(int n,int m){
	int max;
	if(n<m){
		max=m;
		m=n;
		n=max;
	}
	for(int i=m;i>0;i--)
		if(n%i==0 && m%i==0)
			return i;
}
int main(){
	//�����������Լ������С������
	//ʱ��ᳬʱ����Ҫ�Ż��㷨 
	int gbs,gys,max;
	int n,m;
	
	scanf("%d",&x);
	scanf("%d%d",&n,&m);
	gys=max_gys(n,m);
	gbs=n*m/gys;
	printf("max:%d min:%d\n",gys,gbs);
	return 0;
} 
