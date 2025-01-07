import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        double nums[] = new double[n];
        int count = 0;
        double sum = 0;

        for(int i = 0; i < n; i++){
            nums[i] = scan.nextDouble();
            try{
                if(nums[i] < 0){
                    count++;
                    sum = sum + nums[i];
                }
            }
            catch(Exception e){
                scan.next();
                i--;
            }
        }
        System.out.print(count + " " + String.format("%.2f", sum));
    }
}
