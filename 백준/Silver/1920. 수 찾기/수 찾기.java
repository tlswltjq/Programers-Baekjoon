import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuffer sb = new StringBuffer();
        int N = sc.nextInt();
        int M;
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }

        Arrays.sort(A);

        int MM = sc.nextInt();

        for (int i = 0; i < MM; i++) {
            M = sc.nextInt();

            if(search(A,M)){
                sb.append("1\n");
            }else{
                sb.append("0\n");
            }

        }
        sb.deleteCharAt(sb.length() - 1);
        System.out.print(sb.toString());
    }
    public static boolean search(int[] nums, int target) {
        int l = 0;
        int r = nums.length-1;
        int middle;

        while(l<=r){
            middle = l + (r-l)/2;

            if (nums[middle]==target){
                return true;
            }

            if (nums[middle]>target){
                r = middle-1;
            }else{
                l = middle+1;
            }
        }
        return false;

    }
}