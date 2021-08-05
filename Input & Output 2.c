// Ratik a young millionaire deposits $10000 into a bank account paying 7% simple interest per year. 
#include <stdio.h>
int main()
{
    float p,i,interest,amount;
    int t;
    scanf("%f %f %d",&p,&i,&t);
    interest=(p*i*t)/100;
    amount=p+interest;
    printf("Interest after %d Years = $%0.2f\n",t,interest);
    printf("Total Amount after %d Years = $%0.2f",t,amount);
	return 0;
}

// Flipkart announced the year end stock clearance sale and as apart of they have also conducting the contest and the users answering the questions asked in the contest can win Moto One Power free of cost.
#include <stdio.h>
#include <math.h>
int main()
{
    int N,fp,sp,tp;
    scanf("%d",&N);
    fp=pow(N,1);
    sp=pow(N,2);
    tp=pow(N,3);
    printf("%d %d %d",fp,sp,tp);
	return 0;
}

// Roopa and Atifa are sisters they love to compete by playing math games which gradually helped them in their academics one day.
#include <stdio.h>
int main()
{
    float num1,num2;
    int sum;
    scanf("%f\n %f",&num1,&num2);
    sum=(int)num1+num2;
    printf("%d",sum);
	return 0;
}

// Salima saw a pair of beautiful dress online but she was confused about the metric system used for the size of the dress. 
#include <stdio.h>
int main()
{
    int feet,inches;
    float cms;
    scanf("%d %d",&feet,&inches);
    cms=feet*12*2.54+inches*2.54;
    printf("Your height in centimeters is : %0.2f",cms);
	return 0;
}

// Karthik was working in the HR division of Audi.#include <stdio.h>
int main()
{
    double salaryperday,totsalary;
    int hour;
    scanf("%d\n %lf",&hour,&salaryperday);
    totsalary=hour*salaryperday;
    printf("%.2lf",totsalary);
	return 0;
}

// Nathan was a student by morning and a computer nerd by night .
#include <stdio.h>
int main()
{
    int prodid,billid,quantity;
    float price,totprice;
    scanf("%d\n %d\n %f\n %d",&billid,&prodid,&price,&quantity);
    totprice=quantity*price;
    printf("%0.2f",totprice);
	return 0;
}

// Ram was working as a Marketing Executive in Pepsi. 
#include <stdio.h>
int main()
{
    int km;
    float lpd;
    float result;
    scanf("%d\n %f",&km,&lpd);
    result=km/lpd;
    printf("%.3f",result);
	return 0;
}

// Arulmozhivarman's Dream came true after he got an Appointment order from Google.Simon's family was very happy of his achievement. 
#include <stdio.h>
int main()
{
    int GrossPayment,basic,da,hra;
    scanf("%d %d %d",&basic,&da,&hra);
    GrossPayment=(basic*(da+hra)/100)+basic;
    double s=GrossPayment-0.5;
    printf("%.lf",s);
               return 0;
}

// Arul and Kani own the farm in the beautiful location of the city were lot of cows was roaming around. One day Arul and Kani was out of the city. On that day cows have eaten the grasses in the farm which is circular in structure. 
#include <stdio.h>
int main()
{
    float rad;
    float PI=3.14,area,ci;
    scanf("%f",&rad);
    area=PI*rad*rad;
    ci=2*PI*rad;
    printf("%.2f\n%.2f",area,ci);
	return 0;
}

// Jannu and Preethi both went to Egypt for visiting Pyramids. 
#include <stdio.h>
int main()
{
    float base,height,area;
    scanf("%f %f",&height,&base);
    area=(base*height)/2;
    printf("%0.3f",area);
	return 0;
}
