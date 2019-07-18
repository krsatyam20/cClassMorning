#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
clrscr();
//char str[]="hello";
char strn[6]={'h','e','l','l','o','\0',};

//printf("%s\n",str);


printf("%c\n",strn[0]);
printf("%c\n",strn[1]);

printf("%s\n",strn);
int count=0;
for(int i=0;i<strlen(strn); i++){


printf("%c",strn[i]);

  if(strn[i]=='l'){
  count++;
  }

}
printf("NUMBER OF L=%d",count);

getch();
}