import java.util.Scanner;
import java.math.BigInteger;

public class house {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		BigInteger init = scan.nextBigInteger();
		BigInteger eight = new BigInteger("8");
		BigInteger five = new BigInteger("5");
		BigInteger mod = init.mod(eight);
		if(mod.equals(BigInteger.ZERO) || mod.equals(five)){
			System.out.println(init);
		}else {
			if(mod.compareTo(five) > 0)
				System.out.println(init.add(eight.subtract(mod)));
			else
				System.out.println(init.add(five.subtract(mod)));
		}
	}
}
