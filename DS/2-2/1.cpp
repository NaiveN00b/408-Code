bool Del_Min(sqList &L,int &val){
	if(L.length == 0) return false;//顺序表为空，返回false
	val = L.data[0];
	int pos = 0;
	for(int i = 1; i < L.length; ++i){//循环，寻找顺序表的最小值
		if(L.data[i] < val){
			pos = i;//pos记录最小值的位置
			val = L.data[i];//val记录最小值
		}
	}
	L.data[pos] = L.data[L.length-1];
	L.length--;
	return true;//删除完成，val值即为最小值
	
}
