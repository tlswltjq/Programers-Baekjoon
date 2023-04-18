import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long result = 0;
        for(int i = 0 ; i < 3 ; i++){
            long n = sc.nextLong();
            result+=n;
        }
        System.out.println(result);
    }
}     