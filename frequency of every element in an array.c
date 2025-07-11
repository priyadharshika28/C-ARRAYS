#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        printf("\n%d = %d",arr[i],count);
    }
}
