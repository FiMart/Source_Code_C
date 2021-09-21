#include <stdio.h>
int main()
{
       int mat1[3][3],mat2[3][3],mat3[3][3];
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
}
