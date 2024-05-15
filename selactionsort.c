#include <stdio.h>

int main()
{
    int i, n, arr[100], j, temp;
    printf("enter a size of an array:");
    scanf("%d", &n);
    printf("enter a number:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("the sotted array is:");
    for (i = 0; i < n; i++){
    	printf("%d\n", arr[i]);
	}
    
        
        for(i = n-1; i >= 0; i--)
    
        printf("%d\n", arr[i]);
return 0;
	
}
