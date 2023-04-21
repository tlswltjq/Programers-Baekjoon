import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int t = sc.nextInt();
        for(int i = 0 ; i<t;i++){
            int r = sc.nextInt();
            char[] tmp = sc.next().toCharArray();
            for(int j = 0 ; j<tmp.length;j++){
                for(int f = 0; f<r;f++){
                    sb.append(tmp[j]);
                }
            }
            System.out.println(sb.toString());
            sb.setLength(0);
        }
    }
}     