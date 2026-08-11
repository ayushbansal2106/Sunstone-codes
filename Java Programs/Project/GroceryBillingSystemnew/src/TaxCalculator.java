/**
 * Interface to calculate tax.
 */
public interface TaxCalculator {
    double TAX_RATE = 0.18;

    double calculateTax(double amount);
}
