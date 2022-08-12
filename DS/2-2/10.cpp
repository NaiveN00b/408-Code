void reverse(int R[],int st,int end){//逆转数组的[st，end]部分
	int i = st, j = end;
	while(i < j){
		int temp = R[st];
		R[st] = R[end];
		R[end] = temp;
		i++;
		j--;
	}
}
void reverse_R(int R[],int p,int n){
	reverse(R,0,p-1);//逆转[0,p-1]
	reverse(R,p,n-1);//逆转[p,n-1]
	reverse(R,0,n-1);//逆转[0,n-1]
}
//时间复杂度O(n),空间复杂度O(1)
