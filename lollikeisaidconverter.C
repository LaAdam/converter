#include <stdio.h>
float days(int a){
    float d;
    printf("how many days? : ");
    scanf("%f",&d);
    if (d <= 0)
    {
      printf("invalid input try again\n");
      days(a);
    }else{
    
    printf("your days in weeks are : %.2f\n",d/7);
    printf("your days in months are : %.2f\n",d/30);
    printf("your days in years are : %.2f\n",d/365);
    }

 return 0;
}
float months(int a){
    float m;
    printf("your months : ");
    scanf("%f",&m);
     if (m <= 0)
    {
      printf("invalid input try again\n");
      months(a);
    }else{
    
    printf("in days (approximately) : %.2f \n",m*30.4167);
    printf("in weeks (approximately) : %.2f\n",m*4.345);
    printf("in years : %.2f \n",m/12);
    }
 return 0;
}
float weeks(int a){
    float w;
    printf("your weeks : ");
    scanf("%f",&w);
     if (w <= 0)
    {
      printf("invalid input try again\n");
      weeks(a);
    }else{
    printf("in days : %.2f \n",w*7);
    printf("in months (approximately) : %.2f\n",w/4.345);
    printf("in years (approximately : %.2f \n",w/52.143);
    }


return 0;
}
float years(int a){
    float y;
    printf("your years :");
    scanf("%f",&y);

    if (y <= 0)
    {
      printf("invalid input try again\n");
      years(a);
    }else{
    
    printf("in days (approximately) : %.2f \n",y*365);
    printf("in weeks (approximately) : %.2f\n",y*52.1429);
    printf("in months : %.2f \n",y*12);
    }

 return 0;
}
int main(){
 printf("hello, choose from the table the unit you're using:\n");
 printf("days\t1\nweeks\t2\nmonths\t3\nyears\t4\n");
 int a;
 scanf("%d",&a);
 
 switch (a)
 {
 case 1:
   days(a);
    break;
 case 2:
    weeks(a);
    break;
  case 3:
    months(a);
    break;
  case 4:
   years(a);
    break;
 default:
  printf("undefined input , Enter 1 to try again or any other key to exit.");
  int b;
  scanf("%d",&b);
     switch (b)
     {
     case 1:
      main();
      break;
     
     default:
     printf("bye.");
      break;
     }
    break;
 }

 return 0;
}