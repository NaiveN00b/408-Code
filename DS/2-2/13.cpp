#include <iostream>
#include <cstring>
using namespace std;
//哈希,时间复杂度O(n),空间复杂度O(n)
int find_MIN(int A[],int n){
	int hash[n+1];
	memset(hash,0,sizeof(hash));
	for(int i = 0 ; i < n+1; i++){
		if(A[i] >= 1 && A[i] <= n) hash[A[i]]++;//只要不为0就行
	}
	for(int i = 1;i < n+1;i++){
		if(hash[i] == 0) return i;
	}
	return n+1;
	
}
int main(){
	int A[4] = {1,2,3,4};
	cout<<find_MIN(A,4)<<endl;
	return 0;
}

