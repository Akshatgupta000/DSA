class employee{
    private String name;

    public String getName(){
        return name;
    }

    public void setName(String newName){
        name = newName;
    }

}

public class getterSetter{
    public static void main(String[] args) {
        employee p = new employee();

        p.setName("Akshat");
        System.out.println(p.getName());
    }
}