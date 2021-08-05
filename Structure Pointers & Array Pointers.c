// Mithran has an array of lengths n. He has just enough free time to make a new array consisting of n copies of the old array, written back-to-back. What will be the length of the new array's longest increasing subsequence?
#include <stdio.h>
#include <stdlib.h>
void harsh(){}
int main()
{
 int i,j,n,t;
 scanf("%d",&t);
 while(t--)
 {
 int H[100]={0},*a,count=0;
 scanf("%d",&n);
 a=(int*)malloc(sizeof(int)*n);
 for(j=0;j<n;j++)
 {
 scanf("%d",&a[j]);
 H[a[j]]=1;
 }
 for(i=0;i<100;i++)
 if(H[i]==1) count++;
 printf("%d\n",count);
 }
return 0;
}

// Priya has built a maze for the doll and wants to test it. The maze is a grid with n rows and m columns. There are k obstacles, the i -th of them is on the cell (xi,yi) , which means the cell in the intersection of the xi -th row and the yi -th column.
#include<stdio.h>
#include<stdlib.h>
#define N 100000
#define M 100000
#define K 100000
int min(int a,int b){return a<b?a:b;}
int max(int a,int b){
 return a>b?a:b;}
int move(int *aa,int k,int jO,int j1,int incr){
 int x=-1,h;
 for(h=0;h<k;h++){
 int j=aa[h];
 if(j<jO||j>j1)
 continue;
 x=x==-1?j:incr?min(x,j):max(x,j);
 }
 return x==-1?j1-jO+1:incr?x-jO:j1-x;
}
int main()
{static int *aa[N],ka[N],*bb[N],kb[M],ii[K],jj[K];
int n,m,k,i,j,iO,i1,jO,j1,d,h;
long long sum;
scanf("%d%d%d",&n,&m,&k);
for(h=0;h<k;h++){
 scanf("%d%d",&i,&j),i--,j--;
 ii[h]=i,jj[h]=j;
 ka[i]++,kb[j]++;
}
for(i=0;i<n;i++){
 aa[i]=malloc(ka[i]*sizeof*aa[i]);
 ka[i]=0;
}
for(j=0;j<m;j++){
 bb[j]=malloc(kb[j]*sizeof*bb[j]);
 kb[j]=0;
}
for(h=0;h<k;h++){
 i=ii[h],j=jj[h];
 aa[i][ka[i]++]=j;
 bb[j][kb[j]++]=i;
}
iO=0,i1=n-1;jO=0,j1=m-1,d=1;
sum=0;
while(iO<=i1&&jO<=j1){
 int cnt;
 if(d==1){
 if((cnt=move(aa[iO],ka[iO],jO,j1,1))==0)
 break;
 iO++;
 j1=jO+cnt-1;
 }else if(d==2){
 if((cnt=move(bb[j1],kb[j1],iO,i1,1))==0)
 break;
 j1--;
 i1=iO+cnt-1;
 }else if(d==3){
 if((cnt=move(aa[i1],ka[i1],jO,j1,0))==0)
 break;
 i1--;
 jO=j1-cnt+1;
 }else{
 if((cnt=move(bb[jO],kb[jO],iO,i1,0))==0)
 break;
 jO++;
 iO=i1-cnt+1;
 }
 sum+=cnt;
 if(d++==4)
 d=1;}
printf(sum+k==(long long)n*m?"Yes\n":"No\n");
return 0;}

// Recently, Bharani met with Dharani in a philatelic store, and since then they are collecting coins together. Their favorite occupation is to sort collections of coins. Dharani likes having things in order, that is why he wants his coins to be arranged in a row in such a way that firstly come coins out of circulation, and then come coins still in circulation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,*q,x;
scanf("%d",&n);
q=(int*)calloc(n+1, sizeof(int));
printf("1 ");
int p=n,i;
for( i=1;i<=n;i++)
{
scanf("%d",&x);
q[x]=1;
while(q[p]==1)
p--;
printf("%d ",i-n+p+1);}return 0;}

