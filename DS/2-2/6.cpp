bool del_duplicate(SqList &L){
	if(L.length == 0) return false;//顺序表为空，返回false
	int i = 0,j = 1;//i记录不重复的元素,j遍历顺序表
	while(j < L.length){
		if(L.data[j] != L.data[i]){
			L.data[++i] = L.data[j];//i在元素不重复时增加。i会记录重复元素的第一个或不重复的元素
		}
		j++;//j需要遍历，无论什么情况都递增
	}
	L.length = i + 1;
	return true;
}
