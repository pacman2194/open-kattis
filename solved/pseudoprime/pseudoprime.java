import java.util.Scanner;
import java.math.BigInteger;

class pseudoprime {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		BigInteger p = scan.nextBigInteger();
		BigInteger a = scan.nextBigInteger();
		while(!(a.equals(BigInteger.ZERO) && p.equals(BigInteger.ZERO))){
			if(p.isProbablePrime(100)){
				System.out.println("no");
			}else{
				if(a.modPow(p,p).equals(a.mod(p))){
					System.out.println("yes");
				}
				else{
					System.out.println("no");
				}
			}
			p = scan.nextBigInteger();
			a = scan.nextBigInteger();
		}
	}
}