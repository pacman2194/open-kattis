import java.util.Scanner;
import java.util.Map;
import java.util.TreeMap;

public class quickbrownfox {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int cases = scan.nextInt();
		scan.nextLine();
		String line;
		while(cases > 0){
			int success = 1;
			line = scan.nextLine().toLowerCase();
			TreeMap<Character,Integer> tm = new TreeMap();
			tm.put('a',0);
			tm.put('b',0);
			tm.put('c',0);
			tm.put('d',0);
			tm.put('e',0);
			tm.put('f',0);
			tm.put('g',0);
			tm.put('h',0);
			tm.put('i',0);
			tm.put('j',0);
			tm.put('k',0);
			tm.put('l',0);
			tm.put('m',0);
			tm.put('n',0);
			tm.put('o',0);
			tm.put('p',0);
			tm.put('q',0);
			tm.put('r',0);
			tm.put('s',0);
			tm.put('t',0);
			tm.put('u',0);
			tm.put('v',0);
			tm.put('w',0);
			tm.put('x',0);
			tm.put('y',0);
			tm.put('z',0);
			for(char c : line.toCharArray()){
				if(Character.isLetter(c))
					tm.put(c,tm.get(c)+1);
			}
			for(Map.Entry<Character,Integer> entry : tm.entrySet()) {
				if(entry.getValue()==0){
					success = 0;
					break;
				}
			}
			if(success == 0){
				System.out.print("missing ");
				for(Map.Entry<Character,Integer> entry : tm.entrySet()) {
					if(entry.getValue()==0)
						System.out.print(entry.getKey());
				}
			}
			else
				System.out.print("pangram");
			System.out.print("\n");
			cases--;
		}
	}
}