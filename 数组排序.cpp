#include<iostream>
#include<algorithm>//algorithm可能包含vector头文件 
#include<fstream>
using namespace std;
int change(int a,int b){
	//c++中有布尔值类型，C语言只有0表示假，非0表示真 
	return a>b;	//输出：29 18 15 11 10 7 5 4 3 2 1 
//	return true;	//输出： 15 10 18 2 4 3 7 11 1 29 5
// 	return false;	//输出： 5 29 1 11 17 7 3 4 2 18 10 15
//	return a<b;		//输出： 1 2 3 4 5 7 10 11 15 18 29 
} 
int main(){
	//实现了文件内容转换到vector数组里，然后对vector数组排序 
	vector<int> a;
	int num;
	ifstream infile("afile.dat");  //afile文件里： 15 10 18 2 4 3 7 11 1 29 5
	while(!infile.eof()){
		infile>>num;	//这里估计是转换类型 
		a.push_back(num);
	}
	//输出文件里的内容： 15 10 18 2 4 3 7 11 1 29 5 
	for(auto x: a){
		cout<<x<<" ";
	}
	infile.close();			
	cout<<endl;
	
	//排序后数组 
	sort(a.begin(),a.end(),change);
	for(auto x : a)
		cout<<x<<" ";
	return 0;
} 
