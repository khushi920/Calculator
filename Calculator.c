#include<stdio.h>
int main()
{
  int n1,n,i,n2,num,n3,n4;
  char opt;
  float a,b,c,d,res;
  printf("Select any opertor (*,/,+.- ) to perform opertions in c calculator\n");
  scanf("%c",&opt);
  
  if(opt== '*')
  {
      printf("You have selected multiplication\n");
      
  }
  else if(opt== '+')
  {
      printf("You have selected addition\n");
      
  }
  else if(opt== '/')
  {
      printf("you have selected divison\n");
      
  }
   if(opt== '-')
  {
      printf("you have selected subtraction\n");
  }
  {
  
  printf("Enter first number\n");
  scanf("%d",&n1);
  
  printf("Enter second number\n");
  scanf("%d",&n2);
  
  
  if(opt=='+')
  {
  a=n1+n2;
  printf("The sum oftwo numbers is %f\n",a);
  
  }
  else if(opt=='-')
  {
      b=n1-n2;
      
      printf("The subtraction of two numbers is %f\n",b);
  }
  else if(opt=='*')
  {
  c=n1*n2;
  printf("the multiplication of two numbers is %f\n",c);
  }
  else
  {
  d=n1/n2;
  printf("the divsion of two numbers is %f\n",d);
  }
  
  
  int choice;
  printf("If you want more calculations\n enter num 1 if you want else enter any other random number\n");
  
  scanf("%d",&choice);
  
  
  

  
 printf("select any operator(+,-,*,/)\n");
 scanf("%c",&opt);
 
printf("Enter your choice\n");
scanf("%d",&choice);


printf("Enter number\n");
scanf("%d",&n3);

printf("enter another number\n");
scanf("%d",&n4);


  if(opt=='+')
  {
  res=n3+n4;
  printf("The sum oftwo numbers is %f\n",res);
  
  }
  else if(opt=='-')
  {
      res=n3-n4;
      
      printf("The subtraction of two numbers is %f\n",res);
  }
  else if(opt=='*')
  {
  res=n3*n4;
  printf("the multiplication of two numbers is %f\n",res);
  }
  else if(opt=='/')
  {
  res=n3/n4;
  printf("the divsion of two numbers is %f\n",res);
  }
}
}

