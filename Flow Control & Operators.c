// The Election Commission of India distributed the voter ID to all eligible citizens. 
#include <stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if (age>=18)
    printf("Eligible");
    else
    printf("Not Eligible");
	return 0;
}

// Abi and Jannu are off to the wedding of a close relative. This time they have to travel without their guardians. Abi got very interested in the arrangement of seats inside the train coach.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%8==4) printf("%dLB",n-3);
    else if(n%8==3) printf("%dUB",n+3);
    else if(n%8==6) printf("%dUB",n-3);
    else if(n%8==5) printf("%dMB",n-3);
    else if(n%8==7) printf("%dSU",n+1);
    else if(n%8==0) printf("%dSL",n-1);
	return 0;
}

// Laasya looking at the friends birthday list on a social media site likes to find if the particular person's birthday year is a leap year or not. 
#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0) printf("LEAP YEAR");
    else printf("NOT A LEAP YEAR");
	return 0;
}

// While purchasing certain items, a discount of 10% is offered by the popular super market if the quantity purchased is more than 1000. 
#include <stdio.h>
int main()
{
    int price,quantity,totexp;
    scanf("%d %d",&quantity,&price);
    totexp=quantity*price;
    if(quantity>1000) printf("%0.0f",totexp*0.9);
    else printf("%d",totexp);
	return 0;
}

// A triple of numbers is said to be poor when two of those numbers are equal but the other number is different from those two numbers.
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a==b || b==c || c==a) && ((a!=b)!=c)) {printf("Yes");}
    else {printf("No");}
	return 0;
}

// Vikram has just started Programming, he is in first year of Engineering. Vikram is reading about Relational Operators.
#include <stdio.h>
int main()
{
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    if (number1>number2) printf(">");
    else if (number1<number2) printf("<");
    else printf("=");
	return 0;
}

// Fazil frequently uses Hexadecimal notation in his work.
#include <stdio.h>
int main()
{
    char X,Y;
    int a,b;
    scanf("%c %c",&X,&Y);
    a=X,b=Y;
    if (a>b) printf(">");
    else if(b==a) printf("=");
    else printf("<");
	return 0;
}

// Rohit has 'A' Chocolates and Mohit has 'B' Chocolates. 
#include <stdio.h>
int main()
{
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    if(k<=a) 
    a-=k;
    else if(b>=1) {k=k-a;a=0;b-=k;}
    printf("%d %d",a,b);
	return 0;
}

// Arulmozhivarman is working in ship. He is responsible for classifying the ship into different classes based on the letterclass ID of the ship.
#include <stdio.h>
int main()
{
char ID;
scanf("%c",&ID);
if (ID=='D') printf("Destroyer");
else if (ID=='f') printf("Frigate");
else if ((ID=='C')||(ID=='c')) printf("Cruiser");
else if ((ID=='B')||(ID=='b')) printf("BattleShip");
return 0;
}

// Tharun wants to print a document with "N" pages double-sided, where two pages of data can be printed on one sheet of paper.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0) printf("%d",n/2);
    else printf("%d",(n/2)+1);
    return 0;
}
