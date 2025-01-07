import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String text = scan.nextLine();
        int numOfSt= 0;
        
        for(int i = 0; i < text.length(); i++){
            if(text.charAt(i) == '.' || text.charAt(i) == '!' || text.charAt(i) == '?'){
                numOfSt++;
            }
        }
        System.out.print(numOfSt);
    }
}
