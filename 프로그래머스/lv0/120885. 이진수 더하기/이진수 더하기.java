class Solution {
    public String solution(String bin1, String bin2) {
        if (bin1.equals("0")&&bin2.equals("0")){
            return "0";
        }
        return Integer.toBinaryString(bTod(Integer.parseInt(bin1)) + bTod(Integer.parseInt(bin2)));
    }
    public int bTod(int a){
        if (a ==1) {
            return 1;
        }
        return bTod(a/10)*2+a%10;
    }
}