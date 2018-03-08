import java.util.Scanner;

public class parking {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		int stores;
		int curr;
		int[] minMax = new int[2];
		for(int i = 0; i<n; i++){
			stores = scan.nextInt();
			for(int j = 0; j<stores; j++){
				if(j == 0){
					minMax[0] = scan.nextInt();
					minMax[1] = minMax[0];
				} else if(j == 1){
					curr = scan.nextInt();
					if(curr > minMax[0])
						minMax[1] = curr;
					else
						minMax[0] = curr;
				}
				else{
					curr = scan.nextInt();
					if(curr > minMax[1])
						minMax[1] = curr;
					else if(curr < minMax[0])
						minMax[0] = curr;
				}
			}
			System.out.println((minMax[1]-minMax[0])*2);
		}
	}
}
