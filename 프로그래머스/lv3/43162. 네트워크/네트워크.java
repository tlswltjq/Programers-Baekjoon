import java.util.*;

class Solution {
    class Node {
        int name;
        List<Node> links;
        boolean visit;

        public Node(int name) {
            this.name = name;
            this.links = new LinkedList<>();
        }

        void link(Node node) {
            links.add(node);
        }

        void visit() {
            this.visit = true;
        }

        boolean isVisit() {
            return visit;
        }

        @Override
        public String toString() {
            return name + "";
        }
    }

    public int solution(int n, int[][] computers) {
        LinkedList<Node> networks = new LinkedList<>();
        int answer = 0;
        for (int i = 0; i < computers.length; i++) {
            networks.add(new Node(i + 1));
        }
        for (int i = 0; i < computers.length; i++) {
            for (int j = 0; j < computers[i].length; j++) {
                if (i == j) {
                    continue;
                }
                if (computers[i][j] == 1) {
                    networks.get(i).link(networks.get(j));
                }
            }
        }

        // 네트워크 순회 시작 점
        for (Node computer : networks) {
            if (!computer.isVisit()) {
                Stack<Node> stack = new Stack<>();
                stack.push(computer);
                computer.visit();

                while (!stack.isEmpty()) {
                    Node nd = stack.pop();
                    for (Node nn : nd.links) {
                        if (!nn.isVisit()) {
                            stack.push(nn);
                            nn.visit();
                        }
                    }
                }
                answer++;
            }
        }
        return answer;
    }
    
}