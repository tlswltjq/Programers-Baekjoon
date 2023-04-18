import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] basket = new int[sc.nextInt()];
        for(int i = 0;i< basket.length;){
            basket[i] = ++i;
        }
        int n = sc.nextInt();
        for(int i = 0 ; i<n; i++){
            int ii = sc.nextInt();
            int jj = sc.nextInt();
            reverse(basket, ii, jj);
        }
        for(int i : basket){
            System.out.print(i + " ");
        }
    }
    public static void reverse(int[] arr, int a, int b){
        a--;
        b--;
        while(a<b){
            int tmp= arr[a];
            arr[a] = arr[b];
            arr[b] = tmp;
            a++;
            b--;
        }
    }
}     