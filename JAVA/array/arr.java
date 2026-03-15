
import java.util.Scanner;

public class arr{
    // public static void main(String[] args) {
    //     Scanner sc = new Scanner(System.in);

    //     System.out.println("Enter size of array");
    //     int size = sc.nextInt();

    //     int[] number = new int[size];

    //     System.out.println("Enter array elements");
    //     for(int i=0;i<size;i++){
    //         number[i] = sc.nextInt();
    //     }
    //     int max = number[0];
    //     int sum=0;
    //     int mul=1;
        

    //     for(int num : number){
    //         if(num>max){
    //             max=num;
    //         }
    //         sum+=num;
    //         mul*=num;

    //     }
    //     System.out.println("Max number is: " + max);
    //     System.out.println("Sum is: " + sum);
    //     System.out.println("product is: " + mul);
        
    // }
    // ___________________________________________________

    // count even and odd digit 
    public static void main(String[] args) {
        Scanner sc  =new Scanner(System.in);

        System.out.println("Enter size of array");
        int size = sc.nextInt();

        System.out.println("Enter array elements");
        int[] array = new int[size];
        for(int i=0;i<size;i++){
            array[i] = sc.nextInt();
        } 

        int countEven = 0;
        int countOdd = 0;

        for(int x: array){
            if(x%2==0){
                countEven++;
            }
            else{
                countOdd++;
            }
        }

        System.out.println("Even digit count:" + countEven);
        System.out.println("Odd digit count:" + countOdd);
    }


}