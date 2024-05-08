#include<stdio.h>
void main(){
	int i,n,low,high,val,a[100],mid,index=-1;
	printf("enter a size of array");
	scanf("%d",&n);
	printf("enter a array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter a value you want to be a sarch:");
		scanf("%d",&val);
		low=0;
		high=n-1;
		while(low<=high){
			mid=(low+high)/2;
 		if(a[mid]==val){
 			index=mid;
 			break;
		 }
		 else if(a[mid]>val){
		 	high = mid-1;
		 }
		 else if(a[mid]<val){
		 	low = mid + 1 ;
		 	
		 }
		 if(index>=0){
		 	printf("%dfound at index %d",val,index);
		 }else
		 {
		 	printf("%d not found ay index %d",val,index);
		 }
		}
}
