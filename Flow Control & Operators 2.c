// Abilash and Yazhini  are friends who love to go for outing every month. 
#include <stdio.h>
int main()
{
    int month;
    scanf("%d",&month);
    switch (month)
    {
        case 1: printf("31 days"); break;
        case 2: printf("28/29 days"); break;
        case 3: printf("31 days"); break;
        case 4: printf("30 days"); break;
        case 5: printf("31 days"); break;
        case 6: printf("30 days"); break;
        case 7: printf("31 days"); break;
        case 8: printf("31 days"); break;
        case 9: printf("30 days"); break;
        case 10: printf("31 days"); break;
        case 11: printf("30 days"); break;
        case 12: printf("31 days"); break;
    }
	return 0;
}

// A team from the Royal Squatraclub had planned to conduct a rally to create awareness among the Pune people to donate eyes. They conducted the rally successfully. 
#include <stdio.h>
int main()
{
    int people_age,weight;
    scanf("%d %d",&people_age,&weight);
    if ((people_age>18)&&(weight>40)) printf("Eligible for Donation");
    else printf("Not Eligible for Donation");
	return 0;
}

// For her next karate demonstration, Prasad will break some bricks.
#include <stdio.h>
int main()
{
    int s,w1,w2,w3;
    scanf("%d %d %d %d",&s,&w1,&w2,&w3);
    if (s>=w1+w2+w3) printf("1");
    else if (s>=w2+w3) printf("2");
    else printf("3");
	return 0;
}

// Jakson has been working in a restaurant which has N floors. He wants to minimize the time it takes him to go from the N-th floor to ground floor. He can either take the elevator or the stairs.
#include <stdio.h>
#include <math.h>
int main()
{
    double n,v1,v2;
    scanf("%lf %lf %lf",&n,&v1,&v2);
    if (n*2/v2 > sqrt(2)*n/v1) printf("Stairs");
    else printf("Elevator");
	return 0;
}

// Aadi and Tara travel frequently around the world.
#include <stdio.h>
int main()
{
    int month,numofdays;
    float roomrent,renttopay;
    scanf("%d %f %d",&month,&roomrent,&numofdays);
    renttopay=roomrent*numofdays;
    if ((month==4)||(month==5)) printf("Rs.%0.2f",renttopay*1.2);
    else printf("Rs.%0.2f",renttopay);
	return 0;
}

// You are playing a Billiards-like game on an N×N table, which has its four corners at the points {(0,0),(0,N),(N,0), and (N,N)}. 
#include <stdio.h>
int main()
{
    int n,k,x,y;
    int x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    x1=x+n-x;
    y1=y+n-x;
    x2=y1;
    y2=x1;
    x3=x2-x2;
    y3=y2-x2;
    x4=y3;
    y4=x3;
    if(x1==y1)
        printf("%d %d",x1,y1);
    else
    {    
        if(k%4==1)
            printf("%d %d",x1,y1);
        else if (k%4==2)
            printf("%d %d",x2,y2);
        else if (k%4==3)  
            printf("%d %d",x3,y3);   
        else    
        {
            printf("%d %d",x4,y4);
        }
    }   
    return 0;
}

// Mr. Issac the Head of Tamil Nadu Meteorological Department have instructed his team members to analyse the temperature of all the cities in Tamil Nadu.
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%0.2f Centigrade\n",celsius);
    if (celsius>=150) printf("Very Hot");
    else if (celsius>=100) printf("Hot");
    else printf("Moderate");
	return 0;
}

// An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x>0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward.
#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if (n%5==0) printf("%d",n/5+count);
    else printf("%d",n/5+1);
	return 0;
}

// Aarav a newbie entrepreneur was studying the profit and loss of his company.
#include <stdio.h>
int main()
{
    int cp,sp;
    scanf("%d\n %d",&cp,&sp);
    if(cp>sp) printf("Loss");
    else if(cp<sp) printf("Profit");
    else printf("No Profit No Loss");
	return 0;
}

// Roy wants to change his profile picture on Facebook. 
#include <stdio.h>
int main()
{
    int l,w,h;
    scanf("%d\n %d %d",&l,&w,&h);
    if(l*l>w*h) printf("UPLOAD ANOTHER");
    else if(l*l==w*h) printf("ACCEPTED");
    else printf("CROP IT");
	return 0;
}
