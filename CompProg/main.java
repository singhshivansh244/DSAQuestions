import java.util.*;
import java.io.*;
public class main
{
    public static String rev(String a){
        StringBuffer sb = new StringBuffer(a);
        sb.reverse();
        String rev =sb.toString();
        return rev;
    }
	public static void main(String[] args)throws IOException {
        Scanner sc = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name[] = new String[2];
        System.out.println("How many names to enter:");
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            System.out.printf("Enter Name %d: ",i+1);
            name[i]=br.readLine();
        }
        System.out.printf("%-20s","S.no");
        System.out.printf("%-20s","Name");
        System.out.printf("%-20s","Length");
        System.out.printf("%-20s","Reverse");
        System.out.printf("%-20s","isPalindrome()");
        System.out.println();
        for(int i=0;i<n;i++){
            System.out.printf("%-20d",i+1);
            System.out.printf("%-20s",name[i]);
            System.out.printf("%-20d",name[i].length());
            String rev = rev(name[i]);
            System.out.printf("%-20s",rev);
            if(rev.equalsIgnoreCase(name[i]))
                System.out.printf("%-20s\n","Yes");
            else
                System.out.printf("%-20s\n","No");
        }
    }
}