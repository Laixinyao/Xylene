#include<stdio.h>
#include<math.h>

   float i,p,w;
   int n;
   void principal()
   {
   printf("�������ı���");
   scanf("%f",&p);


   printf("���������������ʣ�\n");
   scanf("%f",&i);

   printf("������������������\n");
   scanf("%d",&n);

   w=p*pow((1+i),n);
   printf("������Ϊ��%f\n",w);
   }

   void FutureMoney()
   {
   printf("��������Ҫ��õĽ�\n");
   scanf("%f",&w);


   printf("���������������ʣ�\n");
    scanf("%f",&i);

   printf("������������������\n");
   scanf("%d",&n);
   p = w/pow((1+i),n);

   printf("����Ҫ��ı����ǣ�%f\n",p);
   }


   void SimpleInterest()
   {
   printf("�������ı���\n");
   scanf("%f",&p);


   printf("���������������ʣ�\n");
   scanf("%f",&i);

   printf("������������������\n");
   scanf("%d",&n);

   w=p*i*n;
   printf("������Ϊ��%f",w);
   }


void main(void){

   printf("\n                                        �������������\n");
   int m;
   printf("\n                       �������㰴 1\n                       �������㰴 2\n                       �����Ｏ�����Ͻ�ʲô�İ� 3\n");
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
	         else
			 {
                m = 0;
                printf("�������������ȷ������������");
			 }
   } 
   while( m == 0);
}