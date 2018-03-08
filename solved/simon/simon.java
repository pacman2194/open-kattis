import java.util.Scanner;

public class simon {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		String line;
		for(int i=0; i<n; i++) {
			line = scan.nextLine();
			if(line.length() > 11 && line.substring(0,10).equals("simon says"))
				System.out.println(line.substring(11));
			else
				System.out.println();
		}
	}
}
