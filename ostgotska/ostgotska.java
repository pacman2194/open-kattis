import java.util.Scanner;

public class ostgotska {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int count = 0;
		String line = scan.nextLine();
		String[] lineArr = line.split(" ");
		for(int i=0; i<lineArr.length; i++){
			if(lineArr[i].indexOf("ae") > -1)
				count++;
		}
		if((((double)count)/((double)(lineArr.length))) >= 0.40)
			System.out.println("dae ae ju traeligt va");
		else
			System.out.println("haer talar vi rikssvenska");
		scan.close();
	}
}