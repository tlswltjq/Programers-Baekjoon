import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int result = -1;
        int num;
        int minimum = Integer.MAX_VALUE;
        for (int i = 0; i < 7; i++) {
            num = sc.nextInt();
            if (num%2!=0){
                result+=num;
                minimum = minimum > num ? num : minimum;
            }
        }
        if (result < 0){
            System.out.println(result);
        }else{
            System.out.println(result+1);
            System.out.println(minimum);
        }
    }
}
