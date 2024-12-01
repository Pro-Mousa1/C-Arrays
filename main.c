#include <stdio.h>
int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);

    int array[a];
    printf("Enter the integers:%d\n ",a);

    for(int i=0;i<a;i++){
        scanf("%d", &array[i]);
    }

    int sum=0;
    for(int i=0;i<a;i++){
        sum+=array[i];
    }

    printf("The sum of the integers is%d ",sum);
    return 0;
}