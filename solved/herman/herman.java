import java.util.Scanner;

public class herman {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int rad = scan.nextInt();
		double answer = Math.pow((((double) rad)*2),2.0)/2;
		System.out.println(Math.pow(((double) rad),2) * Math.PI);
		System.out.println(answer);
	}
}
