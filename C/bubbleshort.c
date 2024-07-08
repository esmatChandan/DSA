#include<stdio.h>
void main(){
	int n,a[100],pass,j,i,temp;
	printf("enter a size of array:");
	scanf("%d",&n);
	printf("enter a array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(pass=0;pass<n-1;pass++){5
		for(j=0;j<n-pass-1;j++){
		
	}
}
	if(a[j]>a[j+1]){
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	}
	
	printf("the array after sort is :");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
