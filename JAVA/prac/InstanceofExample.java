class Employee{
    void work(){
        System.out.println("Employee is working");
    }
}
class Manager extends Employee{
    void manage(){
        System.out.println("Manager is managing");
    }
}
public class InstanceofExample{
    public static void main(String[] args){
        Employee emp = new Manager(); //upcasting
        
        if(emp instanceof Manager){ //checking before downcasting
            Manager mgr = (Manager) emp;
            mgr.manage();
        }
    }
}