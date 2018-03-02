import java.util.Scanner;
import java.util.LinkedList;

public class downtime {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		LinkedList<Integer> link = new LinkedList();
		int max = 1;
		int n = scan.nextInt();
		int k = scan.nextInt();
		for(int i=0; i<n; i++){
			link.add(scan.nextInt());
			if(i>0) {
				while(link.getLast()-link.getFirst()>=1000 && link.size() > 1){
					//System.out.println(link.getLast()+" - "+link.getFirst());
					link.removeFirst();
				}
				if(link.size() > max){
					max = link.size();
					//System.out.println(max);
				}
			}
		}
		if(max%k == 0)
			System.out.println(max/k);
		else
			System.out.println(max/k+1);
	}
}
