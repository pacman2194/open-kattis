import java.util.Scanner;

public class piglatin {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String line;
		String[] ln;
		String word;
		String prefix = "";
		int vow = 0;
		char z;
		do{
			line = scan.nextLine();
			ln = line.split(" ");
			for(int i=0; i<ln.length; i++) {
				word = ln[i];
				z = word.charAt(0);
				if( z=='e' || z=='a' || z=='o' || z=='i' || z=='u' || z=='y'){
					word = word.concat("yay");
					//ln[i] = word;
				}else{
					for(int j=0; word.charAt(j)!='e' && word.charAt(j)!='a' && word.charAt(j)!='o' && word.charAt(j)!='i' && word.charAt(j)!='u' && word.charAt(j)!='y'; j++){
						vow=j;
					}
					vow++;
					//System.out.println(vow);
					prefix = word.substring(0,vow);
					prefix = prefix.concat("ay");
					word = word.substring(vow);
					word = word.concat(prefix);
					//ln[i] = word;
					vow=0;
					prefix="";
				}
				//System.out.print(word+" ");
				if(i != ln.length - 1)
					System.out.print(word+" ");
				else
					System.out.print(word+"\n");
			}
		}while(scan.hasNextLine());
	}
}
