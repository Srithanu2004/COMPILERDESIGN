#include<string.h> 
#include<ctype.h>
#include<stdio.h>
void keyword(char str[10])
{
if(strcmp("for",str)==0||strcmp("while",str)==0||strcmp("do",str)==0||strcmp("int",str
)==0||strcmp("float",str)==0||strcmp("char",str)==0||strcmp("double",str)==0||strcmp("st atic",str)==0||strcmp("switch",str)==0||strcmp("case",str)==0)
printf("\n%s is a keyword",str);
else
printf("\n%s is an identifier",str);
}
int main()
{
FILE *f1,*f2,*f3; char c, str[10], st1[10];
int num[100], lineno=0, tokenvalue=0,i=0,j=0,k=0; printf("\n Enter the c program : ");
f1=fopen("input","w");
while((c=getchar())!=EOF) putc(c,f1);
fclose(f1); f1=fopen("input","r"); f2=fopen("identifier","w");

f3=fopen("specialchar","w");
if(c!=' ') str[k++]=c; else
{
str[k]='\0'; keyword(str); k=0;
}
}
fclose(f2); f3=fopen("specialchar","r"); printf("\n Special characters are : ");
while((c=getc(f3))!=EOF)
printf("%c",c);
printf("\n"); fclose(f3);
printf("Total no. of lines are:%d", lineno);
}


