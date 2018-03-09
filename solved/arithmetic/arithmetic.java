import java.util.Scanner;
import java.math.BigInteger;

public class arithmetic {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		BigInteger harker = scan.nextBigInteger(8);
		System.out.println(harker.toString(16).toUpperCase());
		scan.close();
	}
}