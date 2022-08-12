//
#define INT_MAX 0x7fffffff
bool isMin(int a,int b,int c){//判断a是否是最小的
	if(a <= b && a <= c) return true;
	return false;
}
int findMinPath(int A[],int B[],int C[],int n,int m,int p){
	int D_min = INT_MAX;
	int i = 0,j = 0,k = 0;
	while(i < n && j < m && k < p &&D_min > 0){
		int D = abs(A[i] - B[j]) + abs(A[i] - C[k]) + abs(B[j] - C[k]);
		if(D < D_min) D_min = D;
		//每次更新三个中更小的那个
		if(isMin(A[i],B[j],C[k])) i++;
		else if(isMin(B[j],A[i],C[k])) j++;
		else k++;
	}
	return D_min;
	
}

