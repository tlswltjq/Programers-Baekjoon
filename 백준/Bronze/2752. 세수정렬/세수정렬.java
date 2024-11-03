import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> nums = new ArrayList();
        for (int i = 0; i < 3; i++) {
            int num = sc.nextInt();
            nums.add(num);
        }
        nums.sort((a, b) -> a-b);
        System.out.println(nums.stream().map(String::valueOf).collect(Collectors.joining(" ")));
    }
}
