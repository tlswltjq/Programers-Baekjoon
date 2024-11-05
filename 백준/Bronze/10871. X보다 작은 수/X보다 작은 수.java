import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();

        int n = sc.nextInt();
        int x = sc.nextInt();
        int target;

        for (int i = 0; i < n; i++) {
            target = sc.nextInt();
            if (target < x) {
                sb.append(target + " ");
            }
        }

        System.out.println(sb.substring(0, sb.length() - 1));
    }
}
