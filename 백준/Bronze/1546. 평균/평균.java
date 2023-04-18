import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double sum = 0;
        double[] score = new double[n];
        double max = 0;
        for(int i = 0 ; i<n;i++){
            score[i] = sc.nextDouble();
            if (score[i]>max){
                max = score[i];
            }
        }
        for(double d : score){
            sum += d/max*100;
        }

        System.out.println(sum/n);
    }
}     