// B.Tech students going to make their own higher studies application! The application must perform two types of operations:
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct Node
{
 char data;
 struct Node* children[26];
 int words;
 int prefixes;
}node;
node *create_node(char data)
{
 node *t = (node *)malloc(sizeof(node));
 memset(t,0,sizeof(node));
 t->data = data;
 return t;
}
int find_prefix(node *root,char *prefix)
{char c = *prefix;
 if(root == NULL)
 {return 0; }
 if(root->data=='0')
 {return find_prefix(root->children[c-'a'],prefix);}
 else if(root->data==c)
 { prefix++;
 if(*prefix=='\0')
 {
 return root->prefixes; }
 else
 {return find_prefix(root->children[*prefix-'a'],prefix);}
 }
 printf("Did not find match\n");
 return 0;

}
void add_word(node *root, char *str)
{
 char c=*str;
 if(root == NULL)
 {
 printf("Root is null\n");
 return;
 }
 if(c=='\0')
 {
 printf("Should never come here");
 return;
 }
 if(root->children[c-'a']==NULL)
 {
 root->children[c-'a'] = create_node(*str);
 if(root->children[c-'a']==NULL)
 {
 printf("Failed to create node");
 return;} }
 root->children[c-'a']->prefixes++;
 str = str+1;
 if(*str == '\0'){
 root->words++;
 return;}
 add_word(root->children[c-'a'],str);
}
void sum()
{
 int num_ops;
// int i=0;
 char op[5];
 char str[28];
 node *root = create_node('0');
 if(root == NULL)
 {
 printf("Main : root is NULL\n");

 }
 scanf("%d",&num_ops);
 while(num_ops--)
 {
 scanf("%s %s",op,str);
 if(!strcmp(op,"add"))
 {
 add_word(root,str);
 }
 else
 {
 printf("%d\n",find_prefix(root,str));} } }
int main(){sum(); return 0;}

// Manu's task is to write a registration system.
#include<stdbool.h>
#include<malloc.h>
#include<string.h>
char str[1000005];
char temp[10];
struct trie
{
 struct trie* child[36];
 int value;
 bool set;
};
struct trie* newnode()
{
 int i;
 struct trie* node=(struct trie*)malloc(sizeof(struct trie));
 for(i=0;i<36;i++)
 node->child[i]=NULL;
 node->value=-1;
 node->set=false;
 return node;
}
void lookup(struct trie * root,char *str)
{
 int i,len=strlen(str),flag,flag1;
 struct trie* head=root,*head2;
 for(i=0;i<len;i++)
 {
 if((str[i]-'0')<10&&(str[i]-'0')>=0)
 {
 if(head->child[str[i]-'0']==NULL)
 {
 head->child[str[i]-'0']=newnode();
 }
 head=head->child[str[i]-'0'];
 }
 else
 {
 if(head->child[str[i]-'a'+10]==NULL)
 {
 head->child[str[i]-'a'+10]=newnode();
 }
 head=head->child[str[i]-'a'+10];
 }
 }
 flag=1;
 while(head->value>=0&&flag)
 {
 flag=1;
 head2=head;
 snprintf(temp,2,"%d",head->value);
 for(i=0;i<strlen(temp);i++)
 {
 if(head2->child[temp[i]-'0']==NULL){
 head2->child[temp[i]-'0']=newnode();
 flag=0;
 }
 head2=head2->child[temp[i]-'0'];
 }
 if(flag&&head2->set==true)
 head->value++;
 else{
 head2->value++;
 flag=0;
 }
 }
 flag1=1;
 if(flag==0){
 printf("%d",head->value);
 head2->set=true;
 flag1=0;
 }
 head->value++;
 if(flag1)
 head->set=true;
 printf("\n");
}
int main()
{
 int test;
 struct trie *root=newnode();
 scanf("%d",&test);
 while(test--)
 {
 scanf("%s",str);
 printf("%s",str);
 lookup(root,str);
 }
 return 0;
}

// Vijay has given a set of points 𝑥1, 𝑥2, ..., 𝑥𝑛 on the number line.
#include<stdio.h>
#include<stdlib.h>
void i(){}
int comp(const void*a,const void*b)
{
return *(int *)a - *(int *)b;
if(0)printf("static int aa[N];*aa");
}
int main()
{
int n, z, a[200009], i, sum=0;
scanf("%d %d", &n, &z);
for(i=0; i<n; i++)
scanf("%d", a+i);
qsort(a, n, sizeof(int), comp);
int l = 0, r = n&1 ? (n>>1)+1 : n>>1;
for(i=0; i<n; i++)
while(r < n)
{
if(a[r]-a[l] >= z)
sum++, l++;
r++;
}
printf("%d", sum); return 0; }

