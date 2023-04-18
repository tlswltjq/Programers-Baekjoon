import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.print(a * b / GCD(a, b));
    }

    public static long GCD(long a, long b) {
        while (b != 0) {
            long r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}     