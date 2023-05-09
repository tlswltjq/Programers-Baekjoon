import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int begin, mid, end;
        int[] basket = new int[N];
        for (int i = 0; i < basket.length; i++) {
            basket[i] = i + 1;
        }

        for (int i = 0; i < M; i++) {
            begin = sc.nextInt();
            end = sc.nextInt();
            mid = sc.nextInt();
            int[] btom = new int[mid - begin];
            int[] mtoe = new int[end - mid + 1];
            for (int j = 0; j < btom.length; j++) {
                btom[j] = basket[begin + j - 1];
            }
            for (int j = 0; j < mtoe.length; j++) {
                mtoe[j] = basket[mid + j - 1];
            }
            for (int j = 0; j < mtoe.length; j++) {
                basket[begin + j - 1] = mtoe[j];
            }
            for (int j = 0; j < btom.length; j++) {
                basket[begin+j+end-mid] = btom[j];
            }
        }
        for(int i : basket){
            System.out.print(i + " ");
        }
    }
}