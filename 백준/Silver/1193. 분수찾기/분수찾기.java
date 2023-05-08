import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum =2;
        int x = 1, y = 1;
        int sw = 1;
        int count = 1;
        int X = sc.nextInt();
        while(true){
            if (count ==X){
                System.out.println(x + "/" + y);
                return;
            }
            if (x==1 || y==1){
                sw = -sw;
                sum++;
                if (sw>0){
                    count++;
                    x++;
                }else{
                    count++;
                    y++;
                }
            }
            if (count ==X){
                System.out.println(x + "/" + y);
                return;
            }
            if (sw >0){
                x--;
                y++;
                count++;
            }else{
                x++;
                y--;
                count++;
            }
        }
    }
}     