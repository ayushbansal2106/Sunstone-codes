// TaxCalculator.java
// Interface for tax calculation logic

public interface TaxCalculator {
    double TAX_RATE = 0.18; // 18% flat tax

    default double calculateTax(double amount) {
        return amount * TAX_RATE;
    }
}