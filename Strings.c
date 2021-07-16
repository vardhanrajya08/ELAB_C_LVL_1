// Aaron has a number D containing only digits 0's and 1's. He wants to make the number to have all the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100002];
    int t, i,  count=0, c=0;
    scanf("%d",&t);
    while (t!=0)
    {
        scanf("%s",str);
        for (i=0; i<strlen(str); i++)
        {
            if (str[i]-'0' != 1)
                count++;
            else
                c++;
        }
        if (c==1 || count==1) printf("YES\n");
        else printf("NO\n");
        count=0;
        c=0;
        t--;
    }
	return 0;
}

// Roopa has given a program to her close friend Jhansi in the apartment where she lives.
#include <stdio.h>
#include<string.h>
void convertToWords(int);
const char *a[]={"","one","two","three",
    "four","five","six","seven","eight","nine"};
const char *b[]={"","ten","eleven","twelve","thirteen",
    "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const char *c[]={"","","twenty","thirty","forty","fifty","sixty","seventy",
"eighty","ninety"};
int main()
{  int n;
    scanf("%d",&n);
   convertToWords(n);
	return 0;
}
void convertToWords(int n){
   if(n>=1&&n<=9) 
   printf("%s",a[n]);
   else{
       
      if((n/1000)%100){
           printf("%s thousand ",a[(n/1000)%100]);
       }
       if((n/100)%10){
            printf("%s hundred ",a[(n/100)%10]);
      }
      // if(n>1000&&n%1000)
      // printf("and ");
       
       if(n%100>=1&&n%100<=9)
       {
           printf("%s",a[n%100]);
           goto here;
       }
       if(n>100&&n%100)
       printf("and ");
       
     if(n%100>19&&n%10==0)
     printf("%s",c[(n%100)/10]);
       
     if(n%100>19)
      printf("%s %s",c[(n%100)/10],a[n%10]);
       
       if(n%100>=10&&n%100<=19) printf("%s",b[(n%10)+1]);
   }
   here:; 
}

// Afghanistan has surrounded by attackers. A truck enters the city. 
#include <stdio.h>
int i, flag=1;
void prime(char str[9])
{
    for (i=0; i<8; i++)
    {    if(str[2]=='B') goto print;
        int sum=0;
        sum=str[i]+str[i+1];
        if(sum%2!=0) flag=0; } print:
        if(flag==1) printf("Allowed"); else if(flag==0) printf("Arrest");
}
int main()
{ char tag[9];
scanf("%s",tag);
if(tag[2]=='E') flag=0;
if(flag==1) prime(tag); else printf("Arrest"); return 0; }

// Lokesh have been given a String 
#include <stdio.h>
#include <string.h>
int main()
{char ch[100];
    scanf("%s",ch);
    int len=strlen(ch);
    int i;
    for (i=0;i<len;i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        else {
            ch[i]=ch[i]+32;
        }
    }
    puts(ch);
    return 0;
}

// Every day, Selvan goes to his office by train and buys the ticket from the counter on the day of travel. 
#include <stdio.h>
#include <string.h>

int main()
{
	char ticketnumber[102];
	int t,test=0;
	scanf("%d",&t);
	while(t>0) 
	{
		scanf("%s",ticketnumber);
		int i;
		for (i=0; i<4; i++)
		{
		    if (ticketnumber[i] !=  ticketnumber[i+2])
		    {
		    	printf("NO\n");
			    test =-1;
			    break;
		    }
		}
		if(test==0) printf("YES\n");
		test =0;
		t--;
	}
	return 0;
}

// Jeferson was given a string s of length 8 consisting solely of '0's and '1's. 
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[10];
	int t, count=0;
	scanf("%d",&t);
	
	while (t!=0)
	{
		scanf("%s",arr);
		int i;
		for (i=0; i<strlen(arr); i++)
		{
			if (arr[i]!=arr[i+1])
			count++;				
		}
		count--;
		if (count<=2) printf("uniform\n");
		else printf("non-uniform\n");
		t--;
		count=0;
	}
	return 0;
}

// Not everyone probably knows that Nivin has younder brother Nithin. Currently Nithin learns to read.
#include <stdio.h>
#include <string.h>
int main()
{char a[20],s[20]; int t;
scanf("%s",s);  scanf("%d",&t);
 while(t--) 
 {int i,l,j,cnt=0;
scanf("%s",a);  l=strlen(a);
for(i=0;i<l;i++)  {

    for(j=0;j<l; j++)
if(a[i]==s[j])
++cnt;}
if(cnt==3)
printf("Yes\n");
else
printf("No\n");
 }
return 0;}

// Nathan won the man of the match award in the recently concluded local tournament final. So the friends of nathan have asked him to take them to cinemas as a trat for winning man of the match.But 
#include <stdio.h>
#include <string.h>
int  main()
{
  char s[100];
  int tolower_toupper_isupper_islower,i;
  scanf("%d",&tolower_toupper_isupper_islower);
 while (tolower_toupper_isupper_islower>0)
 {
     scanf("%s",s);
     if (s[0] >= 'a' )
       {
           for(i=1;i<strlen(s);i++)
              {
                  if ( s[i] <= 'Z')
                     {
                         s[i]+=32;
                     }
              }
       }
      else 
             {
                 for(i=1;i<strlen(s);i++)
                   {
                       if (s[i]>='a')
                          {
                              s[i] -= 32;
                          }
                   }
             }
      printf("%s\n",s);

    tolower_toupper_isupper_islower--;
 }
 return 0;
}

// Janu and Ram are close friends who task a lot about life.
#include <stdio.h>
#include <string.h>
int main()
{
    int strlen ,i;
    scanf("%d",&strlen);
    for (i=0; i<strlen; i++)
    {
        char string[100];
        char string2[100];
        scanf("%s",string);
        scanf("%s",string2);
        char *ptr = strstr(string, string2);
        if (ptr != NULL) printf("Exists\n");
        else printf("Dosen't Exists\n");
    }
	return 0;
}

// Mohit has no work to do in the kitchen, so he decided to play a card game with the following rules:
#include <stdio.h>
#include <string.h>
int main()
{ char s[100002];
int test; int flag=0; int i=0;
scanf("%d", &test);
while(test--)
{ scanf("%s",s);
flag=0;
for(i=0;i<strlen(s)-1;i++)
{ if(s[i]=='1' || s[i+1]=='0')
  flag++;
}
if(flag%2==0) printf("WIN\n"); else printf("LOSE\n");
}
	return 0;
}
