public class CurrentAccount extends Account {
    public CurrentAccount(int accNo, String name, int age, String address) {
        super(accNo, name, age, address);
    }

    public void applyInterest() {
        // No interest for current accounts
    }
}