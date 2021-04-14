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
	//两个数的最大公约数，最小公倍数
	//时间会超时，需要优化算法 
	int gbs,gys,max;
	int n,m;
	
	scanf("%d",&x);
	scanf("%d%d",&n,&m);
	gys=max_gys(n,m);
	gbs=n*m/gys;
	printf("max:%d min:%d\n",gys,gbs);
	return 0;
} 
