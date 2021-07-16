// The much-anticipated video game "PUBG" has been released. The rules of "PUBG" are very simple.
#include <stdio.h>
int main()
{ 
    int i,j,row,col,t,moves;
    long long int g,grid[100][50],coins[50];
    for(i=0;i<100;i++)
    { 
        grid[i][0]=1;
        for(j=1;j<=i && j<50;j++)
        { 
            if(i==j)
                grid[i][j]=1;
            else
            grid[i][j]=grid[i-1][j-1]+grid[i-1][j];
      }
   }
        scanf("%d",&t);
        while(t--)
        { 
            scanf("%d %d %lld",&row,&col,&g);
            moves=0;
            while(g>0)
            { 
                row=col;
                while(row<100 && grid[row][col]<=g)
                     row++;
                row=row-1;
                g=g-grid[row][col];
                coins[moves]=grid[row][col];
                moves++;
                col--;
            }
            printf("%d\n",moves);
            for(i=0;i<moves;i++)
                printf("%lld ",coins[i]);
            printf("\n");
        }

       return 0;
}

// The hero of this story is Johan. 
#include <stdio.h>
#include <stdbool.h>
bool check(int arr[], int n, int m, long long mid)
{
	int days=0;
	int i;
	long long temp=0;
	for(i=0; i<n; i++)
	{
		if (temp+arr[i]>mid)
		{
			temp=0;
			days++;
			temp+=arr[i];
		}
		else
		{
			temp+=arr[i];
		}
	}
	return days<=m-1 && temp<=mid;
}
int main()
{
	int n,m,a,mintime=0;
	scanf("%d %d",&n,&m);
	int timetosolve[100005];
	for(a=0;a<n;a++){
		scanf("%d",&timetosolve[a]);
		if(timetosolve[a]>mintime)
		{
			mintime=timetosolve[a];
		}
	}
	long long lo = mintime,hi=1e10,mid;
	while(hi-lo>1)
	{
		mid=(hi+lo)/2;
		if (check(timetosolve,n,m,mid))
		{
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
	}
	lo=check(timetosolve,n,m,lo)?lo:hi;
	printf("%lld\n",lo);
	return 0;
}

// After completing some serious investigation, Arif and Simon are now chilling themselves in the Ooty hills. Very soon Simon became bored. Simon lived entirely for his profession. We know he is a workaholic. So Simon wants to stop his vacation and get back to work. But after a tiresome season, Arif is in no mood to return soon. So to keep Simon engaged, he decided to give to pull the idea of restarting the admissions of the academy they started last year for the new academic year-2021. 
#include <stdio.h>
 int main()
 { int t,n,h,i,l=1,count;
 scanf("%d",&t);
 while(t--)
 {l=1;
 count=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   scanf("%d",&h);
   if(h==l)
   {
   count+=2;
   }
   if(h>l)
   {
   l=h;
   count++;}}
  printf("%d\n",count);
 }return 0;}

// Joslyn likes problems involving arrays. 
#include <stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--){
        int count =0;
        int matprob[100];
        int n;
        scanf("%d",&n);
        for (i=0; i<n; i++){
            scanf("%d",&matprob[i]);
        }
        for(i=0; i<n; i++)
        {
            int sum=0, product=1;
            for (j=i; j<n; j++){
                sum+=matprob[j];
                product*=matprob[j];
                if(sum==product)
                count++;
            }
        }
        printf("%d\n",count);
    }
	return 0;
}

// Steve Waugh and Mark Waugh are sitting at the bottom of their treehouse and debating in how many ways then can jump up the stairs on the tree and reach the treehouse. 
#include <stdio.h>
int main(){
    int n,i; 
    int markwaugh,stevewaugh;
     scanf("%d",&n);
     int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
        for(i=1;i<=n;i++){
           arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        } stevewaugh=arr[n];
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        for(i=3;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }markwaugh=arr[n];
 printf("Steve Waugh:%d\nMark Waugh:%d",stevewaugh,markwaugh);
 return 0;
}

// Akash the die heart fan of AR Rahman went to the live concert happened in Bangalore with his family members.
#include <stdio.h>
int main()
{
    int nooffamilymembers,i;
    scanf("%d",&nooffamilymembers);
    for (;nooffamilymembers!=0;nooffamilymembers--){
        for (i=0;i<nooffamilymembers;i++) printf("%d ",nooffamilymembers);
        printf("\n");
    }
	return 0;
}

// The software tool is a repository of files, often the files for the source code of computer programs, with monitored access. Every change made to the source is tracked, along with who made the change, why they made it, and references to problems fixed, or enhancements introduced, by the change.
#include <stdio.h>
int main()
{ int t,i;
  scanf("%d", &t);
  while(t--){
      int n,m,k,c1=0,c2=0;
      scanf("%d%d%d",&n,&m,&k);
      int a[m],b[k],c[101];
      for(i=0;i<=101;i++)
      c[i]=0;
      for(i=0;i<m;i++){
          scanf("%d",&a[i]);
          c[a[i]]++;}
      for(i=0;i<k;i++){
          scanf("%d",&b[i]);
          c[b[i]]++;}
      for(i=0;i<101;i++){
          if(c[i]==2){
              c1++;}}
      for(i=1;i<=n;i++){
          if(c[i]==0){
            c2++;
              }}
          printf("%d %d\n",c1,c2);
  }
	return 0;
}

// Yogesh booked the ticket and went for the magic show with his partner. 
#include <stdio.h>
int main()
{ 
    int noofrows;
    int i,j;
    scanf("%d",&noofrows);
    for(i=0; i<=noofrows; i++){
	    for (j=0; j<i; j++){
		    printf("%d ",i);
	    }
	    printf("\n");
    }
    return 0;
}

// Advika bought a cadbaury gems pocket for his friends. She opened the pocket and arranged the gems colour wise. After finishing the arrangement it looked like a matrix. 
#include <stdio.h>
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	int sum =0, i, j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++)
			scanf("%d",&arr[i][j]);
	for (i=0;i<r;i++)
		for(j=0;j<c;j++){
			if (i==0||j==0||i==r-1||j==c-1){
				sum+=arr[i][j];
			}
		}
		printf("%d",sum);
	return 0;
}

// Rakesh has given an array of integers and you need to find out if the absolute difference of values of any two consecutive array integers is at-most D.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int T;int n,k,i;
    scanf("%d" ,&T);
    while(T--)
    {
        scanf("%d %d",&n,&k);
        int integers[n];int p=0;
        for(i=0;i<n;i++)
           scanf("%d",&integers[i]);
        for(i=0;i<n-1;i++)
        {
            if (abs(integers[i]- integers[i+1])>k)
            p++;
        }
        (p>0)?printf("NO\n"):printf("YES\n");
    }
    
    return 0;
}
