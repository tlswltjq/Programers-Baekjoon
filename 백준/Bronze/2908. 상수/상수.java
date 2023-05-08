import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int str1 = reversNum(sc.next());
        int str2 = reversNum(sc.next());
        if (str1>str2){
            System.out.println(str1);
        }else{
            System.out.println(str2);
        }

    }
    public static int reversNum(String number){
        int total = 0;
        for(int i = 0 ; i < number.length();i++){
            total*=10;
            total +=number.charAt(number.length()-1-i)-'0';
        }
        return total;
    }
}     