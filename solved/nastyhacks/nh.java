import java.util.Scanner;

public class nh {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		int r;
		int e;
		int c;

		for(int i = 0; i < n; i++){
			r = scan.nextInt();
			e = scan.nextInt();
			c = scan.nextInt();

			if((e-c)>r)
				System.out.println("advertise");
			else if((e-c)<r)
				System.out.println("do not advertise");
			else
				System.out.println("does not matter");
		}
	}
}
