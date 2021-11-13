import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int age[] = new int[10];
		String name[] = new String[10];
		String gender[] = new String[10];
		String garbageCollector;
		for (int i = 0; i < 2; i++) {
			System.out.println("Enter age please ");
			age[i] = s.nextInt();
			garbageCollector = s.nextLine();
			System.out.println("Enter name please ");
			name[i] = s.nextLine();
			System.out.println("Enter gender please ");
			gender[i] = s.nextLine();
		}
		System.out.printf("%-20s %-20s %-20s %-20s %-20s\n","S.No","Name","Gender","Age","Eligible");
		for (int i = 0; i < 2; i++) {
			System.out.printf("%-20s",i+1);
			if (age[i] >= 18) {
				System.out.printf("%-20s", name[i]);
				System.out.printf("%-20s", age[i]);
				if(gender[i] == "m"){
					System.out.printf("%-20s", "Male");
				}
				else{
					System.out.printf("%-20s", "Female");
				}
				System.out.printf("%-20s\n", "Yes");
			} else {
				System.out.printf("%-20s", name[i]);
				System.out.printf("%-20s", age[i]);
				if(gender[i] == "m"){
					System.out.printf("%-20s", "Male");
				}
				else{
					System.out.printf("%-20s", "Female");
				}
				System.out.printf("%-20s\n", "Yes");
			}
		}
	}
}