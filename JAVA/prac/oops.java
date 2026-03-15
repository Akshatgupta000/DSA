class Pen{
    String color;
    String type;

    public void write(){
        System.out.println("Writing Something");
    }

    public void printColor(){
        System.out.println(this.color);
    }
}

class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
    Student(String name, int age){
        this.name = name;
        this.age = age;
    }
}

public class oops {
    public static void main(String[] args) {
        // Pen pen1 = new Pen();
        // pen1.color = "red";
        // pen1.type = "Ball Pen";

        // Pen pen2 = new Pen();
        // pen2.color = "Black";
        // pen2.type = "Gel";

        // pen1.printColor();
        // pen2.printColor();

        // __________________________________

        // Student s1 = new Student();
        // s1.name = "Akshat";
        // s1.age = 20;

        // s1.printInfo();
        // ___________________________________

        Student s1 = new Student("akshat" , 20);
        s1.printInfo();
    }

    
}
