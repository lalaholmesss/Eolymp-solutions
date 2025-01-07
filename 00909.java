import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String text;
        
        try{
            text = scan.nextLine();
            if(text == null || text.isEmpty()){
                throw new IllegalArgumentException("can't be empty");
            }
        } catch(Exception e){
            return;
        }
        
        String[] words = text.split("\\s+");
        int numOfWords = words.length;
        System.out.print(numOfWords);
    }
}
