package Exception_Handling_1;

import java.util.Scanner;

public class Problem_Solve_142_Tuto2 {

    public static void main(String[] args) {
        int count = 1;
        do {
            try {
                Scanner ab = new Scanner(System.in);
                System.out.print("Please enter num1 : ");
                int num1 = ab.nextInt();
                System.out.print("Please enter num1 : ");
                int num2 = ab.nextInt();
                double result = num1 / num2;
                System.out.println("Result : " + num1 + "/" + num2 + " = " + result + "\n");
                count++;
            } catch (Exception e) {
                System.out.println("\nException : " + e);
                System.out.println("You must enter integer.Please try again");
            }
        } while (count == 1);

    }
}
