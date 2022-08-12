void invertSqlist(SqList &L){
	int i = 0,j = L.length - 1;
	while(i < j){
		int temp = L.data[i];
		L.data[i] = L.data[j];
		L.data[j] = temp;
		i++;
		j--;
	}
}
