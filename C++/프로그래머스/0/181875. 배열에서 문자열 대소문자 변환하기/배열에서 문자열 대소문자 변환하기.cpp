    #include <string>
    #include <vector>

    using namespace std;

    vector<string> solution(vector<string> strArr)
    {
        for (int i = 0; i < strArr.size(); i++)
        {
            bool toUpper = i % 2;

            for (char& ch : strArr[i])
                ch = toUpper ? toupper(ch) : tolower(ch);
        }
        return strArr;
    }