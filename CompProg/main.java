import java.util.Scanner;

class SalaryException extends Exception {
	public String getErrorMessage() {
		return "Salary is less";
	}
}

public class main {
	public static void main(String[] args) {
		int salary;
		String name, designation;
		Scanner s = new Scanner(System.in);
		salary = s.nextInt();
		name = s.nextLine();
		designation = s.nextLine();
		System.out.println(name);
		System.out.println(designation);
		try {
			if (salary < 5000) throw new SalaryException();
			System.out.println(salary);
		} catch (SalaryException ex) {
			System.err.println("Error: " + ex.getErrorMessage());
		}
	}
}