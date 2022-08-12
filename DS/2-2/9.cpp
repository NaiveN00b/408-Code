void find_x(SqList &L,int x){
	int i = 0,j = L.length - 1;
	while(i <= j){
		int mid = i + j >> 1;
		if(L.data[mid] == x) break;
		else if(L.data[mid] < x) i = mid + 1;
		else j = mid - 1;
	}
	if(L.data[mid] == x && mid != L.length - 1){
		int temp = L.data[mid];
		L.data[mid] = L.data[mid+1];
		L.data[mid+1] = temp;
	}else{
		for(int k = L.length - 1; k > j ; k--){//最后跳出循环时i > j,data[j] > x的第一个数
			L.data[k+1] = L.data[k];
		}
		L.data[k+1] = x;
		L.length += 1;
	}
		
}
