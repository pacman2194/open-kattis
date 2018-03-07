import java.util.Scanner;

public class yoda {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String a = scan.nextLine();
		String b = scan.nextLine();
		scan.close();
		while(a.length() > b.length())
			b = "0"+b;
		while(a.length() < b.length())
			a = "0"+a;
		for(int i=a.length(); i>=0; i--){
			if(a.charAt(i)>b.charAt(i)){
				if(i<b.length()-2 && i>0){

				}else if(i==b.length()-1){

				}else if(i==0){
					
				}
			}
		}
	}
}