import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] tmp = sc.nextLine().split(" ");
        int count = 0 ;
        for(int i = 0 ; i  < tmp.length;i++){
            if (!(tmp[i].equals(""))){
                count ++;
            }
        }
        System.out.println(count);
    }
}     