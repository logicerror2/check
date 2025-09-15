class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_set = {}
        left = 0
        max_length = 0

        for right in range(len(s)):
            if s[right] not in char_set:
                char_set.insert(s[right])
                max_length = max(max_length, right - left + 1)
        