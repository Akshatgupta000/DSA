public class inherit {
    float salary = 10000;
}
class programmer extends inherit{
    int bonus = 100;
    public static void main(String[] args) {
        programmer p = new programmer();
        System.out.println("programmer salary is: "+p.salary);
        System.out.println("programmer salary with bonus is: "+p.bonus);
    }
}
