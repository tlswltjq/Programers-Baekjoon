import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        HashMap<Character, Integer> hmap = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        int total = 0;

        hmap.put('A',3);
        hmap.put('B',3);
        hmap.put('C',3);

        hmap.put('D',4);
        hmap.put('E',4);
        hmap.put('F',4);

        hmap.put('G',5);
        hmap.put('H',5);
        hmap.put('I',5);

        hmap.put('J',6);
        hmap.put('K',6);
        hmap.put('L',6);

        hmap.put('M',7);
        hmap.put('N',7);
        hmap.put('O',7);

        hmap.put('P',8);
        hmap.put('Q',8);
        hmap.put('R',8);
        hmap.put('S',8);

        hmap.put('T',9);
        hmap.put('U',9);
        hmap.put('V',9);

        hmap.put('W',10);
        hmap.put('X',10);
        hmap.put('Y',10);
        hmap.put('Z',10);

        for(int i = 0 ; i < str1.length();i++){

            total += hmap.get(str1.charAt(i));
        }

        System.out.println(total);
    }

}     