#include <iostream>
#include <cstring>
using namespace std;
//哈希，时间复杂度O(n),空间复杂度O(n)
int isMain(int A[],int n){
	int hash[n];//记录A中元素出现的次数,题中有说0<=ai<n
	memset(hash,0,sizeof(hash));//将数组hash中所有元素初始化为0，memset尽量只初始化为0或-1！！！
	for(int i = 0; i < n ; i++){
		hash[A[i]]++;
		if(hash[A[i]] > n/2) return A[i];
	}
	return -1;
}

//答案做法，时间复杂度O(n),空间复杂度O(1),不太好想,并且不太普适，基本只能做n/2这种
//int Majority(int A[],int n){
//	int count = 1,m = A[0];//A[0]候选为主元素
//	for(int i = 1; i < n ; i++){
//		if(A[i] == m) count++;
//		else{
//			if(count > 0) count--;
//			else{
//				m = A[i];
//				count = 1;
//			}
//		}
//	}
//	if(count > 0){
//		for(int i = count = 0;i < n;i++){
//			if(A[i] == m) count++;
//		}
//	}
//	if(count > n/2) return m;
//	else return -1;
//}

int main(){
	int A[8] = {0,5,5,3,5,7,5,5};
//	int A[8] = {0,5,5,3,5,1,5,7};
	cout<<isMain(A,8)<<endl;
	return 0;
}
