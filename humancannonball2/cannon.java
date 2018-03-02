import java.util.Scanner;

public class cannon {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int cases = scan.nextInt();
		
		for(int i = 0; i<cases; i++){
			double velocity = scan.nextDouble();
			double angle = scan.nextDouble();
			double x = scan.nextDouble();
			double h1 = scan.nextDouble();
			double h2 = scan.nextDouble();

			double rads = Math.toRadians(angle);
			double time = x/(velocity * Math.cos(rads));

			double pos = velocity * time * Math.cos(rads);
			double height = (velocity * time * Math.sin(rads)) - ((9.81/2) * Math.pow(time,2));
			
			if(height > h1 && height < h2)
				System.out.println("Safe");
			else
				System.out.println("Not Safe");
		}

		scan.close();
	}
}
