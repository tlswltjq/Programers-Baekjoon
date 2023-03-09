class Solution {
    public long solution(long n) {
        long number = (long)Math.sqrt(n);

        if (Math.pow(number,2)==n){
            return (long)Math.pow(number+1,2);
        }
        return -1;
    }
}