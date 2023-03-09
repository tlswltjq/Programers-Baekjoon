class Solution {
    public boolean solution(int x) {
        boolean answer = true;
        int num = x;
        int sum=0;
        while(true){
            if(num==0){
                break;
            }
            sum+=num%10;
            num/=10;
        }
        answer = (x%sum)==0 ? true : false;
        System.out.println(answer);
        return answer;
    }
}