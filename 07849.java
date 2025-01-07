import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
      
        int nums[] = new int[n];
        try{
            for(int i = 0; i < n; i++){
                nums[i] = scan.nextInt();
            }
        } catch (Exception e) {
            return;
        }
        int max = nums[0];
        int min = nums[0];

        
        for(int i = 0; i < n; i++){
            if(max < nums[i]){
                max = nums[i];
            }
            if(min > nums[i]){
                min = nums[i];
            }
        }

        for(int i = 0; i < n; i++){
            if(nums[i] == max){
                nums[i] = min;
            }
            else if(nums[i] == min){
                nums[i] = max;
            }
        }

        for(int i = 0; i < n; i++){
            System.out.print(nums[i] + " ");
        }
    }
}
