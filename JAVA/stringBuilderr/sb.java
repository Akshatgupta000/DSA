
public class sb {
    public static void main(String[] args){
        StringBuilder sb = new StringBuilder("Geeks");

        System.out.println("initial sb: " + sb);

        sb.append("Nice to meet you");
        System.out.println("After append: " + sb);

        sb.insert(4,"Z");
        System.out.println("After insertion: " + sb);

        sb.reverse();
        System.out.println("After reverse: " + sb);
    }
}
