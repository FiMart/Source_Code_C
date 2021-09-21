#include<stdio.h>
#include<math.h>
int my_abs(int num){
    if(num < 0)num = -num;
    return num;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",my_abs(num));
}
