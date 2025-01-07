import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String text = scan.nextLine();
        int numOfOperations = 0;
        
        for(int i = 1; i < text.length(); i++){
            if(text.charAt(i) == '+' || text.charAt(i) == '-' || text.charAt(i) == '*'){
                numOfOperations++;
            }
        }
        System.out.print(numOfOperations);
    }
}
