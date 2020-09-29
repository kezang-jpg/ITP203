#include<stdio.h>
int main()
{
int CA,SE;
printf("enter the math CA:");
scanf("%d",&CA);
printf("enter the math SE:");
scanf("%d",&SE);
if(CA>=24 && SE>=16 )
{
int marks=CA+SE;
if(marks==40){
printf(" U are pass %d\n",marks );
}
else{
printf("u are fail %d\n",marks);
}
}
else{
if(CA<24){
printf(" U have fail in CA \n");}
else{
printf(" u have fail in SE\n");
}
}
return 0;
}