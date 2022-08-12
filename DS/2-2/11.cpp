#include <iostream>
using namespace std;
int search_M(int A[],int B[],int n){//n为表长
	int s1 = 0,e1 = n-1,s2 = 0,e2 = n-1;
	while(s1 < e1 || s2 < e2){//???
		int m1 = (s1 + e1) / 2;
		int m2 = (s2 + e2) / 2;
		if(A[m1] == B[m2])	return A[m1];//A[m1] == B[m2],则其为中位数，直接返回
		if(A[m1] < B[m2]){//A[m1] < B[m2],说明中位数在A右B左
			if((e1 - s1 + 1) % 2 == 1){//元素为奇数个
				s1 = m1;//舍弃A左边，保留中点
				e2 = m2;//舍弃B右边，保留中点
			}else{//元素为偶数个,此时必须慎重考虑中点，因为需要保证每次划分后两段长度相同
				s1 = m1 + 1;//舍弃A左边及中点，由题意偶数时中点是两个中点里更小的那个
				e2 = m2;//舍弃B右边，保留中点
			}
		}else if(A[m1] > B[m2]){//A[m1] > B[m2],说明中位数在A左B右
			if((e1 - s1 + 1) % 2 == 1){//元素为奇数个
				e1 = m1;//舍弃A右边，保留中点
				s2 = m2;//舍弃B左边，保留中点
			}else{//元素为偶数个
				e1 = m1;//舍弃A右边，保留中点
				s2 = m2 + 1;//舍弃B左边及中点
			}
		}
	}
	return A[s1] < B[s2]?A[s1]:B[s2];
	
}
//时间复杂度O(log2n),空间复杂度O(1)
int main(){
	int A[5] = {11,13,15,17,19};
	int B[5] = {2,4,6,8,20};
	int mid = search_M(A,B,5);
	cout<<mid<<endl;
	return 0;
}
