// practice Q.15 -print the sum of first n natural numbers 
 //also print reverse order

 #include<stdio.h>
  int main(){
int n;
  printf("enter number :");
  scanf("%d",&n);

  int sum = 0;
for(int i=1,j=n; j<=n && j>=1; i++,j--){
  sum = sum + j;
  printf("%d\n",j);
}

printf("sum is %d \n",sum);

return 0;
}

