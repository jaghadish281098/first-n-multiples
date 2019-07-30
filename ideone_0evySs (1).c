 #include<stdio.h>  
int main()    
{    
 int i,fact,n;    
 printf("Enter a n: ");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      fact=n*i;       
  printf("Factorial of %d ",fact);   
} 
return 0;  
}   