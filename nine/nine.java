import java.util.Scanner;
import java.math.BigInteger;

public class nine {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		BigInteger eight = new BigInteger("8");
		BigInteger nine = new BigInteger("9");
		BigInteger m = new BigInteger("1000000007");
		int n = scan.nextInt();
		for(int i=0; i<n; i++){
			BigInteger d = BigInteger.valueOf(scan.nextLong()-1);
			System.out.println(eight.multiply(nine.modPow(d,m)).mod(m));
		}
		scan.close();
	}
}