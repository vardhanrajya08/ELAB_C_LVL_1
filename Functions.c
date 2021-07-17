// Selvan is very interested in surfing the contents from google. He searches for various leaders on Google. 
#include <stdio.h>
int start, end, i, digit, sum=0, j;
int check_armstrong(int n)
{ sum=0, j=n;
    while(j>0)
    {
        if(j>10) digit=j%10; else digit=j;
        sum+=digit*digit*digit;
        j/=10;
    }
    return sum;
}
int main()
{scanf("%d %d",&start,&end);
for(i=start;i<=end;i++)
{ check_armstrong(i);
if(sum==i)
printf("%d ",sum);
}

	return 0;
}

// Simon celebrates his 25th birthday. Simon's older brother promised to buy him a new motorbike on his birthday if he could solve the question. 
#include <stdio.h>
int leap(int y)
{
    if (y%4==0) printf("Leap Year");
    else printf("Not a Leap Year");
    return y;
}
int main()
{
    int year;
    scanf("%d",&year);
    leap(year);
	return 0;
}

// Mahendran is a manager, he has assigned a task to Nathan.
#include <stdio.h>
#include <math.h>
int replace(int num);
int main()
{int num;
scanf("%d",&num);
printf("%d",replace(num));
	return 0;
}
int replace(int num)
{int i=0,digit,res;

while(num!=0){
    digit=num%10;
    if(digit==0)
    res+=7*pow(10,i);
    else res+=digit*pow(10,i);
    num/=10;
    i++;
}
return res;
}

// Simon wants a number plate for his Brand new luxury car. he likes it to be unrepeatable.
#include <stdio.h>
int isPerfectSquare(long long x);
int main()
{long long int n;
    scanf("%lld",&n);
    if(isPerfectSquare(n)==n)
printf("YES");
else printf("NO");
return 0;
}
int isPerfectSquare(long long x)
{int i, a=0, b=1, c;
for(i=2;i<=x;i++)
{   c=a+b;
    a=b;
    b=c;
        if(b==x) break;
}
return b;
}

// Nancy, Simon, and Swati were all attending campus interviews. they got selected for the second round. 
#include <stdio.h>
void getFibonacii(int a,int b,int n)
{int c=0;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        getFibonacii(a,b,n-1);
    }
}
int main()
{int a=0,b=1,n,x;
scanf("%d",&x); n=x-1;
printf("%d %d ",a,b);
getFibonacii(a,b,n-1);
	return 0;
}

// Issac is a Language teacher at a high school in Madurai. 
#include <stdio.h>
int convert(int ndays);
int y,w,d;
int main()
{int n;
    scanf("%d",&n);
    convert(n);
    return 0;
}
int convert(int ndays)
{
    y=ndays/365;
    w=(ndays%365)/7;
    d=(ndays%365)%7;
    return printf("%d Years %d Weeks %d Days",y,w,d);
}

// Laaslya is planning to go to the cinema theater to spend her weekend vacation. Her friends Tina, Caleb, and Jocelyn all knew about Laasya's plan. They say we are coming too, but she thinks to ignore them because only Laasya has enough money to pay for the cinema ticket.
#include <stdio.h>
void tHanoi(int n,char from_rod,char to_rod,char aux_rod) 
{
    if(n==1){
        printf("\nMove disk 1 from rod %c to rod %c",from_rod,to_rod);
        return;
    }
    tHanoi(n-1,from_rod,aux_rod,to_rod);
    printf("\nMove disk %d from rod %c to rod %c",n,from_rod,to_rod);
    tHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{int num;
scanf("%d",&num);
tHanoi(num,'A','C','B');
	return 0;
}

// Simon is studying B.Tech.-Mechanical Engineering. 
#include <math.h>
#include <stdio.h>
int convertBinarytoOctal(long long binaryNumber);
int main() {
    long long binaryNumber;
    scanf("%lld",&binaryNumber);
    printf("%d",convertBinarytoOctal(binaryNumber));
	return 0;
}
int convertBinarytoOctal(long long binaryNumber){
    int oct=0, dec=0, i=0;
    while (binaryNumber != 0){
        dec += (binaryNumber % 10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    i=1;
    while(dec!=0){
        oct+=(dec%8)*i;
        dec/=8;
        i*=10;
    }
    return oct;
}

// Simon is planning to summer vacation trip to Kodaikanal. His friends Tina, Nathan, and Irfan all learned about Samson's plan. They said, we are also coming too, but Simon has only money to spend for him alone. Simon is very good at programming, So he puts a puzzle to his friends to avoid taking them to Kodaikanal and tells them that those who finish this can come with him. 
#include <stdio.h>
int sumd(int n){
    int k,sum=0;
    scanf("%d",&k);
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum*k;
}
int superd(int num){
    int n=0;
    return(num%9 == 0) ? n =9:num%9;
}
int main()
{
int num;
scanf("%d", &num);
num = sumd(num);
printf("%d",superd(num));
    return 0;
}

// Nathan leads a life of a computer hacker by day and a thief by night. 
#include <stdio.h>
int perfect(int numbr);
int main(){
int a;
scanf("%d",&a);
if (perfect(a)==a) printf("Perfect Number");
else
printf("Not a Perfect Number");
return 0;
 }
int perfect(int numbr)
{
int i, sum=0;
for(i=1;i<=numbr/2; i++)
{
if(numbr%i==0)
{
sum+=i;
}
}return sum;}
