import java.util.Scanner;

public class stringg {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        // String up = s.substring(0,1).toUpperCase() + s.substring(1);
        // System.out.println(up);

        // String[] arr = s.split(",");
        // for(String x : arr){
        //     System.out.println(x);
        // }


        // StringBuilder s = new StringBuilder("Hello");
        // s.append("Words");
        // s.reverse();
        // s.setCharAt(0,'Z');
        // System.out.println(s);

        // StringBuilder sb = new StringBuilder(s);
        // String reverse = sb.reverse().toString();

        // if(s.equals(reverse)){
        //     System.out.println("Palindome");
        // }
        // else{
        //     System.out.println("No");
        // }

        // splitting words by spaces

        String[] words = s.split(" ");
        for(String x: words){
            System.out.print(x);
        }


    }
}
