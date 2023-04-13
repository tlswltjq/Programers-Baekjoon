class Solution {
    public int solution(int[] arr) {
        int answer =0;
        for(int i =1;i<arr.length;i++){
            arr[i] = (arr[i]*arr[i-1])/GCD(arr[i], arr[i-1]);
        }
        return arr[arr.length-1];
    }
    public int GCD(int a, int b){
        while(b!=0){
            int r =a%b;
            a = b;
            b= r;
        }
        return a;
    }
}