import java.util.Scanner;
import java.math.BigInteger;

public class oktalni {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		BigInteger bin = scan.nextBigInteger(2);
		System.out.println(bin.toString(8));
		scan.close();
	}
}