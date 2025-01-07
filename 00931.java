import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k;
        int sum = 0;
        int product = 1;
      
        while(n > 0) {
            try{
                k = n % 10;
                product = k * product;
                sum = sum + k;
                n = n / 10;
            } catch(ArithmeticException e){
                System.out.print("You can't divide by 0");
            }
        }
      
        ratio = (double)product / sum;
        System.out.print(String.format("%.3f", ratio));
    }
}
