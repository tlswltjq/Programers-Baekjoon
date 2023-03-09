import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        for(int i =0;;i++){
            if (i==b) break;
            for(int j = 0;;j++){
                if(j==a) break;
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}