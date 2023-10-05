 #include<stdio.h>
 
 void prime(int n){
  int num=0;
  for(int i=2;i<n;i++){
      if(n%i==0){
      printf("Number is composite \n");
      num=1;
      break;
      }  
  }
  if(num==0)
  printf("Nummber is prime \n");
}
int main(){
  int n;
  printf("Enter number n for which you want to check \n");
  scanf("%d",&n);
prime(n);
return 0;
} 