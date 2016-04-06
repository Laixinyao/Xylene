import java.util.Scanner;

public class FuLi5{
	
	public static void main(String[] args) {
	do{
	Scanner scanner=new Scanner(System.in);
        System.out.println("\n复利计算按 1\n单利计算按 2\n计算筹集的养老金按 3\n计算时间按 4\n计算您要的利率按 5\n计算本利和投资按 6\n计算等额本息还款按 7\n\n");
		int C=scanner.nextInt();
                     if(C==1){
        	                 System.out.println("输入您的本金：");
        	                 double money = new Scanner(System.in).nextDouble();
        	                 System.out.println("输入您期望的年利率：");
        	                 double rate = new Scanner(System.in).nextDouble();
        	                 System.out.println("输入您期望的存入期（年）数：");
        	                 int year = new Scanner(System.in).nextInt();
        	                 double result=money*(1+rate*year);
        	                 System.out.println("计算结果为:"+result);
        	           }
                     if(C==2){
    	                 System.out.println("输入您的本金：");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期望的年利率：");
    	                 double rate = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期望的存入期（年）数：");
    	                 int year = new Scanner(System.in).nextInt();
    	                 double result=money + money * rate * year;
    	                 System.out.println("计算结果为:"+result);
    	              }
                     if(C==3){
                    	      System.out.println("输入您需要筹得的金额：");
                              double futuremoney = new Scanner(System.in).nextDouble();
                    	      System.out.println("输入您期望的存入期（年）数：");
                    	      int year = new Scanner(System.in).nextInt();
                    	      System.out.println("输入您期望的利率：");
                    	      double rate = new Scanner(System.in).nextDouble();
                    	      double result = futuremoney/(1+rate*year);
                              System.out.println("您需要存的本金是:"+result);
                      }
                     if(C==4){
    	                 System.out.println("输入您的本金：");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期望的年利率：");
    	                 double rate = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期望的未来总金额:");
    	                 double zong= new Scanner(System.in).nextInt();
    	                 double result=(zong - money) / (rate * money);
    	                 System.out.println("年数为：:"+result);
    	              }
                     if(C==5){
    	                 System.out.println("输入您的本金：");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期盼的期数（年）：");
    	                 double year = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期望的未来总金额:");
    	                 double zong= new Scanner(System.in).nextInt();
    	                 double result= zong / (money * year);
    	                 System.out.println("需要的利率为:"+result);
    	              }
                     if(C==6){
                    	 double result=0;
    	                 System.out.println("输入您的本金：");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您每年的投资金额：");
    	                 double every= new Scanner(System.in).nextInt();
    	                 System.out.println("输入您期盼的期数（年）：");
    	                 double year = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您期盼的年利率：");
    	                 double rate= new Scanner(System.in).nextInt();
    	                 for (int j = 0; j < year; j++) {
    	                 result = (1 + rate) * (every+money);
    	                 }
    	                 System.out.println("需要的利率为:"+result);
	                }
                     if(C==7){
    	                 System.out.println("输入您的贷款金额：");
    	                 double money = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入年利率：");
    	                 double rate = new Scanner(System.in).nextDouble();
    	                 System.out.println("输入您还款期数（年）:");
    	                 double year= new Scanner(System.in).nextInt();
    	                 double result= money * (rate/12) * Math.pow( 1 + rate/12 ,12 * year)/(Math.pow(1 + rate/12, 12 * year)-1);
    	                 System.out.println("月还款为:"+result);
    	              }
             	}while(true);    
	 }
 } 

