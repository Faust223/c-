#include<iostream>
#include<algorithm>//algorithm���ܰ���vectorͷ�ļ� 
#include<fstream>
using namespace std;
int change(int a,int b){
	//c++���в���ֵ���ͣ�C����ֻ��0��ʾ�٣���0��ʾ�� 
	return a>b;	//�����29 18 15 11 10 7 5 4 3 2 1 
//	return true;	//����� 15 10 18 2 4 3 7 11 1 29 5
// 	return false;	//����� 5 29 1 11 17 7 3 4 2 18 10 15
//	return a<b;		//����� 1 2 3 4 5 7 10 11 15 18 29 
} 
int main(){
	//ʵ�����ļ�����ת����vector�����Ȼ���vector�������� 
	vector<int> a;
	int num;
	ifstream infile("afile.dat");  //afile�ļ�� 15 10 18 2 4 3 7 11 1 29 5
	while(!infile.eof()){
		infile>>num;	//���������ת������ 
		a.push_back(num);
	}
	//����ļ�������ݣ� 15 10 18 2 4 3 7 11 1 29 5 
	for(auto x: a){
		cout<<x<<" ";
	}
	infile.close();			
	cout<<endl;
	
	//��������� 
	sort(a.begin(),a.end(),change);
	for(auto x : a)
		cout<<x<<" ";
	return 0;
} 
