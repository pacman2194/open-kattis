import java.util.Scanner;
import java.util.TreeMap;
import java.util.Map;

public class cups {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int cups = scan.nextInt();
		scan.nextLine();
		Integer rad = 0;
		String col;
		TreeMap<Integer,String> tm = new TreeMap<Integer,String>();
		for(int i=0; i<cups; i++){
			String line = scan.nextLine().trim();
			String[] lineArr = line.split(" ");
			try{
				rad = Integer.parseInt(lineArr[1]);
				col = lineArr[0];
			}catch(Exception e){
				rad = Integer.parseInt(lineArr[0])/2;
				col = lineArr[1];
			}
			tm.put(rad,col);
		}
		for(Map.Entry<Integer,String> entry : tm.entrySet()){
			System.out.println(entry.getValue());
		}
	}
}
