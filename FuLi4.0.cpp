#include<stdio.h>
#include<math.h>

   float i,p,w,f,k;
   double d,m,b,t,y;
   int n;
   void principal()
   {
   printf("�������ı���");
   scanf("%f",&p);


   printf("���������������ʣ�");
   scanf("%f",&i);

   printf("�����������Ĵ���������");
   scanf("%d",&n);

   w=p*pow((1+i),n);
   printf("������Ϊ��%f\n",w);
   }

   void FutureMoney()
   {
   printf("��������Ҫ��õĽ�");
   scanf("%f",&w);


   printf("���������������ʣ�");
    scanf("%f",&i);

   printf("�����������Ĵ���������");
   scanf("%d",&n);
   p = w/pow((1+i),n);

   printf("����Ҫ��ı����ǣ�%f\n",p);
   }


   void SimpleInterest()
   {
   printf("�������ı���");
   scanf("%f",&p);


   printf("���������������ʣ�");
   scanf("%f",&i);

   printf("�����������Ĵ���������");
   scanf("%d",&n);

   w=p*i*n;  
   printf("������Ϊ��%f\n",w);
   }

  
  void Time()
{
  
   printf("�������ı���");
   scanf("%f",&p);


   printf("���������������ʣ�");
   scanf("%f",&i);

   printf("���������ε��ܽ�");
   scanf("%f",&f);

   printf("�������ĸ���������");
   scanf("%f",&k);

   w=log(f/p)/log(i/k+1)/k;
   printf("������Ҫ�������Ϊ��%f\n",w);

}

  void Rate()
 
{
    printf("���������εĴ����������꣩:");
    scanf("%lf",&d);    
    printf("�������ı���:");
    scanf("%lf",&m);
    printf("���������ε��ܽ��:");
    scanf("%lf",&t);
    b= (double) (((t-m)/m)/d);
    printf("��Ӧ��Ҫ������Ϊ��%lf\n",b);
}

  void Manytimes()
{    
    printf("���������εĴ����������꣩:");
    scanf("%lf",&y);    
    printf("���뱾����:");
    scanf("%lf",&m);
    printf("����������:");
    scanf("%lf",&b);
    t=m*pow(1+b,y);
    printf("%lf������ܹ��õ�%lf�����ʲ�\n",y,t);

}

  void Repayment() 
{  
	  printf("�������Ĵ�����:");
      scanf("%lf",&d);
	  printf("��������������:");
      scanf("%f",&i);
      printf("�������Ĵ�������:");
      scanf("%d",&n);
      i=i/12;
      n=n*12;
      t=d*i*pow(1+i,n)/pow(1+i,n-1);
	  printf("��ÿ����Ҫ���%.4lf\n",t);  
 }

void main(void){

   printf("\n�������������\n");
   int m;
   printf("\n�������㰴 1\n�������㰴 2\n����Ｏ�����Ͻ� 3\n����ʱ�䰴 4\n������Ҫ�����ʰ� 5\n���㱾����Ͷ�ʰ� 6\n����ȶϢ��� 7\n\n");
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