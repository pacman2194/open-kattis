import java.util.Scanner;

public class backspace {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String line = scan.nextLine();
		for(int i=0; i<line.length(); i++){
			if(line.charAt(i) == '<'){
				//System.out.println(line);
				if(i>1 && i<line.length()-1){
					line = (line.substring(0,i-1)).concat(line.substring(i+1));
					i -= 2;
				}
				else if(i==1){
					line = line.substring(2);
					i = -1;
				}
				else{
					line = line.substring(0,line.length()-2);
				}
			}
		}
		System.out.println(line);
		scan.close();
	}
}