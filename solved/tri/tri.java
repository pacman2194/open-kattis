import java.util.Scanner;

public class tri {
	
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);

		int x = scan.nextInt();
		int y = scan.nextInt();
		int z = scan.nextInt();

		if(x==(y+z))
			System.out.println(x+"="+y+"+"+z);
		else if((x+y)==z)
                        System.out.println(x+"+"+y+"="+z);
		else if(x==(y-z))
                        System.out.println(x+"="+y+"-"+z);
		else if((x-y)==z)
                        System.out.println(x+"-"+y+"="+z);
		else if(x==(y*z))
                        System.out.println(x+"="+y+"*"+z);
		else if((x*y)==z)
                        System.out.println(x+"*"+y+"="+z);
		else if(x==(y/z))
                        System.out.println(x+"="+y+"/"+z);
                else if((x/y)==z)
                        System.out.println(x+"/"+y+"="+z);
	}
}
