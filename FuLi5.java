import java.util.Scanner;

public class FuLi5{
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
        System.out.println("\n�������㰴 1\n�������㰴 2\n����Ｏ�����Ͻ� 3\n����ʱ�䰴 4\n������Ҫ�����ʰ� 5\n���㱾����Ͷ�ʰ� 6\n����ȶϢ��� 7\n\n");
		int C=scanner.nextInt();
                     if(C==1){
        	                 System.out.println("�������ı���");
        	                 double money = new Scanner(System.in).nextDouble();
        	                 System.out.println("�����������������ʣ�");
        	                 double rate = new Scanner(System.in).nextDouble();
        	                 System.out.println("�����������Ĵ����ڣ��꣩����");
        	                 int year = new Scanner(System.in).nextInt();
        	                 double result=money*(1+rate*year);
        	                 System.out.println("������Ϊ:"+result);
        	           }
                     if(C==2){
    	                 System.out.println("�������ı���");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("�����������������ʣ�");
    	                 double rate = new Scanner(System.in).nextDouble();
    	                 System.out.println("�����������Ĵ����ڣ��꣩����");
    	                 int year = new Scanner(System.in).nextInt();
    	                 double result=money + money * rate * year;
    	                 System.out.println("������Ϊ:"+result);
    	              }
                     if(C==3){
                    	      System.out.println("��������Ҫ��õĽ�");
                              double futuremoney = new Scanner(System.in).nextDouble();
                    	      System.out.println("�����������Ĵ����ڣ��꣩����");
                    	      int year = new Scanner(System.in).nextInt();
                    	      System.out.println("���������������ʣ�");
                    	      double rate = new Scanner(System.in).nextDouble();
                    	      double result = futuremoney/(1+rate*year);
                              System.out.println("����Ҫ��ı�����:"+result);
                      }
                     if(C==4){
    	                 System.out.println("�������ı���");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("�����������������ʣ�");
    	                 double rate = new Scanner(System.in).nextDouble();
    	                 System.out.println("������������δ���ܽ��:");
    	                 double zong= new Scanner(System.in).nextInt();
    	                 double result=(zong - money) / (rate * money);
    	                 System.out.println("����Ϊ��:"+result);
    	              }
                     if(C==5){
    	                 System.out.println("�������ı���");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("���������ε��������꣩��");
    	                 double year = new Scanner(System.in).nextDouble();
    	                 System.out.println("������������δ���ܽ��:");
    	                 double zong= new Scanner(System.in).nextInt();
    	                 double result= zong / (money * year);
    	                 System.out.println("��Ҫ������Ϊ:"+result);
    	              }
                     if(C==6){
                    	 double result=0;
    	                 System.out.println("�������ı���");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("������ÿ���Ͷ�ʽ�");
    	                 double every= new Scanner(System.in).nextInt();
    	                 System.out.println("���������ε��������꣩��");
    	                 double year = new Scanner(System.in).nextDouble();
    	                 System.out.println("���������ε������ʣ�");
    	                 double rate= new Scanner(System.in).nextInt();
    	                 for (int j = 0; j < year; j++) {
    	                 result = (1 + rate) * (every+money);
    	                 }
    	                 System.out.println("��Ҫ������Ϊ:"+result);
	                }
                     if(C==7){
    	                 System.out.println("�������Ĵ����");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("���������ʣ�");
    	                 double rate = new Scanner(System.in).nextDouble();
    	                 System.out.println("�����������������꣩:");
    	                 double year= new Scanner(System.in).nextInt();
    	                 double result= money * (rate/12) * Math.pow( 1 + rate/12 ,12 * year)/(Math.pow(1 + rate/12, 12 * year)-1);
    	                 System.out.println("�»���Ϊ:"+result);
    	              }
                       
	       }
 } 

