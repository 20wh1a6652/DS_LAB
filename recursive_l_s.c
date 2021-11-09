#include<stdio.h>
int i=0;
int recursivels(int a[], int n,int x){
   if(i>n)
      return 0;
   else if(a[i] == x)
      return i+1;
   else  
      ++i;
      return recursivels(a, n, x);
   
    
   
}
int main(){
   int a[10],n,x,pos;
   printf("enter the total number of elements");
   scanf("%d",&n);
   printf("enter the %d elements in the array",n);
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("enter the search element");
   scanf("%d",&x);
   pos = recursivels(a, n, x);
   if(pos != 0)
     printf("element found at %d",pos);
   else
     printf("element not found");
}

