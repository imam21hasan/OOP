package Assignment_3.Answer_5;

public class Main_5 {

    public static void main(String[] args) {
        double ibal, damt, wamt;
        ibal = 1000.00;
        SavingsAccount sa = new SavingsAccount("SA008", ibal);
        System.out.println("Savings Account initial Balace: " + ibal + " Tk");
        damt = 500.00;
        sa.deposit(damt);
        wamt = 250.00;
        sa.withdraw(wamt);
        wamt = 1600.00;
        System.out.println("\nTry to withdraw: " + wamt + " Tk");
        sa.withdraw(wamt);

        System.out.println();
        ibal = 5000.00;
        CurrentAccount ca = new CurrentAccount("CA008", ibal);
        System.out.println("Current Account initial Balace: " + ibal + " Tk");
        damt = 2500.00;
        ca.deposit(1000.0);
        wamt = 1250.00;
        ca.withdraw(3000.0);
        wamt = 4000.00;
        System.out.println("\nTry to withdraw: " + wamt + " Tk");
        ca.withdraw(wamt);
    }
}
