import java.util.Scanner;

public class switcharth {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input numbers
        System.out.println("Enter the first number");
        double num1 = scanner.nextDouble();
        System.out.println("Enter the second number ");
        double num2 = scanner.nextDouble();

        // Display options
        System.out.println("Choose an operation: ");
        System.out.println("+ for Addition");
        System.out.println("- for Subtraction");
        System.out.println("* for Multiplication");
        System.out.println("/ for Division");
        System.out.println("% for Modulus");

        // Input choice
        char choice = scanner.next().charAt(0);

        // Perform the operation based on user's choice
        switch (choice) {
            case '+':
                System.out.println("the addition is: " + (num1 + num2));
                break;
            case '-':
                System.out.println("the  subtraction is: " + (num1 - num2));
                break;
            case '*':
                System.out.println("the  multiplication is: " + (num1 * num2));
                break;
            case '/':
           
                    System.out.println("the  division is: " + (num1 / num2));
              
                
                break;
            case '%':
                
                    System.out.println("the modulus is: " + (num1 % num2));
               break;
            default:
                System.out.println("pleaseenter valid operation.");
                break;
        }

        scanner.close();
    }
}
