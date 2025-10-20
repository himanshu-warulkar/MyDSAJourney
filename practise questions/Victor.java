import java.util.*;

class Victor {
    public int findEligibleChildren(int n, int v, int[] w) {
        if (w==null || n==0) {
            return 0;
        }
        long totalChildrenWealth = 0;
        for (int weight : w){
            totalChildrenWealth += weight;
        }
        int eligibleCount = 0;
        for (int i=0; i<n; i++){
            long currentChildWealth = w[i];
            long sumOfOthers = totalChildrenWealth - currentChildWealth;

            if (v+currentChildWealth > sumOfOthers) eligibleCount++;
        }
        return eligibleCount;
    
    }

}
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int v = sc.nextInt();
    int[] w = new int[n];
    for (int i = 0; i < n; i++) {
        w[i] = sc.nextInt();
    }
    Victor sol = new Victor();
    int result = sol.findEligibleChildren(n, v, w);
    System.out.println(result);
}
