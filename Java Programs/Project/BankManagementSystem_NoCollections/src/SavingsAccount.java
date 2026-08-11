public class SavingsAccount extends Account {
    private static final double INTEREST_RATE = 0.03;

    public SavingsAccount(int accNo, String name, int age, String address) {
        super(accNo, name, age, address);
    }

    public void applyInterest() {
        double interest = balance * INTEREST_RATE;
        balance += interest;
        System.out.println("Interest $" + interest + " added to Account " + accountNumber);
    }
}