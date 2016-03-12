#include<stdio.h>
#include<math.h>

   float i,p,w;
   int n;
   void principal()
   {
   printf("输入您的本金：");
   scanf("%f",&p);


   printf("输入您期望的利率：");
   scanf("%f",&i);

   printf("输入您期望的期数：");
   scanf("%d",&n);

   w=p*pow((1+i),n);
   printf("计算结果为：%f\n",w);
   }

   void FutureMoney()
   {
   printf("输入您需要筹得的金额：");
   scanf("%f",&w);


   printf("输入您期望的利率：");
    scanf("%f",&i);

   printf("输入您期望的期数：");
   scanf("%d",&n);
   p = w/pow((1+i),n);

   printf("您需要存的本金是：%f\n",p);
   }


   void SimpleInterest()
   {
   printf("输入您的本金：");
   scanf("%f",&p);


   printf("输入您期望的利率：");
   scanf("%f",&i);

   printf("输入您期望的期数：");
   scanf("%d",&n);

   w=p*i*n;
   printf("计算结果为：%f\n",w);
   }


void main(void){

   printf("\n                                        【复利计算程序】\n");
   int m;
   printf("\n                       复利计算按 1\n                       单利计算按 2\n                       想计算筹集的养老金什么的按 3\n");
   do
   {	scanf("%d",&m);
       if(m == 3)
	   {
            FutureMoney();
	   } 
	      if(m == 1)
		  {
           principal();
		  }
	         if(m == 2)
			 {
                 SimpleInterest();
			 }
   } 
   while( m == 0);
}
