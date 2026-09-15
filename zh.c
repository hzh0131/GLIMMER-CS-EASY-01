#include <stdio.h>
int average(int a,int b,int c)
{
    int p=0;
    p=(a+b+c)/3;
    return p; 
}

int fangcha(int a,int b,int c)
{
   
    int p=average(a,b,c);
    int f=((p-a)*(p-a)+(p-b)*(p-b)+(p-c)*(p-c))/3;
    return f;
}

int score(int p,int f)
{
    int zh=3 * p - f / 3;
    return zh;
}

void paiming(int x,int y,int z)
{
    if(x>=y)
    {
        if(z>=x){printf("小林 > 小明 > 小强");}
        else if(z>=y){printf("小明 > 小林 > 小强");}
        else{printf("小明 > 小强 >小林");}
    }
    else if(z>=y)
    {
       printf("小林 > 小强 > 小明");
    }
    else
    {
        if(z>=x){printf("小强 > 小林 > 小明");}
        else{printf("小强 > 小明 > 小林");}
    }
    
}

int main(void)
{
    printf("请按小明，小强，小林的顺序输入三人的成绩\n");
    int x1, x2, x3;  
    int y1, y2, y3;  
    int z1, z2, z3;
   printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d",&x1,&x2,&x3);
    int p1=average(x1,x2,x3);
    int f1=fangcha(x1,x2,x3);
    int zh1 = score(p1,f1);
   printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d",&y1,&y2,&y3);
    int p2=average(y1,y2,y3);
    int f2=fangcha(y1,y2,y3);
    int zh2 = score(p2,f2);
   printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d",&z1,&z2,&z3);
    int p3=average(z1,z2,z3);
    int f3=fangcha(z1,z2,z3);
    int zh3 = score(p3,f3);   
    paiming(zh1,zh2,zh3);
    return 0;

}