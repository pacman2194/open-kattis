import java.util.Scanner;

public class guessinggame {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n, min, max;
		String[] line;
		while(true){
			min = 1;
			max = 10;
			n = scan.nextInt();
			if(n==0)
				break;
			scan.nextLine();
			line = scan.nextLine().split(" ");
			while(!line[1].equals("on")){
				if(line[1].equals("low"))
					min = n+1;
				else if(line[1].equals("high"))
					max = n-1;
				//System.out.println("min: "+min+"\tmax: "+max);
				n = scan.nextInt();
				scan.nextLine();
				line = scan.nextLine().split(" ");
			}
			if(n > max || n < min)
				System.out.println("Stan is dishonest");
			else
				System.out.println("Stan may be honest");
		}
		scan.close();
	}
}