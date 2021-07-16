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
