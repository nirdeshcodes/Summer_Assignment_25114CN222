#include<stdio.h>
int main(){
  int n,output;
  printf("Enter a number:");
  scanf("%d",&n);
  for(int i=1;i<=10;i++){
    output=n*i;
  printf("%d x %d =%d\n",n,i,output);

  }
  return 0;
}