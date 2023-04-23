import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        for (int i = 0; i < 26; i++) {
            int tmp = -1;
            for (int j = 0; j < s.length(); j++) {
                if (i + 97 == s.charAt(j)) {
                    tmp = j;
                    break;
                }
            }
            if (i ==0){
                System.out.print(tmp);
            }else{
                System.out.print(" " + tmp);
            }

        }
    }
}     