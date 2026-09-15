#include <stdio.h>
int main(void)
{
   int answer;
   do
{
   answer=1;
   int round=0;
   int age;
   char name[100]=""; 
   printf("请输入姓名：\n");
   fgets(name,sizeof(name),stdin);
   for(int i=0;name[i]!='\0';i++)
   {
      if(name[i]=='\n'){name[i]=0;break;}
   }
   printf("请输入年龄：\n");
   scanf("%d",&age);
   while(getchar() != '\n');
   printf("年龄是%d岁,姓名是%s\n",age,name);
   printf("是否要继续输入？(若是则输入1,否则输入0)\n");
   scanf("%d",&answer);
   while(getchar() != '\n');
   round++;
   


}while(answer);

return 0;


} 