import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int num1,num2;
		
		Scanner sc = new Scanner(System.in);
		
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		
		String num3 = String.valueOf(num2);
		//changing int to string
		
		int num3_1, num3_2, num3_3;
		
		
		System.out.println(Integer.valueOf(num3.substring(2,3))*num1);
		System.out.println(Integer.valueOf(num3.substring(1,2))*num1);
		System.out.println(Integer.valueOf(num3.substring(0,1))*num1);
		System.out.println(num1*num2);


		//better coding 321
		//num2%10  => 321%10 = 1 (% is result for remain)
		//==> num2%10*num1 
		
		//num2%100 and get 21
		//num2%100/10 get 2 (/ is result for quotient 몫)
		//==> num2%100/10*num1
		
		//num2/100 and get 3
		//==> num2/100*num1
	}

}
