import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int yoot;
        for (int i = 0; i < 3; i++) {
            yoot = 0;
            for (int j = 0; j < 4; j++) {
                yoot +=sc.nextInt();
            }
            switch (yoot){
                case 3 :
                    System.out.println("A");
                    break;
                case 2 :
                    System.out.println("B");
                    break;
                case 1 :
                    System.out.println("C");
                    break;
                case 0 :
                    System.out.println("D");
                    break;
                case 4 :
                    System.out.println("E"); 
                    break;
            }
        }
    }
}
