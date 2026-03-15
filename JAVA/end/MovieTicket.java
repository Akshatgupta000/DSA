import java.util.*;

public class MovieTicket {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int type = sc.nextInt(); sc.nextLine();
        String movie = sc.nextLine();
        String seatNumber = "A10";
        String ticketType = "";
        String snackCombo = "No";
        String loungeAccess = "No";
        double totalPrice = 200;

        if (type == 1) {
            ticketType = "Standard Ticket";
        } else if (type == 2) {
            ticketType = "Premium Ticket";
            snackCombo = "Yes";
            totalPrice += 150;
        } else if (type == 3) {
            ticketType = "VIP Ticket";
            snackCombo = "Yes";
            loungeAccess = "Yes";
            totalPrice += 150 + 300;
        }

        System.out.println(movie);
        System.out.println(seatNumber);
        System.out.println(ticketType);
        System.out.println("Snack Combo: " + snackCombo);
        System.out.println("Lounge Access: " + loungeAccess);
        System.out.printf("%.2f\n", totalPrice);
    }
}
