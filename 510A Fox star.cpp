#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cont=1,flag=1;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        if(cont%2!=0)
        {
            for(int j=0; j<m; j++)
            {
                printf("#");
            }
        }
        else
        {
            if(flag==1)
            {
                for(int j=0; j<m-1; j++)
                {
                    printf(".");
                }
                printf("#");
                flag=0;
            }
            else
            {
                printf("#");
                for(int j=0; j<m-1; j++)
                {
                    printf(".");
                }
                flag=1;
            }
        }
        cont++;
        printf("\n");
    }
}
