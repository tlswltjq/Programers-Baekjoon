import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        while(i >0){
            i-=4;
            System.out.print("long ");
        }
        System.out.println("int");
    }
}     