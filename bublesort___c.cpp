#include<stdio.h>
int main(){
    int i,n,pass,a[100],j,temp;
    printf("Enter the number of elements you want in array :");
    scanf("%d",&n);
    if(n>100){
        printf("array is out of bound ");
        return 0;
    }
    printf("\n Enter the element :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(pass=0;pass<n-1;pass++){
        for(j=0;j<n-pass-1;j++){
            if(a[j]>a[j+1]){
                temp  = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
        }
    }

   }
    printf("the array after sorting :");
    for(i=0;i<n;i++){
    	printf("%d\n\t",a[i]);
	}
    

return 0;
}
