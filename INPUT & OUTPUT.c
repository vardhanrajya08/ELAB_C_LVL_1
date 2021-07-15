// Professor JD has lots of options. Bottles containing all types of potions are stacked on shelves which cover the entire wall from floor to ceiling. 
#include <stdio.h>
#include <math.h>
int main()
{
float b,ls,rs1,rs2;
scanf("%f %f",&b,&ls);
b=b*b;
ls=ls*ls;
rs1=sqrt(ls-b);
rs2=sqrt(ls+b);
printf("%.5f %.5f",rs1,rs2);            return 0;}

// Binita was travelling from Chennai to Delhi in Rajdhani Express. 
#include <stdio.h>
int main()
{
    int tot_mins,hrs,mins;
    scanf("%d",&tot_mins);
    hrs=tot_mins/60;
    mins=tot_mins%60;
    printf("%d Hours and %d Minutes",hrs,mins);
	return 0;
}

// Elavenil has a chessboard with N rows and M columns. In one step, he can choose two cells of the chessboard which share a common edge (that has not been cut yet) and cut this edge.
#include <stdio.h>
int main()
{int n,m;
scanf("%d %d",&n,&m);
printf("%d",(n-1)*(m-1));

	return 0;
}

// Nancy bought apples in a fruit shop. 
#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    int q,r;
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    q=amtgiven/billamt;
    r=amtgiven%billamt;
    printf("Quotient:%d",q);
    printf("\nRemainder:%d",r);
	return 0;
}

// Arif came from a very low income family.
#include <stdio.h>
int main()
{
    float val1,val2,outcome;
    scanf("%f%f",&val1,&val2);
    outcome = val1 * val2;
    printf("%0.4f",outcome);
	return 0;
}

// The Electricity Officer has mentioned the total counts of unit and amount. The officer inform the customer the bill amount in a unique format. 
#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed,costperunit,result;
    scanf("\n%d \n%d",&unitconsumed,&costperunit);
    result=pow(unitconsumed,costperunit);
    printf("%d",result);
	return 0;
}

// Binita is playing a chess. The game will be played on a rectangular grid consisting of N rows and M columns. Initially all the cells of the grid are uncolored.
#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",(n*m)*2-n-m);
	return 0;
}

// Ramesh is working in an engineering college hostel as a Mess supervisor. There are different messes are available based on the years. 
#include <stdio.h>
int main()
{
    int alvqntoffood,messcnt,dividedqnt,remfood;
    scanf("%d %d",&alvqntoffood,&messcnt);
    dividedqnt=alvqntoffood/messcnt;
    remfood=alvqntoffood%messcnt;
    printf("%d %d",dividedqnt,remfood);
	return 0;
}

// Tina's brother gave her a friendly task of calculating the number of squares in a board that has n*n squares of dimensions 1cm *1cm each.
#include <stdio.h>
int main()
{
    int n;
    int tot_square;
    scanf("%d",&n);tot_square=(n*(n+1)/2)*(2*n+1)/3;
    printf("%d",tot_square);
	return 0;
}

// Laasya bought a new volleyball in the sports shop. It looks like a medium size. 
#include <stdio.h>
int main()
{
    float radiusofball,volumeofball;
    scanf("%f",&radiusofball);
    volumeofball=(4/3)*3.14*radiusofball*radiusofball*radiusofball;
    printf("%f",volumeofball);
	return 0;
}
