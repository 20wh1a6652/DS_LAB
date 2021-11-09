#include<stdio.h>
int linear_search(int, int [], int);
int main(){
  int a[10],n,x,i,pos;
  printf("enter the size of an array");
  scanf("%d",&n);
  printf("enter the array elements");
  for(i=0;i<n;i++){
     scanf("%d",&a[i]);
  }
  printf("enter the search element");
  scanf("%d",&x);
  pos = linear_search(n,a,x);
  if(pos == -1)
   printf("element not found");
  else
   printf("element found at %d",pos);
  

}

int linear_search(int n, int a[], int x){
  for(int i=0;i<n;i++){
     if(a[i] == x){
       return i+1;
    
     }
  }
  return -1;
}


