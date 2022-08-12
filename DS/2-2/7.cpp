SqList merge(SqList p,SqList q){
	Sqlist ans;
	int i = 0,j = 0,k = 0;//i、j遍历p、q,k记录新顺序表
	while(i < p.length && j < q.length){
		if(p.data[i] < q.data[j]){
			ans.data[k++] = p.data[i++];
		}else{
			ans.data[k++] = p.data[j++];
		}
	}
	while(i < p.length) ans.data[k++] = ans.data[i++];
	while(j < q.length) ans.data[k++] = ans.data[j++];
	return ans;
}
