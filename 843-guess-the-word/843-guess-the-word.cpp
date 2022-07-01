/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
   int res = 0, probs[6][26] = {};
    int match(string &w1, string &w2) {
        return inner_product(begin(w1), end(w1), begin(w2), 0, plus<int>(), equal_to<char>());
    }
    string bestCandidate(list<string>& words) {
        string best;
        int max_score = 0;
        for (auto w : words) {
            int score = 1;
            for (auto i = 0; i < 6; ++i)
                score *= probs[i][w[i] - 'a'];
            if (score > max_score) {
                max_score = score;
                best = w;
            }
        }
        return best;
    }
    void findSecretWord(vector<string>& wordlist, Master& master) {
        list<string> remWords(begin(wordlist), end(wordlist));
        auto add_prob = [&](string &w, int d = 1) {
            for (auto i = 0; i < 6; ++i)
                probs[i][w[i] - 'a'] += d;
        };
        for_each(begin(wordlist), end(wordlist), add_prob);
        while (res < 6) {
            auto candidate = bestCandidate(remWords);
            res = master.guess(candidate);
            for (auto it = remWords.begin(); it != remWords.end(); )
                if (match(*it, candidate) != res) {
                    add_prob(*it, -1);
                    remWords.erase(it++);
                }
                else 
                    ++it;
        }
    }
};