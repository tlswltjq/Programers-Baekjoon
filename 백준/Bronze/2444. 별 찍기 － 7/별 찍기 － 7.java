import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0 ; i < 2*n-1;i++){
            if (i<n){
                for(int j = 0; j< n-i-1 ; j++){
                    System.out.print(" ");
                }
                for(int j = 0 ; j <2*i+1;j++){
                    System.out.print("*");
                }
                System.out.println();
            }else{
                for(int j = 0;j<i%n+1;j++){
                    System.out.print(" ");
                }
                for (int j = 0; j <((n-i%n)-1)*2-1; j++){
                    System.out.print("*");
                }
                System.out.println();
            }
        }
    }
}     