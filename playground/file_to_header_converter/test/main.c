#include <stdio.h>
#include <stdlib.h>

void print3D(int*** a,  int n)
{
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
            for(int k = 0; k < n; k ++)
                printf("%d", a[i][j][k]);
}
int main()
{
    int a[2][2][2] = {1,2,3,4,5,6,7,8};
    int n = 2;
    print3D((&(&a)),n);
    return 0;
}
