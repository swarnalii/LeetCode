class Solution {
public:
    unordered_map<string, string> m;
    int n = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
	    string res = "http://tinyurl.com/" + to_string(n);
		n++;
        m[res] = longUrl;
		return res;		
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));