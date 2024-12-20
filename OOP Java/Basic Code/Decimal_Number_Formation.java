
import java.text.DecimalFormat;

public class Decimal_Number_Formation {

    public static void main(String[] args) {
        DecimalFormat ob = new DecimalFormat("0.00");
        double x = 5.13246544;
        System.out.println("X = " + ob.format(x));
    }
}