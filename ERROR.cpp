#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n > 0&&n < 27)for(int i=0;i<n;i++)printf("%c",'A'+i);
    else printf("ERROR");
    return 0;
}
