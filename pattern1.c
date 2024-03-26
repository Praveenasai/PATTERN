#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i]<a[j])
            {
                a[i][j]=0;
            }
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}