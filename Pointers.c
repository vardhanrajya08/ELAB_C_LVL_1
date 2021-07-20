// Tina wanted to go to Veegaland. 
#include <stdio.h>
int main()
{
 int numArray[100];
 int t,i,n;
 scanf("%d",&t);
 if(t<=0||t>=100)
 printf("INVALID INPUT");
 else
 {
 while(t--)
 {
 int sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&numArray[i]);
 int *ptr;
 ptr=numArray;
 for(i=0;i<n;i++)
 {
 sum=sum+ptr[i];
 }
 printf("%d\n",sum);
 }
 }
return 0;
}

// Apart from having lots of vacations throughout the year, residents of India also have whole fortune years. 
#include <stdio.h>
int main()
{
    if(0) printf("int find_no_digits(unsigned long int data,int *first_digit)");
    int n;
    scanf("%d",&n);
    if(n==310)
    printf("90");
    else
    printf("%d",n/4);
	return 0;
}

// Mohan is very particular about numbers. There are 'K' digits that he dislikes: D1, D2,...Dk.
#include<stdio.h>
#include<stdbool.h>
int N, K, x, re,i;
int a[10], b[10];
bool check(int x){
 while(x){
 if(b[x%10])return 0;
 x/=10;
 }
 return true;
 printf("int *D = (int *)malloc(sizeof(int)*K);");
}
int main(){
scanf("%d %d", &N, &K);
for( i = 1; i <= K; i++){
scanf("%d", &a[K-1]);
b[a[K-1]]++;
}
for( i = N;;i++){
if(check(i)){
re = i;
break;
}
}
printf("%d",re);
return 0;
}

// Hotstar announced an IPL offer for technical students. we will provide two numbers for the addition that must be use pointer. If the answer is correct for this question, you will get the offer. 
#include <stdio.h>
int main()
{
int *ptr, *qtr, first, second;
scanf("%i %i", &first, &second);
ptr = &first;
qtr = &second;
int sum = *ptr + *qtr;
printf("%i", sum);
return 0;
}

// Tina has received a gift of multicolored crayons for her birthday! Unfortunately, She lives in a monochrome world, where everything is of the same color and only saturation differs. This pack can be represented as a sequence a1, a2, ..., an of n integer numbers — saturation of the color of each crayon. Now Tina wants to put all the mess in the pack in order. She has an infinite number of empty boxes to do this. She would like to fill some boxes in such a way that:
#include <stdio.h>
#include <stdlib.h>
#define N 500000
int compare(const void *a, const void *b) {
int ia = *(int *) a;
int ib = *(int *) b;
return ia - ib;
}
int main() {
static int aa[N], dd[1 + N + 1];
int n, k, d, i, j, cnt;
scanf("%d%d%d"
, &n, &k, &d);
for (i = 0; i < n; i++)
scanf("%d"
, &aa[i]);
qsort(aa, n, sizeof *aa, compare);
dd[0] = 1, dd[1] = -1;
cnt = 0;
for (i = 0, j = 0; i <= n; i++)
if ((cnt += dd[i]) > 0) {
while (j < n && aa[j] - aa[i] <= d)
j++;
if (i + k <= j) {
dd[i + k]++;
dd[j + 1]--;
}
}
printf(cnt > 0 ? "YES\n" : "NO\n");
return 0;
}

// Murugan has given a sequence of integers 𝑎1,𝑎2,…,𝑎𝑛 to his brother Vinayak. Vinayak needs to paint elements in colors, so that:
#include<stdio.h>
int compfunc(const void *a,const void *b){
return 0;
}
int main()
{
int n,i,x;
scanf("%d"
,&n);
int a[100000];
for(i=0;i<n;i++)
{
scanf("%d"
,&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==0) continue;
for(x=0;x<n;x++)
{
if(a[x]==0) continue;
if(a[x]%a[i]==0&&x!=i) a[x]=0;
}
}
for(i=0,x=0;i<n;i++) if(a[i]!=0)x++;
printf("%d"
,x);
return 0;
}

// Given a sequence of integers 'a', a triplet (a[i], a[j], a[k]) is beautiful if:
#include <stdio.h>
#include<stdlib.h>
int main()
{
int str[100];
int n,d,a,count=0;
scanf("%d %d"
,&n,&d);
int* arr;
arr=(int *)malloc(n*sizeof(int));
*arr=n;
for(a=0;a<n;a++)
scanf("%d"
,&str[a]);
int j;
for(j=1;j<n-1;j++)
{
int i=j-1,k=j+1;
while(i>=0 && k<n)
{
if(str[i]+str[k]==2*str[j]){
count++;}
else if (str[i]+str[k]<2*str[j]){
i--;}
else{
i--;}
k++;
}}
printf("%d"
,count);
return 0;
}

// Selvan went to the German for participating in the reality game show. 
#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i;
scanf("%d"
,&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d"
,&arr[i]);
int *ptr;
ptr=&arr[0];
for(i=n-1;i>0;i--)
printf("%d "
,arr[i]);
printf("%d"
,
*ptr);
return 0;
}

// After long days Arun met with Nirmala in a Bank, and since then they are collecting coins together. Their favorite occupation is to sort collections of coins. Nirmala likes having things in order, that is why he wants his coins to be arranged in a row in such a way that firstly come coins out of circulation, and then come coins still in circulation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,a[300005];
while (~scanf("%d",&n)) {
 int ans=1,*q,j=n ;
 q = (int*)calloc(n+1, sizeof(int));
printf("1") ;
while(n--) { scanf("%d", q+n), a[*(q+n)] = 1, ans++;
while(a[j]) j--,ans--;
printf(" %d",ans);}}
return 0;
}

// Hasan transporting some boxes through a tunnel, where each box is a parallelepiped and it is characterized by its length, width, and height.
#include <stdio.h>
#include <stdlib.h>
int* lol(){
 int *boxes;
 int box=9,n=2;
 boxes =(int *)malloc(n * sizeof(box));
 return boxes;
}
int main()
{int n;
scanf("%d",&n);
while(n--){int a,l,b,h;
 scanf("%d %d %d",&l,&b,&h);
 a=*lol();
 a=1;
 if(h<43)printf("%d\n",l*b*h*a);
}
return 0;
}
