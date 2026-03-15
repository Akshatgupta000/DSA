import java.util.*;

public class LibraryBookManager {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int n = Integer.parseInt(sc.nextLine());
            if (n < 1 || n > 100) throw new IllegalArgumentException("Error: Number of book IDs must be between 1 and 100");
            int[] books = new int[n];
            for (int i = 0; i < n; i++) {
                books[i] = Integer.parseInt(sc.nextLine());
                if (books[i] < 1 || books[i] > 10000) {
                    System.out.println("Error: Book ID must be between 1 and 10000");
                    return;
                }
            }
            int index = Integer.parseInt(sc.nextLine());
            if (index < 0 || index >= n) throw new ArrayIndexOutOfBoundsException();
            int newId = Integer.parseInt(sc.nextLine());
            if (newId < 1 || newId > 10000) {
                System.out.println("Error: Book ID must be between 1 and 10000");
                return;
            }
            System.out.println(books[index]);
            books[index] = newId;
            System.out.println(books[index]);
        } catch (NumberFormatException e) {
            System.out.println("Error: Please enter valid integers");
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Invalid index. Please enter a number within the array bounds");
        }
    }
}
