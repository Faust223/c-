#include<iostream>

using namespace std;

/*
CÓïÑÔ´úÂë£º
struct stu{
	int num;
	char sex;
	int math_score;
	int en_score;
	int c_score;
};
int main(){
	struct stu A;
	return 0;
}
*/
class stu{
	int num;
	char sex;
	int math_score;
	int en_score;
	int c_score;
	
	int total_score(){
		
		
		return math_score+en_score+c_score;
	};
	
	
};
int main(){
	class stu A;
	return 0;
}
