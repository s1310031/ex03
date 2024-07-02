#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int a=0,b=0;
  printf("Tossing a coin...\n");
  srand((unsigned int)time(NULL));
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
  if(a>b){
    printf("%s won!\n",name);
  }else{
    printf("%s lose!\n",name);
  }
  return 0;
}
