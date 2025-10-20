import java.util.*;

class Solution {

    public String rearrangeLongestWord(int n, String[] words) {
        // Handle edge cases: empty or null array.
        if (words == null || words.length == 0) {
            return "";
        }

        // --- Step 1: Find the first longest word ---
        String longestWord = words[0]; // Assume the first word is the longest initially.
        for (int i = 1; i < words.length; i++) {
            // If the current word is longer, it becomes the new longestWord.
            // We use > instead of >= to ensure we keep the *first* longest word in case of a tie.
            if (words[i].length() > longestWord.length()) {
                longestWord = words[i];
            }
        }

        // --- Step 2: Extract and sort unique characters using a TreeSet ---
        // A TreeSet automatically stores unique elements in sorted order.
        Set<Character> uniqueSortedChars = new TreeSet<>();
        for (char c : longestWord.toCharArray()) {
            uniqueSortedChars.add(c);
        }

        // --- Step 3: Construct the final string ---
        StringBuilder result = new StringBuilder();
        for (Character ch : uniqueSortedChars) {
            result.append(ch);
        }

        return result.toString();
    }
    public static void main(String[] args) {
    Solution sol = new Solution();
    String[] words = {"apple", "banana", "cherry"};
    int n = words.length;
    String result = sol.rearrangeLongestWord(n, words);
    System.out.println(result);
}
}
