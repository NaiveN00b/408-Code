//#include <iostream>
//using namespace std;

void reverse(int x[],int st,int end){//数组无需加引用
	int i = st,j = end;
	while(i < j){
		int temp = x[i];
		x[i] = x[j];
		x[j] = temp;
		i++;
		j--;
	}
}

void reverse_A(int A[],int m,int n){
	reverse(A,0,m-1);
	reverse(A,m,m+n-1);
	reverse(A,0,m+n-1);
}
//int main(){
//	int x[5] = {1,2,3,4,5};
//	reverse(x,0,4);
//	for(int i=0;i<5;i++){
//		cout<<x[i]<<endl;
//	}
//	return 0;
//}
