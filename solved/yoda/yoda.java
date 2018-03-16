import java.util.Scanner;
import java.math.BigInteger;

class yoda {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		char[] a = scan.nextLine().toCharArray();
		char[] b = scan.nextLine().toCharArray();
		int j = (a.length<b.length ? a.length : b.length);
		for(int i=0; i<j; i++){
			if(a[a.length - 1 -i] > b[b.length - 1 -i])
				b[b.length - 1 -i] = ' ';
			else if(a[a.length - 1 -i] < b[b.length - 1 -i])
				a[a.length - 1 -i] = ' ';
		}
		String aS = new String(a).replaceAll("\\s+","");
		String bS = new String(b).replaceAll("\\s+","");
		if(aS.equals("")){
			aS = "YODA";
			System.out.println(aS);
		}else{
			BigInteger aB = new BigInteger(aS);
			System.out.println(aB);
		}
		if(bS.equals("")){
			bS = "YODA";
			System.out.println(bS);
		}else{
			BigInteger bB = new BigInteger(bS);
			System.out.println(bB);
		}
		scan.close();
	}
}