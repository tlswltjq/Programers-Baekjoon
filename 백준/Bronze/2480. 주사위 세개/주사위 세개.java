import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int maxCount = 0;
        int maxNum = 0;
        int prise = 0;

        // 크기 3의 배열을 준비한다 (주사위 결과)
        // 크기 6의 배열을 준비한다. (각 눈금별 몇 개 나왔는지 기록)
        int[] result = new int[3];
        int[] pip = new int[6];

        //주사위 결과를 입력받아 result와 pip에 저장한다.
        for (int i = 0; i < 3; i++) {
            result[i] = sc.nextInt();
            pip[result[i] - 1]++;
        }
        //결과를 확인한다.
        for (int i = 0; i < pip.length; i++) {
            if (maxCount <= pip[i]) {
                maxCount = pip[i];
                maxNum = i + 1;
            }
        }

        switch (maxCount) {
            case 1:
                System.out.println(maxNum * 100);
                break;
            case 2:
                System.out.println(maxNum*100 + 1000);
                break;
            case 3:
                System.out.println(maxNum* 1000 + 10000);
                break;
        }
    }
}
