import java.util.Scanner;

public class ArmstrongCheck {
    public static void main(String[] args) {
        Scanner scr= new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = sc.nextInt();
    

        int temp = number;
        int result = 0;
        int n = 0;

        while (temp != 0) {
            temp = temp/10;
            n++;
        }

        temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            result = result + Math.pow(digit, n);
            temp /= temp /10;
        }

        if (result == number) {
            System.out.println( "Armstrong number");
        } else {
            System.out.println( " not Armstrong number");
        }
    }
}
