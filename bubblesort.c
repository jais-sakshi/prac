#include <stdio.h>
#include<stdlib.h>

void bubsort(int arr[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if (flag==0){
            break;
        }
    }
}


void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the maximum size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element:");
        scanf("%d",&arr[i]);
    }

    printf("The array before sorting is : \n");
    display(arr,n);
    bubsort(arr,n);
    printf("The array after sorting is : \n");
    display(arr,n);

    return 0;
}