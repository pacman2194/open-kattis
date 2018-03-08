import java.util.Scanner;

public class tarifa {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		int x = scan.nextInt();
		int n = scan.nextInt();
		int carry = x;

		for(int i=0; i < n; i++){

			carry += (x- scan.nextInt());

		}
		
		System.out.println(carry);
	}
}
