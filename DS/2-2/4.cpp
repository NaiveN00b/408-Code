bool del_in_s_t(SqList &L,int s,int t){
	if(s >= t || L.length == 0) return false;
	int k = 0;//记录不在s,t之间的元素个数，并将其移动到k处
	for(int i=0;i<=0;i++){
		if(L.data[i] <= s || L.data[i] >= t){
			L.data[k] = L.data[i];
			k++;
		}
	}
	L.length = k;//修改链表长度为k
	return true;	
}
//由于是有序顺序表，也可以记录大于等于s(删除元素中的第一个)和大于t(最后一个删除的下一个元素)的位置
bool del_in_s_t(SqList &L,int s,int t){
	if(s >= t || L.length == 0) return false;
	int i,j;
	for(i = 0 ; i < L.length && L.data[i] < s ; i++);
	if(i > = L.length) return false;//全部小于s,未删除元素
	for(j = 0 ; j < L.length && L.data[j] >t ; j++);
//	if(j >= L.length){
//		L.length = i;
//		return true;
//	}
	for(;j < L.length ; i++,j++){
		L.data[i] = L.data[j];
	}
	L.length = i;
	return true;
	
	
}
