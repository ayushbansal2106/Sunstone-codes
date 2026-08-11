// Savings account accrues interest
public class SavingsAccount extends Account {
    private static final double INTEREST_RATE = 0.03; // 3%

    public SavingsAccount(int accountNumber, String name, int age, String address) {
        super(accountNumber, name, age, address);
    }

    @Override
    public void applyInterest() {
        double interest = balance * INTEREST_RATE;
        balance += interest;
        transactions.add("Interest added: $" + interest);
    }
}