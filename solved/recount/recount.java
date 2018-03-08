import java.util.Scanner;
import java.util.TreeMap;
import java.util.Map;
public class recount {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String line = scan.nextLine();
		TreeMap<String,Integer> map = new TreeMap();
		while(!(line.equals("***"))) {
			if(map.containsKey(line))
				map.put(line,map.get(line)+1);
			else
				map.put(line,1);
			line = scan.nextLine();
		}
		int max1 = 0;
		int max2 = 0;
		String maxF = "";
		String maxS = "";
		for(Map.Entry<String,Integer> entry : map.entrySet()) {
			if(maxF.equals("") && maxS.equals("")) {
				maxF = entry.getKey();
				max1 = entry.getValue();
			} else if((!(maxF.equals(""))) && maxS.equals("")) {
				maxS = entry.getKey();
				max2 = entry.getValue();
			} else {
				if(entry.getValue() > map.get(maxF)){
					maxS = maxF;
					max2 = max1;
					maxF = entry.getKey();
					max1 = entry.getValue();
				}
				else if(entry.getValue() > map.get(maxS)){
					maxS = entry.getKey();
					max2 = entry.getValue();
				}
			}
		}
		if(max1 > max2)
			System.out.println(maxF);
		else
			System.out.println("Runoff!");
	}
}
