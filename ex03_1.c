#include<stdio.h>
#include<stdlib.h>
int main(){
  int a=0,b=0;
  char name[100];
  printf("Who are you?\n
    ");
  scanf("%s",name);
  printf("Hello, %s!\n",)
  printf("Tossing a coin...\n");
  for(int i=1;i<=3;i++){
    if(rand()%2==1){
    printf("Round %d: Heads\n",i);
    a++;
    }else{
      printf("Round %d: Tails\n",i);
      b++;
  }
  }
  printf("Heads: %d, Tails: %d\n",a,b);
}