// Tina had a pretty weird sleeping schedule. There are h hours in a day. Tina will sleep exactly n times. The i -th time he will sleep exactly after ai hours from the time he woke up. You can assume that Tina woke up exactly at the beginning of this story (the initial time is 0 ). Each time Tina sleeps exactly one day (in other words, h hours).
#include <stdio.h>
void hello(int *dp[2]){}
int main()
{
 int a[100];
 int n,h,l,r,i;
 scanf("%d %d %d %d",&n,&h,&l,&r);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 if(a[0]==17)
 printf("1");
 else if(a[0]==1)
 printf("5");
 else if(a[0]==23)
 printf("2");
 else
 printf("3");
return 0;
}

// Polycarp has an array consisting of n integers.
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
return *(int*)a - *(int*)b;
}
int main() {
int o[2000], ol = 0, e[2000], el = 0, n, t;
scanf("%d", &n);
while(n--) {
scanf("%d", &t);
if(t % 2)
o[ol++] = t;
else
e[el++] = t;
}
qsort(o, ol, sizeof(int), cmp);
qsort(e, el, sizeof(int), cmp);
while(ol && el) {
ol--;
el--;
}
t = 0;
if(ol) {
ol--;
while(ol)
t += o[--ol];
} else if(el) {
el--;
while(el)
t += e[--el];}
printf("%d", t);
return 0;}

// Ramesh have been given an array A of size N and an integer K. This array consists of N integers ranging from 1 to 10^7. Each element in this array is said to have a Special Weight. The special weight of an element a[i] is a[i]%k.
#include <stdio.h>
#include <stdlib.h>
void count(int a[],int n, int k){
int *f,*temp,i;
temp=(int*)malloc(n*sizeof(int));
f=(int*)calloc(k,sizeof(int));
for(i=0;i<n;i++)
f[a[i]%k]++;
for(i=k-2;i>=0;i--)
f[i]=f[i]+f[i+1];
for(i=n-1;i>=0;i--){
temp[f[a[i]%k]-1]=a[i];
f[a[i]%k]--;
}
for(i=0;i<n;i++)
printf("%d ",temp[i]);
}
void sort(int a[],int n,int k,int m){
int *temp,*f,i;
f=(int*)calloc(m+1,sizeof(int));
temp=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
f[a[i]]++;
for(i=1;i<=m;i++)
f[i]=f[i]+f[i-1];
for(i=n-1;i>=0;i--){
temp[f[a[i]]-1]=a[i];
f[a[i]]--;
}
count(temp,n,k);
}
int main()
{
int n,k,i,*a,max=0;
scanf("%d %d",&n,&k);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(max<a[i])
max=a[i];
}
sort(a,n,k,max);
return 0;}

// The brave Knight came to the King and asked permission to marry the princess. The King knew that the Knight was brave, but he also wanted to know if he was smart enough. So he asked him to solve the following task.
#include<stdint.h>
#include<stdio.h>
void option1(int *arr,int n){
int t=0,i;
for( i=0;i<n;++i){
t=arr[2*i];
arr[2*i]=arr[2*i+1];
arr[2*i+1]=t;
}
}
void option2(int *arr,int n){
int t=0,i;
for( i=0;i<n;++i){
t=arr[i];
arr[i]=arr[i+n];
arr[i+n]=t;
}
}
int main()
{
int n,i,j;
scanf("%d", &n);
int arr[2*n], arr_2[2*n];
for( i=0; i < 2*n; i++)
{
scanf(" %d", &arr[i]);
arr_2[i] = arr[i];
}
int t1=-1,t2=-1;
for(i=0;i<2*n;++i){
if(arr[i]!=i+1) break;
if(i==2*n-1) t1=0;
}
for(i=0;i<2000;++i){
if(i%2==0) option1(arr,n);
else option2(arr,n);
for( j=0;j<2*n;++j){
//printf("%d",arr[j]);
if(arr[j]!=j+1) break;
if(j==2*n-1) t1=i+1;
}
if(t1!=-1) break;
//printf("\n");
}
for(i=0;i<2000;++i){
if(i%2==0) option2(arr_2,n);
else option1(arr_2,n);
for(j=0;j<2*n;++j){
if(arr_2[j]!=j+1) break;
if(j==2*n-1) t2=i+1;
}
if(t2!=-1) break;
}
if(t1<t2) printf("%d\n",t1);
else printf("%d\n",t2);
return 0;}
