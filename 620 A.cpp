#include<stdio.h>
#include<math.h>
int main(){
    long long x1,y1,x2,y2,r1,r2;
    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
    r1=abs(x2-x1);
    r2=abs(y2-y1);
    if(r1>r2)printf("%lld",r1);
    else printf("%lld",r2);
    return 0;
}
