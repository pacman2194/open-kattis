import java.util.Scanner;

public class oktalni {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		Long bin = scan.nextLong(2);
		System.out.println(Long.toOctalString(bin.longValue()));
		scan.close();
	}
}