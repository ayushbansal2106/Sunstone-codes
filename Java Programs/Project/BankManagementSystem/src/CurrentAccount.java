// Current account has no interest, behaves like a basic account
public class CurrentAccount extends Account {
    public CurrentAccount(int accountNumber, String name, int age, String address) {
        super(accountNumber, name, age, address);
    }

    @Override
    public void applyInterest() {
        // No interest for current account
    }
}