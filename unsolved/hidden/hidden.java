import java.util.Scanner;

public class hidden {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String[] line = scan.nextLine().split(" ");
		String password = line[0];
		String phrase = line[1];
		int current = 0;
		boolean success = true;
		for(int i=0; i<phrase.length() && success == true && current<password.length()-1; i++){
			if(password.charAt(current) == phrase.charAt(i)){
				current++;
				continue;
			} else if(password.substring(current+1).indexOf(phrase.charAt(i))<0){
				success = false;
				System.out.println("Executed");
				break;
			}
		}
	}
}
