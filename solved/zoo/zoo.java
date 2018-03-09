import java.util.Scanner;
import java.util.Map;
import java.util.TreeMap;
import java.util.Iterator;

public class zoo {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int count=1;
		int n = scan.nextInt();
		String[] line;
		String animal;
		scan.nextLine();
		while(n>0) {
			System.out.println("List "+count+":");
			Map<String,Integer> animals = new TreeMap();
			for(int i=0; i<n; i++) {
				line = scan.nextLine().toLowerCase().split(" ");
				animal = line[line.length-1];
				//System.out.println(animal);
				if(animals.get(animal) != null)
					animals.put(animal, animals.get(animal) + 1);
				else
					animals.put(animal, 1);
			}
			Iterator it = animals.entrySet().iterator();
			while(it.hasNext()) {
				Map.Entry pair = (Map.Entry)it.next();
				System.out.println(pair.getKey()+" | "+ pair.getValue());
				it.remove();
			}
			n = scan.nextInt();
			scan.nextLine();
			count++;
		}
		scan.close();
	}
}
