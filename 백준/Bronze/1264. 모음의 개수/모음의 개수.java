import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str="";
        int count;
        while (true){
            str = sc.nextLine().toLowerCase();
            count = 0;
            for(int i = 0; i<str.length();i++){
                if(str.charAt(i)=='a'|str.charAt(i) == 'e'| str.charAt(i)=='i'| str.charAt(i) == 'o'|str.charAt(i)== 'u'){
                    count++;
                }
            }
            if (!str.equals("#")){
                System.out.println(count);
            }else{
                break;
            }
        }
    }
}