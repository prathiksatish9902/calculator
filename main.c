#include <stdio.h>
#include <math.h>
int main()
{
    int a1=0 , a2=0 , a3=1 , a4=0 , a5=1 , a6=1 ;
    int r1 , r2 , r3  ;
    int b1=1 , b2=1 , b3=1 , b4=2 ;
    int r4 , r5 ;
    int add();
    add();
    int sub();
    sub();


return 0;

}
int add()
{
    int a1=0 , a2=0 , a3=1 , a4=0 , a5=1 , a6=1 ;
    int r1 , r2 , r3  ;
    r1=a1+a2;
    printf("the result is %d ",r1);
    r2=a3+a4;
    printf("the result is %d",r2);
    r3=a5+a6;
    printf("the result is %d",r3);

    return 0;
}
int sub()
{
    int b1=1 , b2=1 , b3=1 , b4=2 ;
    int r4 , r5 ;
    r4=b1-b2;
    printf("the result is %d",r4);
    r5=b3-b4;
    printf("the result is %d",r5);
    return 0;


}
