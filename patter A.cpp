#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            printf("1");
            int temp = 2;
            for(int j=1;j<=2*n-1;j++)
            {
                if(j%2 != 0)
                {
                    printf("%d",i);
                }
                else
                {
                    printf("%d",temp++);
                }
            }
            printf("\n");
        }
    }
}
