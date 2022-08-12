bool del_in_s_t(SqList &L,int s,int t){
	if(s >= t || L.length == 0) return false;
	int k = 0;//记录不在s,t之间的元素个数，并将其移动到k处
	for(int i=0;i<=0;i++){
		if(L.data[i] < s || L.data[i] > t){
			L.data[k] = L.data[i];
			k++;
		}
	}
	L.length = k;//修改链表长度为k
	return true;
	
}
//记录在s,t之间的元素个数k
bool del_in_s_t(SqList &L,int s,int t){
	if(s >= t || L.length == 0) return false;
	int k = 0;//记录在s,t之间的元素个数
	for(int i=0;i<L.length;i++){
		if(L.data[i] >= s && L.data[i] <= t){
			k++;
		}else{
			L.data[i-k] = L.data[i]
		}
	}
	L.length -= k;//修改链表长度减k
	return true;
	
}
