import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] remains = new int[42];
        int n;
        int answer = 0;
        for(int i = 0 ; i< 10; i ++){
            n = sc.nextInt();
            remains[n%42]++;
        }
        for(int i : remains){
            if (i!=0){
                answer ++;
            }
        }
        System.out.println(answer);
    }
}     