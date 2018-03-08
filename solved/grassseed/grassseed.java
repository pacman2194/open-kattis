import java.util.Scanner;

public class grassseed {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		double sqM = scan.nextDouble();
		int n = scan.nextInt();
		double l,w;
		double cost = 0;

		for(int i=0; i<n; i++){
			l = scan.nextDouble();
			w = scan.nextDouble();
			cost += ((l*w)*sqM);
		}

		System.out.println(cost);
	}
}
