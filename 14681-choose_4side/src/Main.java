import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		int num1,num2;
		
		Scanner sc = new Scanner(System.in);
		
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		
		if (num1>0 && num2>0)
			System.out.println("1");
		else if (num1<0 && num2>0)
			System.out.println("2");
		else if (num1<0 && num2<0)
			System.out.println("3");
		else if (num1>0 && num2<0)
			System.out.println("4");
	}

}
