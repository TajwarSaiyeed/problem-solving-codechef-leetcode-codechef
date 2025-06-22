class Solution
{
public:
    string generateTag(string caption)
    {
        string ans = "#";
        bool firstWord = true;
        string word = "";

        for (char c : caption)
        {
            if (c == ' ')
            {
                if (!word.empty())
                {
                    if (firstWord)
                    {
                        for (char &ch : word)
                            ch = tolower(ch);
                        firstWord = false;
                    }
                    else
                    {
                        word[0] = toupper(word[0]);
                        for (int i = 1; i < word.size(); ++i)
                            word[i] = tolower(word[i]);
                    }
                    ans += word;
                    word = "";
                }
            }
            else if (isalpha(c))
            {
                word += c;
            }
        }

        if (!word.empty())
        {
            if (firstWord)
            {
                for (char &ch : word)
                    ch = tolower(ch);
            }
            else
            {
                word[0] = toupper(word[0]);
                for (int i = 1; i < word.size(); ++i)
                    word[i] = tolower(word[i]);
            }
            ans += word;
        }

        if (ans.length() > 100)
            ans = ans.substr(0, 100);

        return ans;
    }
};
