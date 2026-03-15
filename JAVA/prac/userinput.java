import java.util.Scanner;

public class userinput{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        // int x = sc.nextInt();

        // char z = sc.next().charAt(0);
        // System.out.println(z);

        int size = sc.nextInt();

        char[] charArr = new char[size];

        for(int i=0;i<size;i++){
            charArr[i] = sc.next().charAt(0);
        }

        for(char ch: charArr){
            System.out.println(ch);
        }
    }
}