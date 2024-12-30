
package Assignment_3.Answer_5;

class SavingsAccount extends BankAccount{
    public SavingsAccount(String accountNumber, double balance) {
        super(accountNumber, balance);
    }

    @Override
    public void deposit(double amount) {
        setBalance(getBalance() + amount);
        System.out.println("Deposit Money : " + amount + " Tk successful.\nCurrent balance: "+getBalance()+" Tk");
    }

    @Override
    public void withdraw(double amount) {
        if (getBalance() >= amount) {
            setBalance(getBalance() - amount);
            System.out.println("Withdraw Money : " + amount + " Tk successful.\nCurrent balance : "+getBalance()+" Tk");
        } else {
            System.out.println("Insufficient balance.   Withdraw failed !!!");
        }
    }
}
