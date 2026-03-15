
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        // Non-primitive types
        // new keyword is also used in non-primitive data type.

        // String are immutable in java.
        // String name = "Akshat";
        // System.out.println(name.length());
        // System.out.println(name.charAt(0));

        // System.out.println(name);
        // String name2 = name.replace('A', 'b');

        // System.out.println(name2);

        // substring
        // System.out.println(name.substring(0,4));

        // Array
        // int[] marks = new int[3];
        // marks[0] = 97;
        // marks[1] = 86;
        // marks[2] = 100;
        
        // System.out.println(marks.length);
        // System.out.println(marks[0]);
        // Arrays.sort(marks);

        // System.out.println(marks[0]);

        Scanner sc = new Scanner(System.in);

        // int age = sc.nextInt(); //for integers
        // System.out.println(age);

        String name = sc.nextLine();
        System.out.println(name);


    }
}
