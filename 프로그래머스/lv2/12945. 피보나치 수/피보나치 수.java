class Solution {
    public int solution(int n) {
        int[] fb = new int[100001];
        fb[0] = 0;
        fb[1] = 1;
        for(int i = 2;i< fb.length;i++){
            fb[i]=fb[i-1]%1234567+fb[i-2]%1234567;
        }
        
        return fb[n]%1234567;
    }
}