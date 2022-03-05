#include <stdio.h>
#define MAX_SIZE 50

int main(){
    int arr[MAX_SIZE];
    int n,s,i,flag=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++) scanf("%d", &arr[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &s);
    for(i=0;i<n;i++){
        if(arr[i]==s){
            flag=1;
            break;
        }
    }
    if(flag== 1) printf("\nYES\n");
    else printf("\nNO\n");
    for(i=0;i<n;i++) printf("%d",arr[i]);
    return 0;
}
