import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String text = scan.nextLine();
        int numOfVowels = 0;
        
        for(int i = 0; i < text.length(); i++){
            if( text.charAt(i) == 'A' || text.charAt(i) == 'E' ||
                text.charAt(i) == 'I' || text.charAt(i) == 'O' || 
                text.charAt(i) == 'U' || text.charAt(i) == 'Y'){
                numOfVowels++;
            }
        }
        System.out.print(numOfVowels);
    }
}
