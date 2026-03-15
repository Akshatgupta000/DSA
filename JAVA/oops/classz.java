import java.util.Scanner;

class Equation{
    private double a;
    private double b;
    private double c;
    
    public void inputCoeff(){
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b= sc.nextDouble();
        c= sc.nextDouble();
    }

    public void solveEquation(){
        if(a!=0){
            double x = (c-b)/a;
            System.out.println("SUm ix: " + x);
        }
        else{
            System.out.println("Zero");
        }
        if(b!=0){
            double y = (c-a)/b;
            System.out.println("SUm ix: " + y);
        }
        else{
            System.out.println("Zero");
        }
    }
}

public class classz{
    public static void main(String[] args) {
        Equation equation = new Equation();
        equation.inputCoeff();
        equation.solveEquation();
    }
}