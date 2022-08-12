void del_x(SqList &L,int x){
	int k = 0;//记录不等于x的个数
	for(int i = 0; i < L.length; i++){
		if(L.data[i] != x){
			L.data[k] = L.data[i];
			k++;
		}
	}
	L.length = k;
}
//第二种记录等于x的个数k，将元素前移k位
void del_x(SqList &L,int x){
	int k = 0;//记录等于x的个数
	for(int i = 0; i < L.length; i++){
		if(L.data[i] == x){
			k++;
		}else{
			L.data[i-k] = L.data[i];
		}
	}
	L.length -= k;
}
