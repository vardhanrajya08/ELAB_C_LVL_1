// Aabheer and Selvan are both are neighbors. Both always go for morning walks. 
#include <stdio.h>
struct Distance
{
    int feet;
    float inches;
}
d1,d2,sumOfDistances;
int main()
{
    scanf("%d %f\n",&d1.feet,&d1.inches);
    scanf("%d %f",&d2.feet,&d2.inches);
    sumOfDistances.feet = d1.feet + d2.feet;
    sumOfDistances.inches = d1.inches + d2.inches;
    printf("%d feet and %0.2f inches",sumOfDistances.feet,sumOfDistances.inches);
    return 0;
}

// Jocelyn's skill is to write stories of letters. But she finds it very boring to write the story, and after three hours of work, 
#include <stdio.h>
#include <string.h>
struct letters
{
   char ch[20];
};
int main()
{ struct letters story;
  int t,count=0,i;
  scanf("%d",&t);
  while(t!=0)
  { scanf("%s", story.ch);
      for(i=0;i<strlen(story.ch);i++)
          { if(story.ch[i]==story.ch[i+1])
              { count++;
                break;
              }
          }
          t--;
  }
  printf("%d", count);
    return 0;
}

// Mr. Naren Karthikeyan is a famous F1 driver in Tamil Nadu.
#include <stdio.h>
union reverse
{
 int n;
};
int main()
{ union reverse R;
 int r,num=0;
 scanf("%d",&R.n);
 while(R.n)
 { r=R.n%10;
 num=num*10+r;
 R.n/=10;
 }
 printf("%d",num);
return 0;
}

// Darsh, Ratik, Swathy are good friends.
#include <stdio.h>
struct fraction
{
    int numerator,denominator;
};
int main()
{
    struct fraction v1,v2;
    scanf("%d%d%d%d",&v1.numerator,&v1.denominator,&v2.numerator,&v2.denominator);
    if(v1.numerator/v1.denominator>v2.numerator/v2.denominator)
    printf("%d/%d is greater than %d/%d",v1.numerator,v1.denominator,v2.numerator,v2.denominator);
    else
    printf("%d/%d is smaller than %d/%d",v1.numerator,v1.denominator,v2.numerator,v2.denominator);
    return 0;
}

// Irfan is going to finish his final year master of computer application. he is in the final year of the course MCA. 
#include <stdio.h>
union Calculator
{  int num; };
int main()
{ union Calculator c1; scanf("%d",&c1.num);
if (c1.num > 0) printf("Positive"); else printf("Negative");
return 0; }

// In the year 2065, a scientist invents the time machine. To prove its capability, he sends it back in time to 2020, programming it to return within a particular hour. 
#include <stdio.h>
struct Time{
    int hours,minutes,seconds;
};
int main()
{
    struct Time startTime,stopTime,diff;
    scanf("%d %d %d\n",&startTime.hours,&startTime.minutes,&startTime.seconds);
    scanf("%d %d %d\n",&stopTime.hours,&stopTime.minutes,&stopTime.seconds);
    diff.seconds = startTime.seconds-stopTime.seconds;
     printf("%d:%d:%d",startTime.hours-stopTime.hours,startTime.minutes-stopTime.minutes,diff.seconds);

	return 0;
}

// Faiza is an Associate Software Developer at an international software company. 
#include <stdio.h>
#include<math.h>
struct EMI
{
 float principal_amount,rate,time;
};
int main()
{ struct EMI pay;
 float n;
 scanf("%f %f %f",&pay.principal_amount,&pay.rate,&pay.time);
 pay.rate=pay.rate/1200;
 pay.time=pay.time*12;
 n=(pay.principal_amount*pay.rate*pow((1+pay.rate),pay.time))/(pow((1+pay.rate),pay.time)-1);
 printf("%0.2f",n);
return 0;
}

// Meera is a food blogger and all her fans craves for the photos of the new restaurants and its dishes .
#include <stdio.h>
struct video{
    char place[100];
    int  videos;
};
int main()
{
    int i;
    struct video clip;
    struct video clips[7];
    clip.videos=0;
    for(i=0;i<7;i++){
        scanf("%s\n%d",clips[i].place,&clips[i].videos);
        clip.videos+=clips[i].videos;
    }
    for(i=0;i<7;i++){
        printf("%s : %d\n",clips[i].place,3*clips[i].videos);
    
    }
    printf("TOTAL : %d",3*clip.videos);
    return 0;
    if(0) printf("clip.name clip.dish") ;
}

// The king is left alone on the chessboard. In spite of this loneliness, he doesn't lose heart, because he has a business of national importance.
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
struct king
{
 char cx[5],cy[5];
};
int main()
{
 struct king path;


 scanf("%s%s",path.cx,path.cy);
 int x=path.cy[0]-path.cx[0];
 int y=path.cy[1]-path.cx[1];
 abs(x>y)?printf("%d\n",abs(x)):printf("%d\n",abs(y));
 while(x||y)
 {
 if(x>0)
 { x--;printf("R");}
 if(x<0)
 { x++;printf("L");}
 if(y>0)
 {y--;printf("U");}
 if(y<0)
 {y++;printf("D");}
 printf("\n");
 }
 return 0;
}

// Mr. Mannu was working in Renault Nissan. 
#include <stdio.h>
union number
{
 int n1;
 float n2;
};
int main()
{
 union number x;
 scanf("%d",&x.n1);
 printf("Age=%d years\n",x.n1);
 scanf("%f",&x.n2);
 printf("Height=%0.2f cm",x.n2);
return 0;
}
