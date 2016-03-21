#include<stdio.h>
#include<math.h>

   float i,p,w,f,k;
   double d,m,b,t,y;
   int n;
   void principal()
   {
   printf("输入您的本金：");
   scanf("%f",&p);


   printf("输入您期望的利率：");
   scanf("%f",&i);

   printf("输入您期望的存入期数：");
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

   printf("输入您期望的存入期数：");
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

   printf("输入您期望的存入期数：");
   scanf("%d",&n);

   w=p*i*n;  
   printf("计算结果为：%f\n",w);
   }

  
  void Time()
{
  
   printf("输入您的本金：");
   scanf("%f",&p);


   printf("输入您期望的利率：");
   scanf("%f",&i);

   printf("输入您期盼的总金额：");
   scanf("%f",&f);

   printf("输入您的复利次数：");
   scanf("%f",&k);

   w=log(f/p)/log(i/k+1)/k;
   printf("您所需要存的年限为：%f\n",w);

}

  void Rate()
 
{
    printf("输入您期盼的存入期数（年）:");
    scanf("%lf",&d);    
    printf("输入您的本金:");
    scanf("%lf",&m);
    printf("输入您期盼的总金额:");
    scanf("%lf",&t);
    b= (double) (((t-m)/m)/d);
    printf("您应该要的利率为：%lf\n",b);
}

  void Manytimes()
{    
    printf("输入您期盼的存入期数（年）:");
    scanf("%lf",&y);    
    printf("输入本金金额:");
    scanf("%lf",&m);
    printf("输入年利率:");
    scanf("%lf",&b);
    t=m*pow(1+b,y);
    printf("%lf年后，您能够得到%lf的总资产\n",y,t);

}

  void Repayment() 
{  
	  printf("输入您的贷款金额:");
      scanf("%lf",&d);
	  printf("输入您的年利率:");
      scanf("%f",&i);
      printf("输入您的贷款年限:");
      scanf("%d",&n);
      i=i/12;
      n=n*12;
      t=d*i*pow(1+i,n)/pow(1+i,n-1);
	  printf("您每月需要还款：%.4lf\n",t);  
 }

void main(void){

   printf("\n【复利计算程序】\n");
   int m;
   printf("\n复利计算按 1\n单利计算按 2\n计算筹集的养老金按 3\n计算时间按 4\n计算您要的利率按 5\n计算本利和投资按 6\n计算等额本息还款按 7\n\n");
   do
   {	scanf("%d",&m);
   if(m == 1)
		  {
           principal();
		  }
    
	         if(m == 2)
			 {
                 SimpleInterest();
			 }

			    if(m == 3)
				{
            FutureMoney();
				} 
	      
			 if(m == 4)
			 {
                 Time();
			 }
			 
			 if(m == 5)
			 {
                 Rate();
			 }

			 if(m == 6)
			 {
                 Manytimes();
			 }
			 if(m == 7)
			 {
                 Repayment();
			 }
	   
   } 
   while( m == 0);
}